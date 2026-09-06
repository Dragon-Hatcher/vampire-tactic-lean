import Lean
import Vampire.Logic
import Vampire.Avatar
import Vampire.Bridge
import Vampire.Clause
import Vampire.Cnf
import Vampire.Prenex
import Vampire.Proof
import Vampire.Sat
import Vampire.Support

/-!
# Replaying a refutation as a Lean proof

A port of Vampire's Lean code generator (`Shell/LeanChecker/LeanChecker.cpp` and
`LeanPrinter.cpp`) into the elaborator. It produces the same proof the generator would
have written to a file, but as `Expr`s and tactic `Syntax` rather than as source text.

The generated file has two halves, and so does this:

* `outputInferenceStep` writes one lemma per derived unit,

      theorem inf_s9 : <premise₁> → <premise₂> → <conclusion> := by
        intro h0 h1 v0
        have i0 := h0 t₁ t₂
        have i1 := h1
        grind only [cases Or]

  Here that is `stepLemma`: the statement is built as an `Expr` and the tactic script is
  run against it by `proveBy`, giving a proof term.

* `outputProofStep` then chains them,

      have step9 := inf_s9 step7 step8

  which here is an application of one proof term to the others.

The tactic scripts are ported line for line, including the fork's own changes to them —
notably the `ac_nf0 … <;> try (first | assumption | trivial)` in clausification, which
replaced an `ac_nf` whose `trivial` scanned the whole context.

## Deviations, and why

Four places do something the generator does not, each because the generator is writing a
standalone file and this is working inside a goal:

* **Input units are bridged.** `fullProof` takes Vampire's own units as hypotheses and
  has nothing to match them against. Here the Lean hypothesis the unit came from is
  right there, and the two can differ — Vampire orients an equation by its term
  ordering — so `bridgeInput` carries the proof across.
* **Witnesses come from instance synthesis.** Vampire assumes every sort is non-empty
  and its proofs use that; the generated file declares `[Inhabited ι]` in its preamble,
  so `inhabitant` asks for that instance (or `Nonempty`).
* **Skolem symbols are `Classical.choose` terms.** The generator writes
  `let ⟨sk, h⟩ := stepP`, which scopes over the rest of one big tactic block. A
  standalone lemma cannot state a conclusion mentioning a symbol bound that way, so the
  witnesses are taken as closed terms instead.
* **A script stops when the goal closes.** The generated file is one block per lemma
  and assumes every line has a goal to act on.

Three scripts are transposed rather than copied. Multi-clause clausification closes with
`vampire_finish_clausify`, which splits the conjunction `cnfify` produced and looks for
the clause it wants, because the generator sizes one shared destructuring to Vampire's
own clause count and VampLean's `cnfify` need not split the same way. The quantifier
reordering `outputReorderIfNeeded` inserts is done by introducing the goal's binders and
reverting them in the prenex order, rather than by stating the permutation as an `Iff`
and rewriting with it — the same permutation, without a higher-order rewrite to find.
And the `ennf` script gets the `first | exact h | grind` its three sibling normal forms
already have, in place of a bare `exact h` that assumes VampLean and Vampire agree on
the order of the disjuncts — they do not always.

AVATAR needs no `{sA : Prop}` binders at all. A split proposition is introduced by a
definition step as `let sAv := C`, so it *is* `C`; the replay simply uses `C`. The
per-theorem binders this fork moved out of a section variable block — because Lean
rescanned the block once per declaration — have no counterpart here.

## What is not ported

* **Theory axioms.** The generated file emits a Lean `axiom` for each; a tactic cannot.
* **`EVALUATION`**, whose script is `norm_num1` and `our_int_not_lt` — Mathlib-backed,
  and gone since VampLean dropped Mathlib. The translation does not produce arithmetic
  either.
* **`rectify`'s recorded renamings.** `LeanChecker::rectify` emits a `conv … rw [rN]`
  per binder group whose substitution is not the identity, built from the information
  the inference replayer records. Those renamings are not exported; `symm_match`, and a
  fallback that reapplies the premise under the conclusion's own binders, cover the
  alpha-equivalent and the permuted cases between them.
* **The `bv_decide` encoding of the SAT refutation**, which the generator falls back to
  when the solver's derivation is unavailable. Replaying the derivation is the path this
  fork added and the one taken here.

The definition introductions — predicate, function, and the folding that follows them —
and the skolemisation of an existential under a universal *are* ported; see
`.predicateDefinition`, `.functionDefinition`, `.definitionFoldingPred` and `skolemise`.

A step needing one of these is reported by name and unit number rather than guessed at.
-/

set_option autoImplicit false

/-- Re-check the whole assembled proof term before handing it back.

Off by default. Every application the assembly makes is checked as it is made, so this
establishes nothing new; it costs a full `Meta.check` of a term the kernel is about to
check anyway, which on a large refutation is most of the replay. Turn it on when a
kernel error does come out of a replayed proof and the question is which part of the
assembly, rather than which application, is wrong. -/
register_option vampire.checkReplay : Bool := {
  defValue := false
  descr := "re-check the assembled replay term with `Meta.check` before returning it"
}

namespace Vampire

open Lean Elab Term Meta

/-- What stands behind one of the problem's assertions. -/
inductive Input where
  /-- A translated hypothesis, with its proof. -/
  | hypothesis (proof : Expr)
  /-- A definition's own equation. Vampire has no definitions, so the translation
  asserts the equation instead; nothing in Lean proves it, because it holds by `rfl`. -/
  | definition (symbol : Expr)

/-- What a Vampire symbol means in Lean.

Symbols the goal was translated from map back to the `Expr` they came from — that
correspondence is held in memory, not recovered from a mangled name. A symbol Vampire
introduced itself (a skolem function, an AVATAR definition) has no Lean meaning and is
reported. -/
structure Interp where
  /-- The Lean type a Vampire sort denotes, by type-constructor number. -/
  sort : Nat → Option Expr
  /-- The Lean term a function symbol denotes, by functor. -/
  fn : Nat → Option Expr
  /-- The Lean term a predicate symbol denotes. -/
  pred : Nat → Option Expr
  /-- What input unit `n` stands for. -/
  input : Nat → Option Input
  /-- The lambda an introduced predicate symbol abbreviates. Filled in as the
  definition-introduction steps are replayed. -/
  definedPred : Nat → Option Expr
  /-- The lambda an introduced function symbol abbreviates. -/
  definedFn : Nat → Option Expr
  /-- The term a skolem symbol stands for. Filled in as the skolemisation steps are
  replayed. -/
  skolem : Nat → Option Expr
  /-- What AVATAR's split variable `v` stands for. Filled in as the definition steps
  are replayed: a definition names a component, and the generated file introduces it as
  a `let`, so the name is definitionally the component and can simply be it. -/
  splitProp : Nat → Option Expr

/-- The name a Vampire variable is given in Lean, matching `LeanPrinter`'s `v0`, `v1`. -/
def varName (v : Nat) : Name := Name.mkSimple s!"v{v}"

namespace Replay

/-- Symbols still in scope while a statement is built: Vampire variables mapped to the
local constants standing for them. -/
abbrev Vars := Std.HashMap Nat Expr

/-- `¬e`. `Not` takes no implicit argument, so this is the whole of what `mkAppM`
would do for it. -/
private def notExpr (e : Expr) : Expr := mkApp (.const ``Not []) e

private def sortExpr (i : Interp) (syms : Symbols) (s : Nat) : MetaM Expr := do
  let some e := i.sort s
    | throwError "vampire: the sort '{syms.sorts.getD s (toString s)}' has no Lean \
        meaning; it was introduced by the prover"
  return e

private def fnExpr (i : Interp) (syms : Symbols) (f : Nat) : MetaM Expr := do
  if let some e := i.skolem f then return e
  if let some e := i.definedFn f then return e
  let some e := i.fn f
    | throwError "vampire: the function symbol \
        '{(syms.funs[f]?).map (·.name) |>.getD (toString f)}' has no Lean meaning; \
        it was introduced by the prover (skolemisation and definition introduction are \
        not ported yet)"
  return e

private def predExpr (i : Interp) (syms : Symbols) (p : Nat) : MetaM Expr := do
  if let some e := i.definedPred p then return e
  let some e := i.pred p
    | throwError "vampire: the predicate symbol \
        '{(syms.preds[p]?).map (·.name) |>.getD (toString p)}' has no Lean meaning; \
        it was introduced by the prover"
  return e

mutual

/-- A first-order term as a Lean `Expr`. -/
partial def termExpr (i : Interp) (syms : Symbols) (vs : Vars) : FTerm → MetaM Expr
  | .var v => do
    let some e := vs[v]? | throwError "vampire: variable v{v} is not in scope"
    return e
  | .app f args => do
    let hd ← fnExpr i syms f
    let as ← args.mapM (termExpr i syms vs)
    return mkAppN hd as

/-- A formula as a Lean `Prop`. Mirrors `LeanPrinter::printFormula`.

The connectives are built with `mkApp`, not `mkAppM`. `And`, `Or`, `Not` and `Iff` take
no implicit argument, so there is nothing for `mkAppM` to unify and nothing it can do
that naming the constant does not — but it still infers the type of every argument and
runs `isDefEq` against `Prop` at every node of a formula, once per node per level of
nesting. A clause with several hundred atoms in it is built once per step and once per
premise of every step that uses it, so this is the innermost loop of stating a
refutation. `Eq` does take one, and `mkEq` supplies it from the argument's type rather
than through a metavariable — which is the same point `Vampire/Bridge.lean` records
about `mkAppM`: assigning a metavariable makes `checkAssignment` walk the value. -/
partial def formExpr (i : Interp) (syms : Symbols) (vs : Vars) : FForm → MetaM Expr
  | .lit p pol args => do
    let hd ← predExpr i syms p
    let e := mkAppN hd (← args.mapM (termExpr i syms vs))
    return if pol then e else notExpr e
  | .eq pol _ lhs rhs => do
    let l ← termExpr i syms vs lhs
    let r ← termExpr i syms vs rhs
    let e ← mkEq l r
    return if pol then e else notExpr e
  | .tru => return .const ``True []
  | .fls => return .const ``False []
  | .neg f => do return notExpr (← formExpr i syms vs f)
  | .conj fs => do foldBin ``And (← fs.mapM (formExpr i syms vs)) (.const ``True [])
  | .disj fs => do foldBin ``Or (← fs.mapM (formExpr i syms vs)) (.const ``False [])
  | .imp a b => do mkArrow (← formExpr i syms vs a) (← formExpr i syms vs b)
  | .iff a b => do
    return mkApp2 (.const ``Iff []) (← formExpr i syms vs a) (← formExpr i syms vs b)
  | .xor a b => do
    -- VampLean's `Xor'` is not `Not ∘ Iff`: it's the dedicated connective Vampire's own
    -- `<~>` prints as, and the ennf/nnf lemma sets (`not_iff_xor`, `our_xor_to_nnf`, …)
    -- rewrite *into* it. Desugaring to `¬(a ↔ b)` here would leave a formula those
    -- lemmas never fire on, so the reference generator uses `Xor'` and so do we.
    -- Qualified: `Xor'` is namespaced so that this library and Mathlib can be
    -- imported together, and Mathlib has an `Xor'` of its own that no VampLean lemma
    -- mentions -- an unqualified `Xor'` would resolve to that one wherever both are in
    -- scope, and the replay would then rewrite nothing.
    return mkApp2 (.const ``Xor' []) (← formExpr i syms vs a) (← formExpr i syms vs b)
  | .all vars f => quantified i syms vs vars f true 0
  | .ex vars f => quantified i syms vs vars f false 0
  | .split v => do
    let some e := i.splitProp v
      | throwError "vampire: the AVATAR split sA{v} is used before it is defined"
    return e
where
  foldBin (c : Name) (es : Array Expr) (unit : Expr) : MetaM Expr := do
    if es.isEmpty then return unit
    let hd := Expr.const c []
    let mut e := es[es.size - 1]!
    for j in [1:es.size] do
      e := mkApp2 hd es[es.size - 1 - j]! e
    return e

/-- Bind `vars[k:]` and build the body under them. Universal binders become `∀`,
existential ones `Exists`. -/
partial def quantified (i : Interp) (syms : Symbols) (vs : Vars)
    (vars : Array (Nat × Nat)) (f : FForm) (universal : Bool) (k : Nat) : MetaM Expr := do
  if h : k < vars.size then
    let (v, s) := vars[k]
    let ty ← sortExpr i syms s
    withLocalDeclD (varName v) ty fun x => do
      let body ← quantified i syms (vs.insert v x) vars f universal (k + 1)
      if universal then mkForallFVars #[x] body
      else
        return mkApp2 (.const ``Exists [← getLevel ty]) ty (← mkLambdaFVars #[x] body)
  else
    formExpr i syms vs f

end

/-- The statement of a unit.

A clause is the universal closure of the disjunction of its literals, which is what
`LeanChecker::outputClause` prints; a formula carries its own quantifiers. -/
def splitLit (i : Interp) (v : Nat) (positive : Bool) : MetaM Expr := do
  let some e := i.splitProp v
    | throwError "vampire: the AVATAR split sA{v} is used before it is defined"
  return if positive then e else notExpr e

/-- A SAT clause as a Lean disjunction, which is `LeanChecker::outputSatClause`. -/
def satClauseExpr (i : Interp) (lits : Array (Nat × Bool)) : MetaM Expr := do
  if lits.isEmpty then return .const ``False []
  let mut e ← splitLit i (lits[lits.size - 1]!).1 (lits[lits.size - 1]!).2
  for j in [1:lits.size] do
    let (v, p) := lits[lits.size - 1 - j]!
    e := mkApp2 (.const ``Or []) (← splitLit i v p) e
  return e

/--
The statement of a unit.

A clause is the universal closure of the disjunction of its literals, under the splits
it holds; a formula carries its own quantifiers. A unit that AVATAR gave a SAT clause
*is* that clause, which is how `LeanChecker` prints it.
-/
def stepType (i : Interp) (syms : Symbols) (s : Step) : MetaM Expr := do
  let body ←
    if let some sat := s.satClause then satClauseExpr i sat
    else if s.isClause then go {} 0
    else formExpr i syms {} s.statement
  -- `sA₁ → … → C`, as `outputCumulativeSplits` prints it.
  let mut e := body
  for (v, p) in s.splits.reverse do
    e ← mkArrow (← splitLit i v p) e
  return e
where
  go (vs : Vars) (k : Nat) : MetaM Expr := do
    if h : k < s.vars.size then
      let (v, sort) := s.vars[k]
      let ty ← sortExpr i syms sort
      withLocalDeclD (varName v) ty fun x => do
        mkForallFVars #[x] (← go (vs.insert v x) (k + 1))
    else
      formExpr i syms vs s.statement

end Replay

namespace Tac

open Lean.Parser.Tactic

/-- A term as syntax, for the instantiation lines.

Variables become the identifiers `intro` bound them under, and symbols become the
`Expr`s they translate to, spliced in directly. `witness` covers a variable that is not
one of the conclusion's — see `inhabitant`. -/
partial def termSyntax (i : Interp) (syms : Symbols) (witness : Nat → Option Term := fun _ => none) :
    FTerm → TermElabM Term
  | .var v => return (witness v).getD (mkIdent (varName v))
  | .app f args => do
    let hd ← Replay.fnExpr i syms f
    let hdStx ← exprToSyntax hd
    if args.isEmpty then return hdStx
    let as ← args.mapM (termSyntax i syms witness)
    return ⟨Syntax.mkApp hdStx as⟩

/--
The local context a step lemma is proved in.

The generated file states each step as a top-level `theorem`, whose context is just its
own premises. Replaying inside a goal, the context instead accumulates the user's
hypotheses and every definition bound so far — and `grind` reads the context, so that
accumulation is paid on every step. Measured on ALG130: 8ms per superposition in a small
context, 100ms in the goal's.

So the goal is built in a context holding only what the statement reaches, plus the
plain variables and instances that a spliced term may mention. Proofs and definitions
the statement does not reach are dropped.

The definitions that remain lose their values. In the generated file a definition is a
*section variable* — `variable {«_sP0» : Prop}` — inside every step theorem, and only
`fullProof` binds it with a `let`. That opacity is not incidental: a definition names a
formula Vampire deliberately did not expand, and a step lemma that can see through it
gives `grind` the whole expansion to case-split. Stripping the value here restores it.
The proof term still mentions the variable, and is still type-correct where the value is
known, because a proof that works for an opaque `x` works for any particular one.
-/
def restrictedContext (seeds : Array Expr) (opaqueLets : Bool)
    (droppable : Option (Std.HashSet FVarId) := none) :
    MetaM (LocalContext × LocalInstances) := do
  let lctx ← getLCtx
  -- `Expr.collectFVars`, not a hand-rolled traversal. An `Expr` is a DAG with heavy
  -- sharing and the naive structural recursion has no visited set, so it re-walks every
  -- shared subterm — exponential in the sharing, not linear in the size. That is fine
  -- until it is asked for the free variables of a `let`'s *value*, and the values here
  -- are skolem witnesses of the form `Classical.choose <the whole parent proof>`. On
  -- SYN036+1 a 181-step refutation spent over two minutes inside it, 8333 of 8378 stack
  -- samples, nested nine hundred frames deep.
  --
  -- One `CollectFVars.State` is threaded through the whole search rather than one per
  -- declaration, so the memo table is shared: a proof term reached from two different
  -- declarations is walked once for the pair, not once each.
  let mut st : CollectFVars.State := {}
  for e in seeds do st := (← (Expr.collectFVars e).run st).2
  let mut needed : Std.HashSet FVarId := {}
  let mut i := 0
  -- `collectFVars` appends what it finds to `st.fvarIds`, so walking that array by index
  -- picks up everything reached from a declaration visited later in the same pass.
  while i < st.fvarIds.size do
    let fv := st.fvarIds[i]!
    i := i + 1
    if needed.contains fv then continue
    needed := needed.insert fv
    if let some d := lctx.find? fv then
      st := (← (Expr.collectFVars d.type).run st).2
      if let some v := d.value? then st := (← (Expr.collectFVars v).run st).2
  let mut result := lctx
  for d in lctx do
    if needed.contains d.fvarId then
      if opaqueLets && d.isLet then
        result := result.modifyLocalDecl d.fvarId fun d =>
          .cdecl d.index d.fvarId d.userName d.type .default d.kind
      continue
    -- A plain variable or instance can be mentioned by a term the script splices in —
    -- an `Inhabited` witness, say — and costs nothing to keep. A proof or a definition
    -- the statement does not reach is what makes the context expensive.
    --
    -- An instance is kept even when it is a `Prop`, which `Nonempty` is: `inhabitant`
    -- reaches for a `Nonempty` instance before anything else and hands back
    -- `Classical.choice inst`, so erasing `inst` on the grounds that it is a `Prop`
    -- leaves the spliced witness naming a variable that is no longer in scope. That
    -- surfaces as "synthetic hole ... assigned to value incompatible with the current
    -- context", which says nothing about instances at all. Monomorphisation is what
    -- makes it bite: it asserts non-emptiness as a local `Nonempty` hypothesis, where a
    -- hand-written goal more often carries `Inhabited`, which is not a `Prop`.
    -- `isProp` and `isClass?` are `whnf` calls, and a replay asks this of the whole
    -- context once per step: 0.09ms a step over the benchmark's 32000 of them, which is
    -- 28% of a cheap one. The verdict cannot change — a declaration is immutable, and
    -- the only ones a replay adds are the `let`s for definitions and skolems, which
    -- `isLet` settles without asking. So it is computed once, by `classify`, and what
    -- arrives here is a lookup.
    let drop ←
      match droppable with
      | some s => pure (d.isLet || s.contains d.fvarId)
      | none => pure (d.isLet || ((← isProp d.type) && (← isClass? d.type).isNone))
    if drop then
      result := result.erase d.fvarId
  return (result, ← getLocalInstances)

/--
Which of the context's declarations a step's goal does not want, once and for all.

The `let`s are not in it: a replay adds one per definition and per skolem symbol as it
goes, and `d.isLet` says so without a `whnf`. What this is for is the rest — the
hypotheses of the negated goal, which are `Prop`s and not classes, and which
`restrictedContext` would otherwise re-decide on every step.
-/
def classifyDroppable : MetaM (Std.HashSet FVarId) := do
  let mut out : Std.HashSet FVarId := {}
  for d in ← getLCtx do
    if d.isLet then continue
    if (← isProp d.type) && (← isClass? d.type).isNone then out := out.insert d.fvarId
  return out

/-- Prove `type` by running `tacs`. This is what `theorem … := by …` does in the
generated file; here the result is a term rather than a declaration. -/
def proveBy (type : Expr) (tacs : Array (TSyntax `tactic)) (what : MessageData)
    (restrict : Bool := false) (opaqueLets : Bool := true)
    (droppable : Option (Std.HashSet FVarId) := none) : TermElabM Expr := do
  let mv ←
    if restrict then
      let (lctx, insts) ← restrictedContext #[type] opaqueLets (droppable := droppable)
      mkFreshExprMVarAt lctx insts type .syntheticOpaque
    else
      mkFreshExprSyntheticOpaqueMVar type
  -- Stop once there is nothing left to prove. The generated file is one tactic block
  -- per lemma and assumes every line has a goal to act on; a script that closes early
  -- would make the next line fail with "no goals to be solved", which is not a failure
  -- of the proof.
  -- Without this an elaboration error inside a script is *logged* and the offending
  -- term becomes `sorryAx`, so the replay reports success and the axiom only shows up
  -- in `#print axioms`.
  -- `withoutRecover` as well as `withoutErrToSorry`: a tactic that fails is otherwise
  -- free to *log* the error and carry on, which throws nothing, leaves the goal
  -- admitted, and marks the whole declaration — so `#print axioms` reports `sorryAx`
  -- for a theorem whose replayed proof is in fact complete.
  -- `vampire.timing.tactic` times each line. A step script is a handful of them and
  -- they are not equally expensive — the clausification scripts are where a replay's
  -- time goes — so which line of which script cost what is the first thing wanted, and
  -- a whole-step figure leaves it to guesswork.
  let timed ← isTracingEnabledFor `vampire.timing.tactic
  let run : TermElabM (List MVarId) := withoutErrToSorry <| Tactic.run mv.mvarId! <|
    Tactic.withoutRecover do
      for t in tacs do
        if (← Tactic.getGoals).isEmpty then break
        if timed then
          let t0 ← IO.monoMsNow
          Tactic.evalTactic t
          trace[vampire.timing.tactic] "{(← IO.monoMsNow) - t0}ms: {t.raw}"
        else
          Tactic.evalTactic t
  let remaining ←
    try run
    catch e =>
      -- Without this a failure reads as a bare `grind failed`, with no way to tell
      -- which of a hundred replayed steps it came from.
      throwError "vampire: {what} could not be replayed        {indentD (← e.toMessageData.toString)}
statement:{indentD type}
        script:{indentD (MessageData.joinSep (tacs.map (·.raw)).toList Format.line)}"
  unless remaining.isEmpty do
    throwError "vampire: {what} left {remaining.length} goal(s) unproved      {indentD type}"
  -- Ascribed, so that `inferType` on the result gives back `type` rather than whatever
  -- the tactic happened to leave. A script ending in `exact h` produces `fun h => h`,
  -- whose inferred type is the *premise's* — defeq to the conclusion, which is why the
  -- tactic was accepted, but not the same expression. Definition folding is where that
  -- bites: its script is exactly `exact h`, so the folded conclusion `… ∨ sP9 v0 v1 ∨ …`
  -- came back as the unfolded premise, and the skolemisation downstream reads its
  -- parent with `inferType` and saw an existential the definition was hiding. The
  -- generated file has no such problem: it writes `change <concl> at stepN`.
  mkExpectedTypeHint (← instantiateMVars mv) type

/--
An element of `ty`, by instance synthesis.

Vampire's logic assumes every sort is non-empty, and a refutation may use that: from
`∀ x, P x` and `∀ x, ¬P x` it derives `⊥`, which in Lean needs an inhabitant of the
domain. The generated file gets one from the `[Inhabited ι]` in its preamble, so an
instance is asked for first — `Nonempty` too, since that is what the assumption really
needs and `Classical.choice` turns it into a term.

Failing that, the local context is searched for a term of the type. A goal about a bare
`α` often has one to hand without anyone having declared an instance, and it is a term
the user already had.
-/
def inhabitant (ty : Expr) : MetaM (Option Expr) := do
  if let .some inst ← trySynthInstance (← mkAppM ``Inhabited #[ty]) then
    return some (← mkAppOptM ``default #[ty, inst])
  if let .some inst ← trySynthInstance (← mkAppM ``Nonempty #[ty]) then
    return some (← mkAppOptM ``Classical.choice #[ty, inst])
  for d in ← getLCtx do
    if d.isImplementationDetail then continue
    if ← isDefEq d.type ty then return some d.toExpr
  return none

/--
Apply a tactic to a hypothesis and return the transformed proof.

The replay sometimes needs what a VampLean tactic *does* to a hypothesis, not just that
it closes a goal — `exists_prenex` before skolemisation, for instance. Its result type is
not known in advance, so the tactic is first run on a throwaway goal to see what it
produces, and then again to build a term of that type.
-/
def transformHyp (h : Expr) (tacs : Ident → TermElabM (Array (TSyntax `tactic)))
    (what : MessageData) : TermElabM Expr := do
  let hId := mkIdent `vh
  let ty ← inferType h
  -- Unrestricted, unlike a step lemma. These tactics need what the context provides:
  -- `exists_prenex` hoists an existential out of a disjunction only when it can find a
  -- `Nonempty`/`Inhabited` instance for the domain, and without one it silently stops
  -- after the outer quantifier — leaving a witness the skolemisation then cannot take.
  let (lctx, insts) := (← getLCtx, ← getLocalInstances)

  -- The result type is not known in advance, so the block runs twice: once against a
  -- throwaway goal to see what it leaves behind, then again to build a term of that
  -- type. Letting the target be a metavariable instead would be one pass, but these
  -- tactics reason about the goal — `exists_prenex` starts with a `by_contra` — and an
  -- unknown target makes that nonsense.
  -- `False`, which is what the generated file has: `exists_prenex` is applied inside
  -- `fullProof`, whose goal is `False` after the `byContradiction`. It reads the goal,
  -- and under a different one it prenexes differently — leaving an existential in place
  -- that the skolemisation then has no witness for.
  let probe ← mkFreshExprMVarAt lctx insts (.const ``False []) .syntheticOpaque
  let g ← probe.mvarId!.assert `vh ty h
  let (_, g) ← g.intro1P
  -- The probe is exploratory, so its messages are discarded: a tactic that logs an
  -- error still marks the whole declaration, and `#print axioms` then reports `sorryAx`
  -- for a theorem the build pass went on to prove properly. Errors that matter are
  -- reported by that pass.
  -- The probe runs inside `withoutModifyingState`: it is exploratory, and a tactic that
  -- logs an error still marks the whole declaration, so `#print axioms` would report
  -- `sorryAx` for a theorem the build pass went on to prove properly. Only the type it
  -- discovered is carried out.
  let newTy ← withoutModifyingState do
    let gs ← withoutErrToSorry <| Tactic.run g <|
      Tactic.withoutRecover ((← tacs hId).forM Tactic.evalTactic)
    let some g := gs.head?
      | throwError "vampire: {what} closed the goal instead of transforming a hypothesis"
    g.withContext do
      let some d := (← getLCtx).findFromUserName? `vh
        | throwError "vampire: {what} removed the hypothesis it was applied to"
      instantiateMVars d.type

  -- Unrestricted, like the probe: the two passes must see the same context or they
  -- transform differently, and the second would then be proving a different statement
  -- from the one the first discovered.
  let fn ← proveBy (← mkArrow ty newTy)
    (#[← `(tactic| intro $hId:ident)] ++ (← tacs hId) ++ #[← `(tactic| exact $hId)])
    what
  return mkApp fn h

/--
Transform a hypothesis and take the transformed hypothesis's proof from the same run.

`transformHyp` runs its block twice — once against a throwaway goal to see what the
block leaves behind, then again to build a term of that type — because the tactics it is
given reason about the goal, and a goal that is a metavariable makes that nonsense. A
block that only rewrites `at h` does not reason about the goal, and for one of those the
target can be left open: `intro`, the block, then `exact h`, which assigns the target to
whatever the block produced. One pass gives both the type and the proof.

That matters where the block is expensive. Clausifying `SYN472+1`'s conjecture is
`prenexify` then `cnfify` over a seven-hundred-atom formula — measured at 96s and 21s —
and the difference between running it once and running it twice is two minutes.
-/
def transformOnce (h : Expr) (tacs : Ident → TermElabM (Array (TSyntax `tactic)))
    (what : MessageData) : TermElabM (Expr × Expr) := do
  let hId := mkIdent `vh
  let ty ← inferType h
  let (lctx, insts) := (← getLCtx, ← getLocalInstances)
  -- The target: what the block leaves the hypothesis as, which is not known yet.
  let out ← mkFreshExprMVarAt lctx insts (.sort .zero) .natural
  let fn ← mkFreshExprMVarAt lctx insts (← mkArrow ty out) .syntheticOpaque
  let remaining ←
    try
      withoutErrToSorry <| Tactic.run fn.mvarId! <| Tactic.withoutRecover do
        Tactic.evalTactic (← `(tactic| intro $hId:ident))
        let timed ← isTracingEnabledFor `vampire.timing.tactic
        for t in ← tacs hId do
          if (← Tactic.getGoals).isEmpty then break
          if timed then
            let t0 ← IO.monoMsNow
            Tactic.evalTactic t
            trace[vampire.timing.tactic] "{(← IO.monoMsNow) - t0}ms: {t.raw}"
          else
            Tactic.evalTactic t
        unless (← Tactic.getGoals).isEmpty do
          Tactic.evalTactic (← `(tactic| exact $hId))
    catch e =>
      throwError "vampire: {what} could not be replayed\
        {indentD (← e.toMessageData.toString)}"
  unless remaining.isEmpty do
    throwError "vampire: {what} left {remaining.length} goal(s) unproved"
  let newTy ← instantiateMVars out
  if newTy.hasExprMVar then
    throwError "vampire: {what} did not say what it transformed the hypothesis into"
  return (newTy, mkApp (← instantiateMVars fn) h)

/-- `intro a b c`, or nothing when there is nothing to introduce. -/
def intros (ids : Array Ident) : TermElabM (Array (TSyntax `tactic)) := do
  if ids.isEmpty then return #[]
  return #[← `(tactic| intro $ids*)]

/--
`prenexify at h`, restricted to its two `∨` rules.

VampLean's `prenexify` is

    repeat (first | simp only [or_forall_prenex_left, and_forall_prenex_left]
                  | simp only [and_forall_prenex, or_forall_prenex])

which hoists every `∀` to the front of the *whole* formula, past the conjunctions as
well as the disjunctions. Two things about that are expensive and neither is what a
clause needs.

Hoisting past `∧` rewrites the whole formula once per binder, and what comes out of it
is a prefix in front of a conjunction — which whatever runs next has to undo, either
because `cnfify`'s `cnf_prenex3` pushes the binders back into the conjuncts or because
the goal is a single clause and the conjunction was never there to begin with. What a
clause wants is a `∀` at the top of each *disjunction*, and the two `or` rules give that
on their own.

And each `simp` runs to its own fixpoint, so `repeat (first | A | B)` does A\*, B\*,
A\*, … while paying a failing traversal per round rediscovering that A has nothing left
to do. Making the pair one alternative removes that from every round but the last.

This is a weaker normal form, not a different one, so the caller keeps `prenexify`
behind it: where the weak form leaves a binder somewhere the rest of the script cannot
use, the script is run again over the full one. `maxSteps` is raised for the same reason
`prenexify`'s own calls raise it — the default budget does not survive a formula of this
size.
-/
def orPrenex (v : Ident) : TermElabM (TSyntax `tactic) := do
  let cfg ← `(optConfig| (config := { maxSteps := 10000000 }))
  -- Qualified, like `Xor'` above and for the same reason: these two are
  -- VampLean's and nothing else's, and VampLean is namespaced so that it and Mathlib
  -- can be imported together. The lemma names in the other scripts here --
  -- `imp_iff_not_or`, `not_and_or`, `not_imp_not` -- are core's and are left alone;
  -- VampLean states each of those identically, so which one a script gets does not
  -- matter, and leaving them unqualified is what keeps that true.
  let left ← `(tactic| simp $cfg:optConfig only [or_forall_prenex_left] at $v:ident)
  let right ← `(tactic| simp $cfg:optConfig only [or_forall_prenex] at $v:ident)
  `(tactic| repeat (first
      | $(← `(tacticSeq| $left:tactic
                         $right:tactic))
      | $(← `(tacticSeq| $left:tactic))
      | $(← `(tacticSeq| $right:tactic))))

/-- `have iN := hN t₁ t₂ …` — `LeanChecker::instantiatePremiseVars`. -/
def instantiate (target : Ident) (head : Term) (args : Array Term) :
    TermElabM (TSyntax `tactic) := do
  if args.isEmpty then `(tactic| have $target:ident := $head)
  else `(tactic| have $target:ident := $head $args*)

end Tac

namespace Replay

/--
The lambda a definition introduction abbreviates.

`LeanChecker` writes `let sP v… := φ` and then relies on `Iff.rfl`; here the symbol
becomes that lambda outright, so the equation it has to prove holds by `rfl` for the
same reason.
-/
def definedLambda (i : Interp) (syms : Symbols) (s : Step) (asFormula : Bool)
    (wrap : Expr → MetaM Expr := pure) : MetaM Expr := do
  go {} 0
where
  go (vs : Replay.Vars) (k : Nat) : MetaM Expr := do
    if h : k < s.definedParams.size then
      let (v, sort) := s.definedParams[k]
      let ty ← Replay.sortExpr i syms sort
      withLocalDeclD (varName v) ty fun x => do
        mkLambdaFVars #[x] (← go (vs.insert v x) (k + 1))
    else if asFormula then
      wrap (← formExpr i syms vs s.definedBody)
    else
      wrap (← termExpr i syms vs s.definedTerm)

/--
`∀ v…, φ ↔ φ`, the equation `LeanChecker` writes as
`have s : φ ↔ sP v… := Iff.rfl`.

It is stated with `φ` on both sides rather than with the symbol on the right, because
the symbol *is* the lambda: the two are the same proposition, and the alternatives that
follow only need to move it into whatever shape preprocessing left the conclusion in. -/
def definitionRfl (i : Interp) (syms : Symbols) (s : Step) : MetaM Expr :=
  definedLambda i syms s true (fun φ => mkAppOptM ``Iff.refl #[φ])


end Replay

namespace Replay

open Tac Lean.Parser.Tactic

/-- The sorts of the variables a term mentions, read off the argument positions of the
symbols they sit under. A variable at the top of the term is not covered — nothing
encloses it — which is what `Step.rangeSorts` is for. -/
private partial def argSortsIn (syms : Symbols) : FTerm → Std.HashMap Nat Nat →
    Std.HashMap Nat Nat
  | .var _, acc => acc
  | .app f args, acc => Id.run do
    let argSorts := ((syms.funs[f]?).map (·.argSorts)).getD #[]
    let mut acc := acc
    for i in [0:args.size] do
      match args[i]? with
      | some (.var v) => if let some sort := argSorts[i]? then acc := acc.insert v sort
      | some a => acc := argSortsIn syms a acc
      | none => pure ()
    return acc

/--
`LeanChecker::outputReorderIfNeeded`, as the tactics that permute a clausified goal's
`∀` prefix into the prenex order.

`prenexify` hoists the parent's universal quantifiers in an order set by the shape of
the formula, which need not be the ascending order the conclusion states its own binders
in. When they differ, the clause the transformation produces and the goal are one
permutation of their `∀` prefix apart — alpha-equivalent, but not something `assumption`
can see past. The generated file states the permutation as an `Iff` and `rw`s the goal's
prefix into the prenex order; the same reordering is done here by introducing the
binders in the order the goal has them and reverting them, one at a time, in the order
the prenexed clause wants — which leaves exactly the permuted goal, and needs no
higher-order rewrite to be found.

`s.splits.isEmpty` is the invariant this relies on rather than a case to handle: the
goal is introduced binder by binder, so a split hypothesis in front of the `∀` prefix
would be bound under a variable's name. Clausification runs in preprocessing, before
AVATAR ever names a component, so a clausified conclusion holds under no split — and if
that ever stops being true the reorder is skipped rather than applied to the wrong
thing.
-/
def clausifyReorder (s : Step) : TermElabM (Array (TSyntax `tactic)) := do
  unless s.splits.isEmpty && s.prenexOrder.size == s.vars.size
      && s.prenexOrder != s.prenexOrder.qsort (· < ·) do
    return #[]
  let ascIds := s.vars.map (fun (p : Nat × Nat) => mkIdent (varName p.1))
  let mut tacs ← intros ascIds
  -- Each `revert` puts one binder back at the *front*, so reverting in reverse prenex
  -- order rebuilds the prefix in prenex order. One at a time: `revert` given several
  -- names orders them by their position in the context, which is the order being
  -- permuted away from.
  for v in s.prenexOrder.reverse do
    tacs := tacs.push (← `(tactic| revert $(mkIdent (varName v)):ident))
  return tacs

/-- The tactic script for a derived step, ported from `LeanChecker`.

The `intro`/`have`/tactic shape is `genericNPremiseInference`; the rest are the
per-rule scripts, transposed from operating on a `stepN` in the enclosing context to
operating on the hypothesis this lemma introduces. -/
def script (i : Interp) (syms : Symbols) (s : Step) (premises : Array Step) :
    TermElabM (Array (TSyntax `tactic)) := do
  let hyp (k : Nat) : Ident := mkIdent (Name.mkSimple s!"h{k}")
  let derived (k : Nat) : Ident := mkIdent (Name.mkSimple s!"i{k}")
  let h : Ident := mkIdent (Name.mkSimple "h")
  -- The proof of a split hypothesis, named as `LeanChecker::outputCumulativeSplits`
  -- names it: `x` and the SAT variable, with the polarity left off.
  let splitHyp (v : Nat) : Ident := mkIdent (Name.mkSimple s!"x{v}")
  -- What `instantiateConclusionVars` introduces after the premises: the conclusion's
  -- split hypotheses, then its variables.
  let conclusionBinders : Array Ident :=
    s.splits.map (fun (p : Nat × Bool) => splitHyp p.1) ++
      s.vars.map (fun (p : Nat × Nat) => mkIdent (varName p.1))
  -- The variables `intro` will have bound by the time the instantiation lines run.
  let inScope : Std.HashSet Nat := s.vars.foldl (fun acc (v, _) => acc.insert v) {}
  -- A variable that survives into an instantiation term but that the conclusion does
  -- not bind needs a witness. This is where Vampire's non-empty-domain assumption
  -- shows up; it is rare, because the unifier usually replaces such a variable with a
  -- real term.
  let witnessFor (p : Step) (terms : Array FTerm) : TermElabM (Nat → Option Term) := do
    let mut needed : Std.HashSet Nat := {}
    for t in terms do
      for v in FTerm.varsOf t do
        if !inScope.contains v then needed := needed.insert v
    let mut sortOf : Std.HashMap Nat Nat := {}
    for (v, sort) in p.vars do sortOf := sortOf.insert v sort
    -- `rangeSorts` covers a substitution that sends a premise variable straight to
    -- another variable; one buried inside a compound image — `v0 ↦ f v7` — is not
    -- there, and need not be a variable of either unit. `LeanChecker` never has to ask:
    -- it prints such a variable as `default` and lets Lean read the sort off the
    -- argument position it lands in. The witness is built before the term is
    -- elaborated, so the same reading is done here, off the symbol's declared
    -- argument sorts.
    for t in terms do sortOf := argSortsIn syms t sortOf
    for (v, sort) in s.rangeSorts do sortOf := sortOf.insert v sort
    let mut m : Std.HashMap Nat Term := {}
    for v in needed do
      let some sort := sortOf[v]?
        | throwError "vampire: step {s.number} instantiates a premise at v{v}, whose \
            sort the prover did not report"
      let ty ← Replay.sortExpr i syms sort
      let some w ← inhabitant ty
        | throwError "vampire: step {s.number} instantiates a premise at a variable the \
            conclusion does not bind, so it needs an element of {ty}, and there is \
            neither an `Inhabited {ty}` instance nor a term of that type in scope. \
            Vampire's logic assumes every sort is non-empty and this refutation uses \
            that"
      m := m.insert v (← exprToSyntax w)
    return fun v => m[v]?
  -- `have iN := hN t₁ t₂ …`, for every premise.
  -- `upTo` bounds how many premises are instantiated. `LeanChecker::definitionUnfolding`
  -- instantiates only the first — the rest are the defining equations, used by the
  -- `rewrite` lines — and asking for a witness for a premise whose `have` is then
  -- thrown away can fail over a sort that never mattered.
  let instantiations (fallbackToOwnVars : Bool) (upTo : Nat := premises.size) :
      TermElabM (Array (TSyntax `tactic)) := do
    let mut tacs := #[]
    for k in [0:min upTo premises.size] do
      let terms :=
        match s.insts[k]? with
        | some inst => inst.terms
        | none =>
          if fallbackToOwnVars then
            (premises[k]!).vars.map (fun (p : Nat × Nat) => FTerm.var p.1)
          else #[]
      let witness ← witnessFor premises[k]! terms
      -- The premise's own split hypotheses come first, as `instantiatePremiseVars`
      -- prints them, then the terms its variables take.
      let splitArgs : Array Term :=
        match s.insts[k]? with
        | some inst => inst.splits.map (fun (p : Nat × Bool) => (⟨splitHyp p.1⟩ : Term))
        | none => (premises[k]!).splits.map (fun (p : Nat × Bool) => (⟨splitHyp p.1⟩ : Term))
      let args ← terms.mapM (termSyntax i syms witness)
      tacs := tacs.push (← instantiate (derived k) (hyp k) (splitArgs ++ args))
    return tacs
  match s.handler with
  | .genericSubs | .genericNoSubs =>
    -- intros h0 … hₖ v… ; have i0 := h0 <args> ; … ; grind only […]
    let ids := (Array.range premises.size).map hyp ++ conclusionBinders
    let mut tacs ← intros ids
    tacs := tacs ++ (← instantiations true)
    -- Propagation first, `grind` behind it. Once the premises are instantiated the
    -- inference is a propositional one — falsify the conclusion and the premises are
    -- the conflict that conflict analysis, or subsumption, or the resolved literal,
    -- already found — and `grind only [cases Or]` is being asked to rediscover that by
    -- case analysis. It is the largest thing left in a replay: over the benchmark,
    -- 11.3s of `forward subsumption resolution` and 9.0s of `resolution`.
    -- `Vampire/Clause.lean` builds the propagation as a term instead.
    --
    -- The rules that reach `grind` are the ones whose premises differ from the
    -- conclusion by a *rewrite*: superposition and demodulation match `L[s]` against
    -- `L[t]` under `s = t`, which propagation does not see as the same literal.
    let derivedIds := (Array.range premises.size).map derived
    let fallback ←
      if s.handler == .genericSubs then `(tactic| grind only [cases Or])
      else `(tactic| grind only)
    tacs := tacs.push
      (← `(tactic| first | vampire_resolve $derivedIds* | $fallback:tactic))
    return tacs
  | .generic =>
    -- `genericInference`'s script is a bare `grind`, and that is what a rule falling
    -- through `LeanChecker`'s switch gets. Where such a step has a single premise the
    -- structural bridge gets first refusal: these rules are mostly *weakenings* —
    -- `pure predicate removal` drops the literals of a predicate that only ever occurs
    -- with one polarity and leaves the rest of the formula alone — and dropping
    -- conjuncts, reordering junctions and reorienting equations is precisely what the
    -- bridge does without searching for it. `grind` is asked to rediscover that, and on
    -- a formula of any size it runs out of budget rather than out of truth.
    --
    -- This is a deviation: the reference has no such fallback and fails these steps too.
    -- `grind` stays behind it, so nothing that passed before can stop passing.
    if premises.size == 1 then
      return #[← `(tactic| intro $h:ident),
               ← `(tactic| first | vampire_bridge $h | grind)]
    return #[← `(tactic| grind)]
  | .ennf =>
    -- `LeanChecker` writes a bare `exact h` here, unlike the sibling normal forms. That
    -- assumes VampLean's transformation and Vampire's agree on the order of the
    -- disjuncts, and they do not always: `p → q` becomes `q ∨ ¬p` on one side and
    -- `¬p ∨ q` on the other. The `first | exact h | grind` the other three already use
    -- covers it.
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| ennf_transformation at $h:ident <;> first | exact $h | grind)]
  | .flatten =>
    -- Flattening *is* reassociation — `and_assoc`, `or_assoc` and `Classical.not_not` —
    -- and reassociation is what the bridge does by construction, so it gets first
    -- refusal here for the same reason it does on a one-clause clausification. What
    -- `flattening` costs is the congruence proof simp builds to each rewrite site: one
    -- `BIO006+1` step, over a formula with several hundred atoms in it, measured 23.9s
    -- on its own, and the bridge does it in three.
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| first
                   | vampire_bridge $h
                   | (flattening at $h:ident <;> first | exact $h | grind))]
  | .nnf =>
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| nnf_transformation at $h:ident <;> first | exact $h | grind)]
  | .reduceFalseTrue =>
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| remove_tauto at $h:ident <;> first | exact $h | grind)]
  | .rectify =>
    -- `LeanChecker::rectify` ends with `symm_match using h`, which covers a renaming
    -- that is alpha-equivalent — most of them — and it emits a `conv … rw [rN]` per
    -- renaming that is not. A rectification that permutes universal binders is not
    -- alpha-equivalent, and the third alternative here handles it without that
    -- machinery: introduce the conclusion's binders and let unification work out which
    -- of the premise's arguments each one is.
    -- Only the binders the conclusion actually opens with: `s.vars` is every free
    -- variable of the statement, which for a formula includes the ones bound further in.
    let prefixVars :=
      if s.isClause then s.vars
      else match s.statement with
        | .all vs _ => vs
        | _ => #[]
    let binders := prefixVars.map (fun (p : Nat × Nat) => mkIdent (varName p.1))
    let holes ← prefixVars.mapM (fun _ => do return (← `(_) : Term))
    let steps := (← intros binders).push (← `(tactic| exact $h $holes*))
    let byPermutation ← `(tacticSeq| $steps*)
    -- The bridge was tried here, before `symm_match`, because a rectification that
    -- permutes the binder prefix is `transport`'s own forall rule and one that reorients
    -- an equation is its `Eq.symm` rule. Measured, it is not worth it: over the
    -- benchmark's paired problems it took 0.23s more than it saved. Nearly every
    -- rectification is alpha-equivalent, which makes the two formulas the *same* `Expr`
    -- and `exact h` free, so the steps that reach past it are too few to pay for an
    -- attempt on all of them.
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| try simp only [forall_const, exists_const, -iff_self, -eq_self] at $h:ident),
             ← `(tactic| first
                   | exact $h
                   | symm_match using $h
                   | $byPermutation)]
  | .clausify =>
    let reorder ← clausifyReorder s
    if s.cnfCount <= 1 then
      -- The bridge first, the reference's script behind it. What a one-clause
      -- clausification has to prove is its parent prenexed and AC-normalised, and the
      -- reference does that by rewriting: `prenexify` hoists the parent's `∀` prefix and
      -- `ac_nf0` reassociates both sides until `assumption` can see they are the same
      -- formula. `Vampire/Bridge.lean` walks the two formulas together instead, and
      -- reassociation, junction order and hoisting a binder out of a disjunction are all
      -- things it does by construction. Measured on `PRD001+1`, over its 210 one-clause
      -- clausifications: 24.1s of rewriting against 0.8s of walking.
      let reference := #[← `(tactic| try simp only)] ++ reorder ++
        #[← `(tactic| prenexify at $h:ident <;> ac_nf0 <;> ac_nf0 at $h:ident <;>
                try (first | assumption | trivial))]
      return #[← `(tactic| intro $h:ident),
               ← `(tactic| first
                     | vampire_bridge $h
                     | $(← `(tacticSeq| $reference*)))]
    -- The parent clausifies into several clauses, of which this step is one. The
    -- generated file shares one destructuring across all of them by putting it in the
    -- enclosing block, sized to Vampire's clause count; here the shape is only known
    -- once `cnfify` has run, so `vampire_finish_clausify` looks instead.
    return #[← `(tactic| intro $h:ident)] ++ reorder ++
            #[← `(tactic| prenexify at $h:ident),
              ← `(tactic| cnfify at $h:ident),
              ← `(tactic| vampire_finish_clausify)]
  | .unusedPredDefRemoval =>
    return #[← `(tactic| intro $h:ident), ← `(tactic| simp only [$h:ident, imp_self, implies_true])]
  | .avatarContradiction =>
    -- The parent is the same literals as the conclusion, in the order the SAT solver
    -- holds them, so this is a one-premise resolution — and the reference's
    -- `simp only [imp_false, imp_iff_not_or, not_not]` is the arrow chain being read as
    -- a clause, which `Vampire/Avatar.lean` does by application. That simp was 0.89s
    -- over 1011 steps on the three `ALG` problems, against `exact h` at 0.03s.
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| first
                   | exact $h
                   | vampire_contradiction $h
                   | (try simp only [imp_false, imp_iff_not_or, not_not] at $h:ident
                      exact $h))]
  | .definitionUnfolding =>
    -- intros; instantiate the first premise; rewrite once with each defining equation,
    -- in the direction the recorded left-hand side says; grind.
    let ids := (Array.range premises.size).map hyp ++ conclusionBinders
    let mut tacs ← intros ids
    let insts ← instantiations true (upTo := 1)
    if h : 0 < insts.size then tacs := tacs.push insts[0]
    for k in [1:premises.size] do
      let eq := hyp k
      let i0 := derived 0
      if (s.rewriteForwards[k - 1]?).getD true then
        tacs := tacs.push (← `(tactic| rewrite (occs := [1]) [$eq:ident] at $i0:ident))
      else
        tacs := tacs.push (← `(tactic| rewrite (occs := [1]) [← $eq:ident] at $i0:ident))
    tacs := tacs.push (← `(tactic| grind only))
    return tacs
  | .evaluation =>
    -- `LeanChecker` proves this with `norm_num1` and `our_int_not_lt`, which are
    -- Mathlib-backed and went away when VampLean dropped Mathlib. The translation does
    -- not produce arithmetic either, so nothing reaches here today.
    throwError "vampire: step {s.number} is an arithmetic evaluation; its script needs \
      `norm_num1`, which this build of VampLean does not have"
  | .avatarComponent =>
    -- `intro h component v…`, then use the definition in the direction the split's
    -- polarity calls for.
    let some (_, positive) := s.splits[0]?
      | throwError "vampire: AVATAR component {s.number} holds under no split"
    let component : Ident := mkIdent (Name.mkSimple "component")
    let new : Ident := mkIdent (Name.mkSimple "new")
    let h0 := hyp 0
    let mut ids := #[h0, component]
    for (v, _) in s.vars do ids := ids.push (mkIdent (varName v))
    -- `avatarComponent` names the conclusion's single split `component` rather than
    -- `x<var>`, and it has exactly one.
    let vars := s.vars.map (fun (p : Nat × Nat) => (⟨mkIdent (varName p.1)⟩ : Term))
    let mut tacs ← intros ids
    if positive then
      tacs := tacs.push (← `(tactic| have $new:ident := ($h0).mp $component $vars*))
    else
      tacs := tacs.push
        (← `(tactic| have $new:ident := not_imp_not.mpr ($h0).mpr $component $vars*))
    tacs := tacs.push (← `(tactic| first | trivial | ac_nf at $new:ident ⊢ | grind [cases Or]))
    return tacs
  | .avatarSplitClause =>
    let h0 := hyp 0
    let newForm : Ident := mkIdent (Name.mkSimple "newForm")
    let splitVar (split v : Nat) : Ident := mkIdent (Name.mkSimple s!"x{split}a{v}")
    let mut tacs ← intros ((Array.range premises.size).map hyp)
    -- The premises whose split the parent did not already hold under are rewritten
    -- with; the rest against. `LeanChecker` emits the againsts first.
    let mut fwd : Array Ident := #[]
    let mut bwd : Array Ident := #[]
    for k in [1:premises.size] do
      if (s.rewrites[k - 1]?).getD true then fwd := fwd.push (hyp k)
      else bwd := bwd.push (hyp k)
    -- A split name is a `let` for its component, so both directions are substitutions
    -- of one term for a definitionally equal one and neither needs a rewrite. All of
    -- them in one pass, too: `rw` was called once per definition and each call was a
    -- traversal of the whole conclusion. Measured on the three `ALG` problems, 2894
    -- `try rw`s at 1.68s. `Vampire/Avatar.lean` says why the substitution is sound.
    --
    -- Reading the parent's implication chain as a clause is the same lesson: the shape
    -- `simp only [imp_iff_not_or]` is looking for is the shape a clause under splits
    -- always has, so `vampire_unimply` walks the arrows instead of the formula, and
    -- does nothing at all where there are none — which is the common case, and was
    -- 0.83s of simp finding it out.
    let rewrites ← `(tactic| vampire_split_defs [$fwd,*] [$bwd,*])
    let mut reference : Array (TSyntax `tactic) := #[]
    for h in bwd do reference := reference.push (← `(tactic| try rw [← $h:ident]))
    for h in fwd do reference := reference.push (← `(tactic| try rw [$h:ident]))
    tacs := tacs.push (← `(tactic| first
      | $rewrites:tactic
      | $(← `(tacticSeq| $reference*))))
    tacs := tacs.push (← `(tactic| first
      | vampire_unimply $h0:ident
      | try simp only [imp_iff_not_or] at $h0:ident))
    let introIds := s.introSplits.map (fun (p : Nat × Nat) => splitVar p.1 p.2)
    let args := s.parentArgs.map (fun (p : Nat × Nat) => (⟨splitVar p.1 p.2⟩ : Term))
    -- The goal-side prenexing is where an AVATAR replay spends its time. The `rw`s above
    -- have just replaced each split name in the conclusion by the component it stands
    -- for, so the goal is a disjunction of quantified components and every one of their
    -- binders has to come to the front for the `intro` below to name them and for `h0`
    -- to be applied at them. On `PRD001+1` that is a 97-binder prefix over an 85-way
    -- disjunction, and `prenexify` took 31s of a 38s replay on that one step — not in
    -- the rewriting but in the congruence proof simp builds from the root to each
    -- rewrite site, which after the first binder runs through the whole prefix and
    -- carries the formula at every level. Restricting the rule set does not touch it:
    -- `orPrenex`, the `∨` rules alone, costs the same.
    --
    -- `vampire_or_prenex` reaches the same normal form as a term — one lemma application
    -- per binder under as many lambdas as are already hoisted — and it is 31s against
    -- 0.1s. It is weaker than `prenexify` and can order the prefix differently, so
    -- `prenexify` stays behind it over the whole rest of the script: which prenexing ran
    -- is only discoverable from whether what follows can use the result.
    --
    -- `hypPrenex` is `prenexify at h0`, which is there so that `h0` can be applied at
    -- the variables the goal has just introduced: that needs its own `∀` prefix at the
    -- front. A clause usually already has it there, and then this is a full simp
    -- traversal that changes nothing — 2.4ms a step, and once the bridge closes the
    -- step the largest line left in the script. Where `h0` does need hoisting the
    -- application below does not typecheck, and the alternative that keeps the line
    -- runs instead.
    let tail (goalPrenex : TSyntax `tactic) (hypPrenex : Bool) :
        TermElabM (TSyntax ``tacticSeq) := do
      let mut rest := #[goalPrenex]
      if hypPrenex then rest := rest.push (← `(tactic| prenexify at $h0:ident))
      rest := rest ++ (← intros introIds)
      rest := rest.push (← `(tactic| have $newForm:ident := $h0 $args*))
      -- `newForm` is the parent at the split's own arguments, and what is left between
      -- it and the conclusion is a reshuffle: the disjuncts in another order,
      -- reassociated, with the split components dropped. The reference normalises both
      -- sides until `grind` can see it, which is three simp traversals and a case split
      -- for something the bridge builds by walking the two formulas together. On
      -- `ALG165+1` it closes all 373 split clauses at 0.3ms each, against 4ms for the
      -- four lines below; where it does not, the reference's script runs unchanged.
      rest := rest.push (← `(tactic| first
        | vampire_bridge $newForm:ident
        | (simp (config := { failIfUnchanged := false })
             only [not_and_or, not_not, eq_comm] at $newForm:ident
           simp (config := { failIfUnchanged := false }) only [eq_comm]
           ac_nf at $newForm:ident ⊢ <;> grind only [cases Or])))
      `(tacticSeq| $rest*)
    tacs := tacs.push (← `(tactic| first
      | $(← tail (← `(tactic| vampire_or_prenex)) false)
      | $(← tail (← `(tactic| vampire_or_prenex)) true)
      | $(← tail (← `(tactic| prenexify)) true)))
    return tacs
  | .predicateDefinition =>
    -- `intro v…`, then the equation holds by `Iff.rfl` because the symbol *is* the
    -- formula. The alternatives cover the shapes the conclusion can take once
    -- preprocessing has moved the definition around.
    -- `intro` in the order the statement binds them, which is ascending; apply the
    -- defining equation in the order the symbol takes them, which is the formula's.
    -- `LeanChecker` makes exactly this distinction — sorted `intros`, unsorted `let`
    -- and unsorted application — and getting it wrong permutes the arguments.
    let ids := (s.definedParams.qsort (fun a b => a.1 < b.1)).map
      (fun (p : Nat × Nat) => mkIdent (varName p.1))
    let args := s.definedParams.map (fun (p : Nat × Nat) => (⟨mkIdent (varName p.1)⟩ : Term))
    let sIdent : Ident := mkIdent (Name.mkSimple "s")
    let res : Ident := mkIdent (Name.mkSimple "res")
    let rflStx ← exprToSyntax (← definitionRfl i syms s)
    let mut tacs ← intros ids
    tacs := tacs.push (← instantiate sIdent ⟨rflStx⟩ args)
    tacs := tacs.push (← `(tactic|
      first
        | exact $sIdent
        | exact or_comm.mp (imp_iff_not_or.mp ($sIdent).mpr)
        | (have $res:ident := or_comm.mp (imp_iff_not_or.mp ($sIdent).mpr)
           simp only [or_assoc] at $res:ident
           trivial)
        | exact imp_iff_not_or.mp ($sIdent).mp))
    return tacs
  | .functionDefinition =>
    -- `intro` in the order the statement binds them, which is ascending, and *not* in
    -- the order the symbol takes them, which is the definition's own — the same
    -- distinction `.predicateDefinition` makes just above. They coincided as long as
    -- the parameters were exported as a sorted set of the equation's variables; they
    -- stopped coinciding when the export started reading them off the definition, which
    -- is what it has to do to get the arguments in the right places.
    let ids := (s.definedParams.qsort (fun a b => a.1 < b.1)).map
      (fun (p : Nat × Nat) => mkIdent (varName p.1))
    let mut tacs ← intros ids
    tacs := tacs.push (← `(tactic| rfl))
    return tacs
  | .definitionFoldingPred =>
    -- `have stepN := step<firstParent>; change <concl> at stepN`. Only the first parent
    -- carries the proof; the others are the definitions being folded in, and the
    -- conclusion is the first parent's statement with them substituted, so the two are
    -- definitionally equal.
    let mut tacs ← intros ((Array.range premises.size).map hyp)
    tacs := tacs.push (← `(tactic| exact $(hyp 0)))
    return tacs
  | .avatarDefinition | .avatarRefutation | .skolemise =>
    throwError "vampire: step {s.number} is built as a term, not by a script"
  | .skipped =>
    throwError "vampire: step {s.number} contributes nothing and has no script"
  | .input =>
    throwError "vampire: input step {s.number} has no script"
  | .unsupported =>
    throwError "vampire: the rule '{s.ruleName}' (step {s.number}) is not ported yet"

/-- The leaves of a nested conjunction, each with the projection that pulls it out of
`h`. Built from the type rather than by asking for it: `mkAppM` would `inferType` the
growing projection chain once per leaf, and here `h` is the CNF of a whole conjecture. -/
private partial def andLeaves (h : Expr) (ty : Expr) : MetaM (Array (Expr × Expr)) := do
  if ty.isAppOfArity ``And 2 then
    let a := ty.appFn!.appArg!
    let b := ty.appArg!
    return (← andLeaves (mkApp3 (.const ``And.left []) a b h) a) ++
           (← andLeaves (mkApp3 (.const ``And.right []) a b h) b)
  return #[(ty, h)]

/--
The proof of `want` among a clausified parent's leaves.

Three ways, cheapest first. Usually the clause *is* a leaf verbatim and the statement
index finds it. Where it is not, it is that leaf in another order or association, or
with an equation stated the other way round — so the leaves whose signature matches are
tried, first for definitional equality and then through the bridge, which builds the
reshuffle by walking the two formulas together.

Only then the scan over every leaf. That scan used to be the whole of the second case,
and it is quadratic in a number that is not small: `SYN472+1`'s conjecture clausifies
196 ways, the refutation uses 141 of them, and 29 of those were not leaves verbatim —
so 29 times over, `isDefEq` was run against all 196 formulas of seven hundred atoms
each, and then `vampire_finish_clausify` rewrote both sides until `assumption` could see
they agreed. Measured: 4.8s of that problem's 5.9s replay. It is kept behind the
signature because a signature is not a decision — two leaves that are definitionally
equal for a reason the signature cannot see, a definition unfolded on one side say,
would otherwise stop being found.
-/
private def findLeaf (want : Expr) (index : Std.HashMap Expr Expr)
    (clauses : Array (Expr × Expr)) (sigs : Array UInt64) : MetaM (Option Expr) := do
  if let some pf := index[want]? then return some pf
  let s := Bridge.sig want
  for h : k in [0:clauses.size] do
    unless sigs[k]? == some s do continue
    let (ty, pf) := clauses[k]
    if ← isDefEq ty want then return some pf
    if let .inl e ← Bridge.tryTransport want pf then return some e
  for h : k in [0:clauses.size] do
    if sigs[k]? == some s then continue
    if ← isDefEq clauses[k].1 want then return some clauses[k].2
  return none

/--
The Lean hypothesis, as the statement Vampire recorded for the input unit it became.

The code generator does not need this: its `fullProof` takes Vampire's own units as
hypotheses and there is nothing else for them to match. Here there is — the Lean
hypothesis the unit was translated from — and the two can differ, because Vampire
orients an equation by its term ordering when it shares the literal. So `a = f (f a)`
comes back the other way round, and the proof has to be carried across that.
-/
def bridgeInput (i : Interp) (syms : Symbols) (s : Step) (src : Input) : TermElabM Expr := do
  let want ← stepType i syms s
  match src with
  | .hypothesis h =>
    if ← isDefEq (← inferType h) want then return h
    -- The two differ by the rendering the export applies on the way out: every `AND`
    -- and `OR` argument list is reversed, mirroring `LeanPrinter::printFormula`, and
    -- since Vampire holds a junction as a binary tree that mirrors the whole tree —
    -- `a ∧ (b ∧ c)` comes back as `(c ∧ b) ∧ a`. Equations can be reoriented too.
    --
    -- `Vampire.Bridge` walks the two types together and builds the proof from that
    -- correspondence. It is done here rather than by a tactic because the tactics are
    -- being asked to find a known permutation by search, and on a real formula they run
    -- out of budget rather than out of truth: on the three problems this was failing,
    -- `ac_nf0` exhausted `simp`'s step limit and `grind` exhausted its case-split and
    -- E-matching limits.
    match ← Bridge.tryTransport want h with
    | .inl e => return e
    | .inr why =>
      -- Still worth a search: the bridge only knows the shapes the export produces, and
      -- a hypothesis can reach Vampire in one it normalised further.
      let vh := mkIdent `vh
      proveBy want
        #[← `(tactic| have $vh:ident := $(← exprToSyntax h)),
          ← `(tactic| first
                | exact $vh
                | (ac_nf0 at $vh:ident; ac_nf0; assumption)
                | grind)]
        m!"input step {s.number}, whose Lean hypothesis is{indentD (← inferType h)}\n\
          and whose statement as Vampire holds it is{indentD want}\n\
          the structural bridge said:{indentD why}"
  | .definition d =>
    let dStx ← exprToSyntax d
    proveBy want
      #[← `(tactic| first | rfl | (intros; rfl) | (intros; simp only [$dStx:term]))]
      m!"the defining equation of the symbol at input step {s.number}"

/--
Apply a step lemma to the proofs of its premises, checking each application as it is
made.

`mkAppN` does not typecheck, so the assembled proof is only a proof if every one of
these applications happens to be well-typed. Checking the finished term with
`Meta.check` does establish that, and that is what this used to rely on — but it
re-walks the whole shared DAG with the elaborator's `inferType`, and on a refutation of
any size it dominates everything else: measured on `PRD001+1`, 167s of a 240s replay
against 72s for all 1415 step scripts together.

The spine is where the risk actually is, and checking it there is cheap. Every proof the
replay passes around is ascribed to its statement by `proveBy`, so `inferType` on an
argument reads that ascription instead of walking the proof underneath it, and a
mismatch is reported against the premise that carries it rather than against the user's
theorem.
-/
def applyChecked (fn : Expr) (args : Array Expr) (what : MessageData)
    (premiseNumber : Nat → MessageData) : MetaM Expr := do
  let mut ty ← instantiateMVars (← inferType fn)
  for h : k in [0:args.size] do
    let arg := args[k]
    unless ty.isForall do ty ← whnf ty
    let .forallE _ dom body _ := ty
      | throwError "vampire: {what} is given {args.size} premises, but its statement \
          takes only {k}:{indentD ty}"
    let aty ← inferType arg
    unless ← isDefEq aty dom do
      throwError "vampire: {what} expects its premise {premiseNumber k} to \
        be{indentD dom}\nbut what proves it is{indentD aty}"
    ty := if body.hasLooseBVars then body.instantiate1 arg else body
  return mkAppN fn args

/--
The lemma for one derived step: `premise₁ → … → premiseₙ → conclusion`, proved by its
script. This is `theorem inf_sN` in the generated file.
-/
def stepLemma (i : Interp) (syms : Symbols) (s : Step) (premises : Array Step)
    (opaqueLets : Bool := true) (droppable : Option (Std.HashSet FVarId) := none) :
    TermElabM Expr := do
  let tTy ← IO.monoMsNow
  let ty ←
    try
      let mut ty ← stepType i syms s
      for p in premises.reverse do
        ty ← mkArrow (← stepType i syms p) ty
      pure ty
    catch e =>
      throwError "vampire: could not state step {s.number} ({s.ruleName}, handler \
        {repr s.handler})\
        {indentD (← e.toMessageData.toString)}"
  let tTac ← IO.monoMsNow
  let tacs ← script i syms s premises
  let tRun ← IO.monoMsNow
  let e ← proveBy ty tacs m!"step {s.number} ({s.ruleName})" (restrict := true) opaqueLets
    droppable
  let tEnd ← IO.monoMsNow
  trace[vampire.timing] "step {s.number} {s.ruleName}: type {tTac - tTy}ms, \
    script {tRun - tTac}ms, run {tEnd - tRun}ms"
  return e

/--
Run `k` with `Nonempty σ` in scope for each of the problem's sorts.

Vampire's logic assumes every sort is non-empty, and `exists_prenex` needs to know it:
hoisting `∃` out of a disjunction is only valid over a non-empty domain, and without an
instance the tactic stops at the outer quantifier instead — leaving a witness the
skolemisation cannot then take, with no error to say why. The instance is discharged
from the same place a witness comes from, so this asserts nothing new.
-/
partial def withNonemptySorts (i : Interp) (syms : Symbols) (todo : List Nat)
    (k : TermElabM (Array (Nat × Expr) × Expr)) :
    TermElabM (Array (Nat × Expr) × Expr) := do
  match todo with
  | [] => k
  | tc :: rest =>
    let some σ := i.sort tc | withNonemptySorts i syms rest k
    let cls ← mkAppM ``Nonempty #[σ]
    if (← trySynthInstance cls) matches .some _ then withNonemptySorts i syms rest k
    else match ← inhabitant σ with
      | none => withNonemptySorts i syms rest k
      | some w =>
        let inst ← mkAppOptM ``Nonempty.intro #[σ, w]
        withLetDecl (Name.mkSimple s!"vNonempty{tc}") cls inst fun x =>
          withNewLocalInstance ``Nonempty x do
            let (ws, spec) ← withNonemptySorts i syms rest k
            let ws ← ws.mapM fun (f, w) => do return (f, ← mkLetFVars #[x] w)
            return (ws, ← mkLetFVars #[x] spec)

/--
The skolem constants a skolemisation introduces, and the proof of its conclusion.

`LeanChecker::skolemize` writes `exists_prenex at stepP`, then `let ⟨sk₁, …, h⟩ := stepP`
to bring the symbols into scope for the rest of the block, and closes with
`symm_match using h`. A `let` pattern only scopes over what follows it, so a standalone
lemma cannot state a conclusion mentioning `sk`. `Classical.choose` gives the same
witnesses as closed terms instead, which every later step can then mention.

A skolem symbol of arity `n` is a function of the `n` universals its existential sits
under, so it is `fun y… => Classical.choose (h y…)` and its specification is the same
telescope over `Classical.choose_spec`. Arity zero is the same construction with an
empty telescope.
-/
def skolemise (i : Interp) (syms : Symbols) (s : Step) (parent : Expr) :
    TermElabM (Array (Nat × Expr) × Expr) := do
  -- `exists_prenex` is what makes the witnesses reachable: it pulls every existential
  -- to the front, using `Classical.skolem` to lift one out of a universal, so a symbol
  -- of arity `n` comes back as a function rather than something buried under binders.
  -- Which sorts we could not establish non-emptiness for. Not an error in itself —
  -- most proofs never need it — but it is overwhelmingly the reason a skolemisation
  -- runs out of witnesses, so it is worth having to hand when one does.
  let missing ← syms.sorts.toList.filterMapM fun (tc, name) => do
    let some σ := i.sort tc | return none
    if (← trySynthInstance (← mkAppM ``Nonempty #[σ])) matches .some _ then return none
    if (← inhabitant σ).isSome then return none
    return some (name, σ)
  withNonemptySorts i syms (syms.sorts.toList.map (·.1)) do
  let mut h ← Tac.transformHyp parent
    (fun v => do return #[← `(tactic| exists_prenex at $v:ident)])
    m!"prenexing the parent of skolemisation {s.number}"
  let prenexed ← inferType h
  let mut witnesses : Array (Nat × Expr) := #[]
  for f in s.skolems do
    let some _ := syms.funs[f]?
      | throwError "vampire: the skolem symbol {f} was not declared"
    -- The generated file takes every witness from one `exists_prenex`, destructuring
    -- `∃ sK0 sK1, …` in a single `let`. Taking them one at a time leaves the tail
    -- re-buried — `Classical.choose_spec` gives back `∀ x, (∃ y, φ) ∨ ψ`, whose next
    -- existential is no longer in the prefix — so it has to be hoisted again.
    -- `consumeMData` first: a tactic can leave metadata wrapped around the type it
    -- produced, and `isAppOf` sees through nothing — so the check would report "not an
    -- existential" about a type that prints as exactly one.
    unless (← instantiateMVars (← inferType h)).consumeMData.isAppOf ``Exists do
      h ← Tac.transformHyp h
        (fun v => do return #[← `(tactic| exists_prenex at $v:ident)])
        m!"hoisting the next witness for skolemisation {s.number}"
    let ty := (← instantiateMVars (← inferType h)).consumeMData
    unless ty.isAppOf ``Exists do
      -- `missing` is reported here and nowhere else, which is the whole reason it is
      -- computed: a skolemisation that runs out of witnesses has usually run out
      -- because a sort could not be shown non-empty, and saying which one turns this
      -- from a report about the shape of a formula into something to act on.
      let why :=
        if missing.isEmpty then m!""
        else m!"\n\nNon-emptiness could not be established for \
          {MessageData.joinSep (missing.map fun (n, σ) => m!"{n} : {σ}") ", "}, \
          which is usually why. An `[Inhabited _]` or `[Nonempty _]` instance for \
          those, or a hypothesis naming an element, is what is wanted."
      throwError "vampire: step {s.number} has {s.skolems.size} skolem symbols but \
        after prenexing its parent is{indentD ty}\nwhich has no further witness to \
        take. The parent was{indentD (← inferType parent)}\nand `exists_prenex` made \
        it{indentD prenexed}{why}"
    witnesses := witnesses.push (f, ← mkAppM ``Classical.choose #[h])
    h ← mkAppM ``Classical.choose_spec #[h]
  return (witnesses, h)

/--
Replay the SAT refutation by resolution, the way this fork's
`avatarRefutationByResolution` does.

The solver already found the derivation; asking Lean to solve the SAT problem again —
which is what the `bv_decide` encoding does — costs far more, and sharply more as the
refutation gets longer. Each derived clause becomes a lemma proved by
`grind only [cases Or]`, and the chain is assembled by application. A leaf of the
derivation is matched to a hypothesis by its literal set, because the solver's clause
objects and the ones recorded on the parent units need not be the same.
-/
def avatarRefutation (i : Interp) (s : Step) (premises : Array Expr) : TermElabM Expr := do
  if s.derivation.isEmpty then
    throwError "vampire: the AVATAR refutation at step {s.number} has no recorded \
      derivation, and re-solving the SAT problem in Lean is not ported"
  let key (lits : Array (Nat × Bool)) : String := toString lits
  -- The hypotheses, by the clause each one proves.
  let mut have? : Std.HashMap String Expr := {}
  for h : k in [0:s.satParents.size] do
    let some p := premises[k]?
      | throwError "vampire: the AVATAR refutation is missing a premise proof"
    have? := have?.insert (key s.satParents[k]) p
  -- The atom table is built once for the derivation, not once per step: two
  -- occurrences of a literal are then the same `Expr`, which is what makes the assembled
  -- term share and `Expr.abstract`'s and the kernel's caches hit.
  let atoms? := Id.run do
    let mut all := s.satParents
    for step in s.derivation do
      all := all.push step.concl
      all := all ++ step.premises
    return Sat.Atoms.of i.splitProp all
  let mut last : Option Expr := none
  for step in s.derivation do
    let concl ← satClauseExpr i step.concl
    let mut ty := concl
    for prem in step.premises.reverse do
      ty ← mkArrow (← satClauseExpr i prem) ty
    -- Pure propositional resolution over the split variables: it wants nothing from the
    -- context, and it wants no search either. `Vampire/Sat.lean` falsifies the conclusion
    -- and propagates, which is how the solver derived the step in the first place, and
    -- builds the proof as a term. The reference's `grind` stays behind it for a
    -- derivation propagation does not close. `ALG165+1`'s refutation is 1506 steps over
    -- 116k literals: 15.3s of a 24s replay by `grind`, 0.7s by construction.
    let lemma ←
      match ← (match atoms? with
               | none => pure none
               | some as => Sat.resolveStep as step.premises step.concl) with
      | some e =>
        -- Ascribed, so that `applyChecked` below reads the statement off the hint
        -- rather than walking the term it is about to apply.
        mkExpectedTypeHint e ty
      | none =>
        proveBy ty #[← `(tactic| grind only [cases Or])]
          m!"a step of the SAT refutation at {s.number}" (restrict := true)
    let mut args : Array Expr := #[]
    for prem in step.premises do
      let some a := have?[key prem]?
        | throwError "vampire: a clause in the SAT derivation at step {s.number} is \
            neither derived nor a hypothesis"
      args := args.push a
    let e ← applyChecked lemma args
      m!"a step of the SAT refutation at {s.number}"
      (fun k => m!"{k + 1}")
    have? := have?.insert (key step.concl) e
    last := some e
  let some e := last | throwError "vampire: empty SAT derivation"
  return e

/-- Bind each skolem symbol with a `let`, then continue inside their scope.

A `let` scopes over what follows it, so the rest of the replay has to happen inside. -/
partial def withSkolems (ws : List (Nat × Expr)) (skolems : Std.HashMap Nat Expr)
    (bound : Array Expr)
    (k : Std.HashMap Nat Expr → Array Expr → TermElabM Expr) : TermElabM Expr := do
  match ws with
  | [] => k skolems bound
  | (f, w) :: rest =>
    withLetDecl (Name.mkSimple s!"sK{f}") (← inferType w) w fun x =>
      withSkolems rest (skolems.insert f x) (bound.push x) k

/-- A parent's CNF, as one clausification shared by every clause it produced.

`index` is `clauses` keyed on the statement, for the usual case where the clause a step
asks for is a leaf verbatim; `full` records whether the prenexing that produced it was
`prenexify`'s own or the cheaper one `clausifyParent` tries first. -/
structure Clausified where
  statement : Expr
  proof : Expr
  index : Std.HashMap Expr Expr
  clauses : Array (Expr × Expr)
  /-- `Bridge.sig` of each leaf, positionally. The signature ignores exactly what a
  clausification's two renderings of a clause differ by — the order of a junction's
  arguments and which way round an equation is stated — so it is what says which leaves
  are worth looking at. -/
  sigs : Array UInt64
  full : Bool

/-- What the replay carries from one step to the next. -/
structure State where
  interp : Interp
  proofs : Std.HashMap Nat Expr := {}
  byNumber : Std.HashMap Nat Step := {}
  splitProps : Std.HashMap Nat Expr := {}
  skolems : Std.HashMap Nat Expr := {}
  definedPreds : Std.HashMap Nat Expr := {}
  definedFns : Std.HashMap Nat Expr := {}
  /-- The symbols the proof has bound so far, to be abstracted at the end. -/
  bound : Array Expr := #[]
  /-- Which of the goal's own declarations a step's context does not want. Fixed for the
  whole replay; see `classifyDroppable`. -/
  droppable : Option (Std.HashSet FVarId) := none
  /-- The CNF of each parent that has been clausified, by the parent's unit number. A
  parent that clausifies into several clauses is one transformation shared by all of
  them; see the `.clausify` case below. -/
  clausified : Std.HashMap Nat Clausified := {}
  last : Option Expr := none

/--
Replay the refutation from step `k`, returning a proof of `False`.

The definitions are `let`-bound rather than substituted. Substituting is tempting —
a definition names a formula, so the name *is* the formula — but it makes the definition
transparent to the tactics that follow, and `cnfify` then distributes a conjunction
Vampire had deliberately hidden behind the name, producing a different CNF from the one
the proof was found in. The generated file writes `let sP := φ`, and that is load-bearing:
`isDefEq` sees through a `let`, so `Iff.rfl` still proves the defining equation, while
`simp` and `cnfify` leave it alone.

That is also why this recurses rather than looping: a `let` scopes over what follows it.
-/
partial def replayFrom (r : Refutation) (st : State) (k : Nat) : TermElabM Expr := do
  if h : k < r.steps.size then
    let s := r.steps[k]
    trace[vampire.replay] "step {s.number} {s.ruleName} premises {s.premises}"
    let st := { st with byNumber := st.byNumber.insert s.number s }
    match s.handler with
    | .skipped =>
      -- `isUncheckedInProof`: part of the derivation, but no Lean step, and the rules
      -- that name it as a premise ignore it.
      replayFrom r st (k + 1)
    | .input =>
      let some src := st.interp.input s.number
        | throwError "vampire: no Lean hypothesis for input step {s.number}"
      let t0 ← IO.monoMsNow
      let e ← bridgeInput st.interp r.symbols s src
      trace[vampire.timing] "step {s.number} input: run {(← IO.monoMsNow) - t0}ms"
      replayFrom r { st with proofs := st.proofs.insert s.number e, last := some e } (k + 1)
    | .avatarDefinition =>
      let comp ← formExpr st.interp r.symbols {} s.splitBody
      withLetDecl (Name.mkSimple s!"sA{s.splitVar}") (.sort .zero) comp fun x => do
        let splitProps := st.splitProps.insert s.splitVar x
        let e ← mkAppOptM ``Iff.refl #[x]
        replayFrom r { st with
          splitProps
          interp := { st.interp with splitProp := fun v => splitProps[v]? }
          proofs := st.proofs.insert s.number e
          bound := st.bound.push x
          last := some e } (k + 1)
    | .predicateDefinition | .functionDefinition =>
      let isPred := s.handler == .predicateDefinition
      let lam ← definedLambda st.interp r.symbols s isPred
      let name := Name.mkSimple (if isPred then s!"sP{s.definedSymbol}" else s!"sF{s.definedSymbol}")
      withLetDecl name (← inferType lam) lam fun x => do
        let interp ←
          if isPred then
            let m := st.definedPreds.insert s.definedSymbol x
            pure ({ st.interp with definedPred := fun p => m[p]? }, m, st.definedFns)
          else
            let m := st.definedFns.insert s.definedSymbol x
            pure ({ st.interp with definedFn := fun f => m[f]? }, st.definedPreds, m)
        let (i', preds, fns) := interp
        let st := { st with interp := i', definedPreds := preds, definedFns := fns }
        -- The step that introduces a definition is the one place its value is needed:
        -- it proves the defining equation.
        let e ← stepLemma st.interp r.symbols s #[] (opaqueLets := false)
          (droppable := st.droppable)
        replayFrom r { st with
          proofs := st.proofs.insert s.number e
          bound := st.bound.push x
          last := some e } (k + 1)
    | .skolemise =>
      let some parentNum := s.premises[0]?
        | throwError "vampire: skolemisation {s.number} has no parent"
      let some parent := st.proofs[parentNum]?
        | throwError "vampire: the parent of skolemisation {s.number} is unproved"
      let (witnesses, spec) ← skolemise st.interp r.symbols s parent
      -- Each skolem symbol is `let`-bound rather than substituted, for the same reason
      -- the definitions are. `Classical.choose h` carries the proof `h`, and two
      -- occurrences built from different — even equivalent — existentials are not
      -- definitionally equal, so a clause mentioning one will not close a goal
      -- mentioning the other. Binding it once makes every use the same variable, and
      -- keeps `cnfify` from seeing a witness where Vampire has an opaque constant.
      withSkolems witnesses.toList st.skolems st.bound fun skolems bound => do
        let interp := { st.interp with skolem := fun f => skolems[f]? }
        let want ← stepType interp r.symbols s
        let specStx ← exprToSyntax spec
        -- `symm_match using` wants a hypothesis, so the specification is bound first.
        let specId := mkIdent (Name.mkSimple "spec")
        let t0 ← IO.monoMsNow
        let e ← proveBy want
          #[← `(tactic| have $specId:ident := $specStx),
            ← `(tactic| first | exact $specId | symm_match using $specId)]
          m!"skolemisation {s.number}"
        trace[vampire.timing] "step {s.number} skolemisation: run \
          {(← IO.monoMsNow) - t0}ms"
        replayFrom r { st with
          skolems, interp, bound
          proofs := st.proofs.insert s.number e, last := some e } (k + 1)
    -- A clausification whose parent produced several clauses. The generated file does
    -- the parent's transformation once, in the enclosing block, and destructures it for
    -- all of them; a step lemma here redid it per clause, and that is not a constant
    -- factor. `SYN472+1`'s conjecture clausifies 196 ways and the refutation uses 145 of
    -- them, at two minutes a clause. Do it once and pick.
    | .clausify =>
      if s.cnfCount <= 1 then generic st s else
      let some parentNum := s.premises[0]?
        | throwError "vampire: clausification {s.number} has no parent"
      let some parent := st.proofs[parentNum]?
        | throwError "vampire: the parent of clausification {s.number} is unproved"
      let mut st := st
      let t0 ← IO.monoMsNow
      let mut cnf ←
        match st.clausified[parentNum]? with
        | some c => pure c
        | none =>
          let c ← clausifyParent parent s.number (full := false)
          trace[vampire.timing] "clausified parent {parentNum} (weak prenex) in \
            {(← IO.monoMsNow) - t0}ms"
          st := { st with clausified := st.clausified.insert parentNum c }
          pure c
      let tPick ← IO.monoMsNow
      let want ← stepType st.interp r.symbols s
      let reorder ← clausifyReorder s
      let mut e? ← clauseFrom cnf want reorder s.number parentNum (mayFail := !cnf.full) st.droppable
      if e?.isNone then
        -- The cheap prenexing did not reach this clause. Prenex the parent the way
        -- `prenexify` does, for this parent and every later clause of it.
        let tFull ← IO.monoMsNow
        cnf ← clausifyParent parent s.number (full := true)
        trace[vampire.timing] "clausified parent {parentNum} (full prenex) in \
          {(← IO.monoMsNow) - tFull}ms"
        st := { st with clausified := st.clausified.insert parentNum cnf }
        e? ← clauseFrom cnf want reorder s.number parentNum (mayFail := false) st.droppable
      trace[vampire.timing] "step {s.number} cnf transformation (shared): run \
        {(← IO.monoMsNow) - tPick}ms"
      let some e := e?
        | throwError "vampire: step {s.number} (cnf transformation) is not one of the \
            clauses its parent produced"
      replayFrom r { st with
        proofs := st.proofs.insert s.number e, last := some e } (k + 1)
    | _ => generic st s
  else
    let some e := st.last | throwError "vampire: the exported refutation is empty"
    -- Close every `let` the definitions opened.
    --
    -- Neither of `mkLetFVars`'s two default passes is wanted here, and both are paid for
    -- by walking a proof term that is the whole refutation. `usedLetOnly` drops the
    -- bindings the body does not mention, which costs a scan per binding to discover
    -- something this side already knows -- every binding is a definition, a split or a
    -- skolem that a step asked for. `generalizeNondepLet` turns a `let` whose body does
    -- not depend on it into a `fun` applied to its value, which is the opposite of what
    -- the replay wants: the design rests on a split name *being* its component after
    -- zeta, not on it being a parameter that happens to be applied to it.
    let tAbs ← IO.monoMsNow
    let e ← mkLetFVars st.bound e (usedLetOnly := false) (generalizeNondepLet := false)
    let tChk ← IO.monoMsNow
    trace[vampire.timing] "abstracted {st.bound.size} definitions in {tChk - tAbs}ms"
    -- Every application the assembly makes was checked as it was made, by
    -- `applyChecked`, and everything else here is built by a tactic or by `mkAppM`,
    -- which check what they build. Re-checking the finished term establishes nothing
    -- those did not, and it is not cheap: `Meta.check` walks the whole shared DAG with
    -- the elaborator's `inferType`, which on `PRD001+1` was 167s against 72s for the
    -- 1415 step scripts it was checking. The kernel checks the term again anyway when
    -- the declaration is added; what the eager check bought was attribution, and
    -- `applyChecked` attributes better and by step number.
    --
    -- `set_option vampire.checkReplay true` puts it back, for when a kernel error does
    -- come out of a replayed proof and the question is which part of the assembly —
    -- rather than which application — is wrong.
    if (← getOptions).getBool `vampire.checkReplay false then
      try
        check e
        trace[vampire.timing] "checked the assembled term in {(← IO.monoMsNow) - tChk}ms"
      catch err =>
        throwError "vampire: the replayed proof does not typecheck\
          {indentD (← err.toMessageData.toString)}"
    return e
where
  /--
  Clausify a parent once: transform it into CNF and take that conjunction apart.

  `full` chooses how far the prenexing goes. `prenexify` hoists every `∀` to the front
  of the *whole* formula, past the conjunctions as well as the disjunctions, and
  `cnfify`'s `cnf_prenex3` then pushes them back into each conjunct. On a conjecture
  that is one conjunction a hundred wide, hoisting past `∧` rewrites the whole formula
  once per binder — 96s of `SYN472+1`'s 154s, to undo it again immediately.

  What the clauses actually need is a `∀` at the top of each *disjunction*, which the
  `or` rules do on their own and which `cnfify` finishes; that is the cheap form, and it
  is what is tried first. It is a weaker normal form, not a different one — where it
  leaves a binder somewhere `cnfify` cannot use, the clause simply will not be among the
  leaves, and the caller asks again with `full := true`, which is exactly what the
  reference does.
  -/
  clausifyParent (parent : Expr) (num : Nat) (full : Bool) : TermElabM Clausified := do
    -- The prenexing is a rewrite and stays one; the CNF is not, and `Vampire/Cnf.lean`
    -- builds it. The two used to be one tactic block, which `transformOnce` runs once
    -- for the type and the proof together — splitting them costs a second run of that
    -- and saves the whole of `cnfify`, which was 10.4s over the benchmark's 843 parents
    -- against `Cnf.clauses`, which walks the formula once.
    let (statement, proof) ← Tac.transformOnce parent
      (fun v => do
        let prenex ←
          if full then `(tactic| prenexify at $v:ident) else Tac.orPrenex v
        return #[prenex])
      m!"prenexing the parent of step {num}"
    match ← Cnf.clauses inhabitant statement with
    | some producers =>
      -- Each producer is a function from the prenexed parent to one clause of its CNF.
      -- Nothing is projected out of anything: `andLeaves`' `And.left`/`And.right` chains
      -- were the shape simp had to leave the clauses in, not a thing the caller wanted.
      let clauses := producers.map (fun (ty, f) => (ty, mkApp f proof))
      let index := clauses.foldl (init := ({} : Std.HashMap Expr Expr))
        fun m (ty, pf) => if m.contains ty then m else m.insert ty pf
      -- `statement` and `proof` are the CNF, because `clauseFrom`'s fallback states its
      -- lemma over them and splits it. It is the leaves that the fast path uses, and
      -- they are the producers rather than projections out of this.
      let some (statement, proof) := Cnf.conjoin clauses
        | throwError "vampire: the parent of step {num} clausified into nothing"
      return { statement, proof, index, clauses, sigs := clauses.map (Bridge.sig ·.1),
               full }
    | none =>
      -- A CNF wider than `Cnf.maxClauses`. `cnfify` as before, over the formula the
      -- prenexing already produced.
      let (statement, proof) ← Tac.transformOnce proof
        (fun v => do return #[← `(tactic| cnfify at $v:ident)])
        m!"clausifying the parent of step {num}"
      let clauses ← andLeaves proof statement
      let index := clauses.foldl (init := ({} : Std.HashMap Expr Expr))
        fun m (ty, pf) => if m.contains ty then m else m.insert ty pf
      return { statement, proof, index, clauses, sigs := clauses.map (Bridge.sig ·.1),
               full }

  /--
  The proof of one clause, out of a clausified parent.

  `mayFail` says whether there is a stronger prenexing still to try: under it a clause
  that cannot be found is reported as `none` rather than as an error, so the caller can
  ask again.
  -/
  clauseFrom (cnf : Clausified) (want : Expr) (reorder : Array (TSyntax `tactic))
      (num parentNum : Nat) (mayFail : Bool)
      (droppable : Option (Std.HashSet FVarId)) : TermElabM (Option Expr) := do
    -- Usually the clause is one of the leaves as the split left it, and then there is
    -- nothing to prove: the projection out of the CNF *is* the proof. It is ascribed so
    -- that a later step reading this one with `inferType` gets the statement Vampire
    -- recorded rather than the leaf's own rendering of it.
    -- The reorder lines are tried too, and not only when there are none of them: what
    -- they do is permute the goal's `∀` prefix into the order the exporter recorded,
    -- and introducing a conclusion's binders and letting the premise's prefix be
    -- instantiated is a rule the bridge already has.
    if let some pf ← findLeaf want cnf.index cnf.clauses cnf.sigs then
      return some (← mkExpectedTypeHint pf want)
    -- Otherwise the binder prefix wants permuting, or the clause wants the AC
    -- normalisation to be recognised. `vampire_finish_clausify` does what it always
    -- did, over the shared CNF rather than one it makes for itself.
    let hc := mkIdent (Name.mkSimple "hc")
    let build : TermElabM Expr := do
      let lemma ← proveBy (← mkArrow cnf.statement want)
        (#[← `(tactic| intro $hc:ident)] ++ reorder ++
          #[← `(tactic| vampire_finish_clausify)])
        m!"step {num} (cnf transformation)" (restrict := true) (droppable := droppable)
      applyChecked lemma #[cnf.proof] m!"step {num} (cnf transformation)"
        (fun _ => m!"{parentNum}")
    if mayFail then
      try return some (← build) catch _ => return none
    else
      return some (← build)

  /-- Every rule that is one lemma applied to the proofs of its premises. -/
  generic (st : State) (s : Step) : TermElabM Expr := do
    let mut premises : Array Step := #[]
    for n in s.premises do
      let some p := st.byNumber[n]?
        | throwError "vampire: step {s.number} names premise {n}, which is not in \
            the exported proof"
      if p.handler == .skipped then continue
      premises := premises.push p
    -- `avatarRefutationByResolution` sorts the parents by unit number, and they were
    -- exported in that order; every other rule takes them as the inference lists them.
    let order :=
      if s.handler == .avatarRefutation then s.premises.qsort (· < ·) else s.premises
    let mut args : Array Expr := #[]
    -- The unit number behind each argument, so a mismatch can name the premise the
    -- proof came from rather than its position in the application.
    let mut argOf : Array Nat := #[]
    for n in order do
      if ((st.byNumber[n]?).map (·.handler)) == some .skipped then continue
      let some a := st.proofs[n]?
        | throwError "vampire: premise {n} of step {s.number} is unproved"
      args := args.push a
      argOf := argOf.push n
    let e ←
      if s.handler == .avatarRefutation then
        let t0 ← IO.monoMsNow
        let e ← avatarRefutation st.interp s args
        trace[vampire.timing] "step {s.number} avatar sat refutation: run \
          {(← IO.monoMsNow) - t0}ms"
        pure e
      else
        -- Folding a definition in is exactly a step of definitional unfolding, so it
        -- is the one derived rule that needs to see through the `let`.
        let opaqueLets := s.handler != .definitionFoldingPred
        let lemma ← stepLemma st.interp r.symbols s premises opaqueLets st.droppable
        applyChecked lemma args m!"step {s.number} ({s.ruleName})"
          (fun k => m!"{(argOf[k]?).map toString |>.getD s!"at position {k}"}")
    replayFrom r { st with
      proofs := st.proofs.insert s.number e, last := some e } (k + 1)

/-- Replay a refutation as a Lean proof of `False`. -/
def replay (i : Interp) (r : Refutation) : TermElabM Expr := do
  replayFrom r { interp := i, droppable := some (← classifyDroppable) } 0

end Replay

end Vampire
