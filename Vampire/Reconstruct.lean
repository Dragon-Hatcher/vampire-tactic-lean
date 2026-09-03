import Lean
import VampLean
import Vampire.Proof

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

Two scripts are transposed rather than copied. Multi-clause clausification takes its
clauses out of the conjunction by projection, because the generator shares one
destructuring across every conclusion drawn from the same parent. And the `ennf` script
gets the `first | exact h | grind` its three sibling normal forms already have, in place
of a bare `exact h` that assumes VampLean and Vampire agree on the order of the
disjuncts — they do not always.

AVATAR needs no `{sA : Prop}` binders at all. A split proposition is introduced by a
definition step as `let sAv := C`, so it *is* `C`; the replay simply uses `C`. The
per-theorem binders this fork moved out of a section variable block — because Lean
rescanned the block once per declaration — have no counterpart here.

## What is not ported

* **The definition introductions** — predicate, function, and the folding that follows
  them. Like skolemisation they bring a symbol into the proof, but through a `let` whose
  body is a formula rather than a witness.
* **Theory axioms.** The generated file emits a Lean `axiom` for each; a tactic cannot.
* **`EVALUATION`**, whose script is `norm_num1` and `our_int_not_lt` — Mathlib-backed,
  and gone since VampLean dropped Mathlib. The translation does not produce arithmetic
  either.
* **`rectify` with a non-identity renaming**, and the quantifier reordering
  `outputReorderIfNeeded` inserts when prenexing changes the variable order.
* **Skolem functions** — an existential under a universal. `Classical.skolem` is the
  missing ingredient.
* **The `bv_decide` encoding of the SAT refutation**, which the generator falls back to
  when the solver's derivation is unavailable. Replaying the derivation is the path this
  fork added and the one taken here.

A step needing one of these is reported by name and unit number rather than guessed at.
-/

set_option autoImplicit false

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

private def sortExpr (i : Interp) (syms : Symbols) (s : Nat) : MetaM Expr := do
  let some e := i.sort s
    | throwError "vampire: the sort '{syms.sorts.getD s (toString s)}' has no Lean \
        meaning; it was introduced by the prover"
  return e

private def fnExpr (i : Interp) (syms : Symbols) (f : Nat) : MetaM Expr := do
  if let some e := i.skolem f then return e
  let some e := i.fn f
    | throwError "vampire: the function symbol \
        '{(syms.funs[f]?).map (·.name) |>.getD (toString f)}' has no Lean meaning; \
        it was introduced by the prover (skolemisation and definition introduction are \
        not ported yet)"
  return e

private def predExpr (i : Interp) (syms : Symbols) (p : Nat) : MetaM Expr := do
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

/-- A formula as a Lean `Prop`. Mirrors `LeanPrinter::printFormula`. -/
partial def formExpr (i : Interp) (syms : Symbols) (vs : Vars) : FForm → MetaM Expr
  | .lit p pol args => do
    let hd ← predExpr i syms p
    let e := mkAppN hd (← args.mapM (termExpr i syms vs))
    if pol then return e else mkAppM ``Not #[e]
  | .eq pol _ lhs rhs => do
    let l ← termExpr i syms vs lhs
    let r ← termExpr i syms vs rhs
    let e ← mkAppM ``Eq #[l, r]
    if pol then return e else mkAppM ``Not #[e]
  | .tru => return .const ``True []
  | .fls => return .const ``False []
  | .neg f => do mkAppM ``Not #[← formExpr i syms vs f]
  | .conj fs => do foldBin ``And (← fs.mapM (formExpr i syms vs)) (.const ``True [])
  | .disj fs => do foldBin ``Or (← fs.mapM (formExpr i syms vs)) (.const ``False [])
  | .imp a b => do mkArrow (← formExpr i syms vs a) (← formExpr i syms vs b)
  | .iff a b => do mkAppM ``Iff #[← formExpr i syms vs a, ← formExpr i syms vs b]
  | .xor a b => do
    mkAppM ``Not #[← mkAppM ``Iff #[← formExpr i syms vs a, ← formExpr i syms vs b]]
  | .all vars f => quantified i syms vs vars f true 0
  | .ex vars f => quantified i syms vs vars f false 0
  | .split v => do
    let some e := i.splitProp v
      | throwError "vampire: the AVATAR split sA{v} is used before it is defined"
    return e
where
  foldBin (c : Name) (es : Array Expr) (unit : Expr) : MetaM Expr := do
    if es.isEmpty then return unit
    let mut e := es[es.size - 1]!
    for j in [1:es.size] do
      e ← mkAppM c #[es[es.size - 1 - j]!, e]
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
      else mkAppM ``Exists #[← mkLambdaFVars #[x] body]
  else
    formExpr i syms vs f

end

/-- The statement of a unit.

A clause is the universal closure of the disjunction of its literals, which is what
`LeanChecker::outputClause` prints; a formula carries its own quantifiers. -/
def splitLit (i : Interp) (v : Nat) (positive : Bool) : MetaM Expr := do
  let some e := i.splitProp v
    | throwError "vampire: the AVATAR split sA{v} is used before it is defined"
  if positive then return e else mkAppM ``Not #[e]

/-- A SAT clause as a Lean disjunction, which is `LeanChecker::outputSatClause`. -/
def satClauseExpr (i : Interp) (lits : Array (Nat × Bool)) : MetaM Expr := do
  if lits.isEmpty then return .const ``False []
  let mut e ← splitLit i (lits[lits.size - 1]!).1 (lits[lits.size - 1]!).2
  for j in [1:lits.size] do
    let (v, p) := lits[lits.size - 1 - j]!
    e ← mkAppM ``Or #[← splitLit i v p, e]
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

/-- Prove `type` by running `tacs`. This is what `theorem … := by …` does in the
generated file; here the result is a term rather than a declaration. -/
def proveBy (type : Expr) (tacs : Array (TSyntax `tactic)) (what : MessageData) :
    TermElabM Expr := do
  let mv ← mkFreshExprSyntheticOpaqueMVar type
  -- Stop once there is nothing left to prove. The generated file is one tactic block
  -- per lemma and assumes every line has a goal to act on; a script that closes early
  -- would make the next line fail with "no goals to be solved", which is not a failure
  -- of the proof.
  -- Without this an elaboration error inside a script is *logged* and the offending
  -- term becomes `sorryAx`, so the replay reports success and the axiom only shows up
  -- in `#print axioms`.
  let run : TermElabM (List MVarId) := withoutErrToSorry <| Tactic.run mv.mvarId! do
    for t in tacs do
      if (← Tactic.getGoals).isEmpty then break
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
  instantiateMVars mv

/--
An element of `ty`, by instance synthesis.

Vampire's logic assumes every sort is non-empty, and a refutation may use that: from
`∀ x, P x` and `∀ x, ¬P x` it derives `⊥`, which in Lean needs an inhabitant of the
domain. The generated file gets one from the `[Inhabited ι]` in its preamble, so this
asks for the same instance — `Nonempty` too, since that is what the assumption really
needs and `Classical.choice` turns it into a term.
-/
def inhabitant (ty : Expr) : MetaM (Option Expr) := do
  if let .some inst ← trySynthInstance (← mkAppM ``Inhabited #[ty]) then
    return some (← mkAppOptM ``default #[ty, inst])
  if let .some inst ← trySynthInstance (← mkAppM ``Nonempty #[ty]) then
    return some (← mkAppOptM ``Classical.choice #[ty, inst])
  return none

/-- `intro a b c`, or nothing when there is nothing to introduce. -/
def intros (ids : Array Ident) : TermElabM (Array (TSyntax `tactic)) := do
  if ids.isEmpty then return #[]
  return #[← `(tactic| intro $ids*)]

/-- `have iN := hN t₁ t₂ …` — `LeanChecker::instantiatePremiseVars`. -/
def instantiate (target head : Ident) (args : Array Term) : TermElabM (TSyntax `tactic) := do
  if args.isEmpty then `(tactic| have $target:ident := $head)
  else `(tactic| have $target:ident := $head $args*)

end Tac

namespace Replay

open Tac Lean.Parser.Tactic

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
    for (v, sort) in s.rangeSorts do sortOf := sortOf.insert v sort
    let mut m : Std.HashMap Nat Term := {}
    for v in needed do
      let some sort := sortOf[v]?
        | throwError "vampire: step {s.number} instantiates a premise at v{v}, whose \
            sort the prover did not report"
      let ty ← Replay.sortExpr i syms sort
      let some w ← inhabitant ty
        | throwError "vampire: step {s.number} instantiates a premise at a variable the \
            conclusion does not bind, so it needs an element of {ty}, and there is no \
            `Inhabited {ty}` or `Nonempty {ty}` instance. Vampire's logic assumes every \
            sort is non-empty and this refutation uses that; add the instance to the \
            context"
      m := m.insert v (← exprToSyntax w)
    return fun v => m[v]?
  -- `have iN := hN t₁ t₂ …`, for every premise.
  let instantiations (fallbackToOwnVars : Bool) : TermElabM (Array (TSyntax `tactic)) := do
    let mut tacs := #[]
    for k in [0:premises.size] do
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
    tacs := tacs.push (←
      if s.handler == .genericSubs then `(tactic| grind only [cases Or])
      else `(tactic| grind only))
    return tacs
  | .generic =>
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
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| flattening at $h:ident <;> first | exact $h | grind)]
  | .nnf =>
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| nnf_transformation at $h:ident <;> first | exact $h | grind)]
  | .reduceFalseTrue =>
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| remove_tauto at $h:ident <;> first | exact $h | grind)]
  | .rectify =>
    -- The renaming loop is not ported; with every renaming the identity this is what
    -- `LeanChecker::rectify` emits.
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| try simp only [forall_const, exists_const, -iff_self, -eq_self] at $h:ident),
             ← `(tactic| symm_match using $h)]
  | .clausify =>
    if s.cnfCount <= 1 then
      return #[← `(tactic| intro $h:ident),
               ← `(tactic| try simp only),
               ← `(tactic| prenexify at $h:ident <;> ac_nf0 <;> ac_nf0 at $h:ident <;>
                     try (first | assumption | trivial))]
    -- The parent clausifies into several clauses, of which this step is one. The
    -- generated file shares the destructuring across all of them by putting it in the
    -- enclosing block; a standalone lemma has to redo it, so each clause is taken out
    -- of the conjunction by projection rather than by a `let` pattern.
    let mut tacs := #[← `(tactic| intro $h:ident),
                      ← `(tactic| prenexify at $h:ident),
                      ← `(tactic| cnfify at $h:ident)]
    let mut clauses : Array Ident := #[]
    for k in [0:s.cnfCount] do
      let c := mkIdent (Name.mkSimple s!"c{k}")
      clauses := clauses.push c
      let mut acc : Term := h
      for _ in [0:k] do acc ← `($acc|>.2)
      let proj ← if k + 1 == s.cnfCount then pure acc else `($acc|>.1)
      tacs := tacs.push (← `(tactic| have $c:ident := $proj))
    tacs := tacs.push (← `(tactic| ac_nf0 at $clauses*))
    tacs := tacs.push (← `(tactic| try simp only))
    tacs := tacs.push (← `(tactic| ac_nf0))
    tacs := tacs.push (← `(tactic| assumption))
    return tacs
  | .unusedPredDefRemoval =>
    return #[← `(tactic| intro $h:ident), ← `(tactic| simp only [$h:ident, imp_self, implies_true])]
  | .avatarContradiction =>
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| try simp only [imp_false, imp_iff_not_or, not_not] at $h:ident),
             ← `(tactic| exact $h)]
  | .definitionUnfolding =>
    -- intros; instantiate the first premise; rewrite once with each defining equation,
    -- in the direction the recorded left-hand side says; grind.
    let ids := (Array.range premises.size).map hyp ++ conclusionBinders
    let mut tacs ← intros ids
    let insts ← instantiations true
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
    for k in [1:premises.size] do
      unless (s.rewrites[k - 1]?).getD true do
        tacs := tacs.push (← `(tactic| try rw [← $(hyp k):ident]))
    for k in [1:premises.size] do
      if (s.rewrites[k - 1]?).getD true then
        tacs := tacs.push (← `(tactic| try rw [$(hyp k):ident]))
    tacs := tacs.push (← `(tactic| try simp only [imp_iff_not_or] at $h0:ident))
    tacs := tacs.push (← `(tactic| prenexify))
    tacs := tacs.push (← `(tactic| prenexify at $h0:ident))
    let introIds := s.introSplits.map (fun (p : Nat × Nat) => splitVar p.1 p.2)
    tacs := tacs ++ (← intros introIds)
    let args := s.parentArgs.map (fun (p : Nat × Nat) => (⟨splitVar p.1 p.2⟩ : Term))
    tacs := tacs.push (← `(tactic| have $newForm:ident := $h0 $args*))
    tacs := tacs.push (← `(tactic|
      simp (config := { failIfUnchanged := false }) only [not_and_or, not_not, eq_comm]
        at $newForm:ident))
    tacs := tacs.push (← `(tactic|
      simp (config := { failIfUnchanged := false }) only [eq_comm]))
    tacs := tacs.push (← `(tactic| ac_nf at $newForm:ident ⊢ <;> grind only [cases Or]))
    return tacs
  | .avatarDefinition | .avatarRefutation | .skolemise =>
    throwError "vampire: step {s.number} is built as a term, not by a script"
  | .skipped =>
    throwError "vampire: step {s.number} contributes nothing and has no script"
  | .input =>
    throwError "vampire: input step {s.number} has no script"
  | .unsupported =>
    throwError "vampire: the rule '{s.ruleName}' (step {s.number}) is not ported yet"

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
    let hStx ← exprToSyntax h
    proveBy want #[← `(tactic| first | exact $hStx | grind only [$hStx:term])]
      m!"input step {s.number}"
  | .definition d =>
    let dStx ← exprToSyntax d
    proveBy want
      #[← `(tactic| first | rfl | (intros; rfl) | (intros; simp only [$dStx:term]))]
      m!"the defining equation of the symbol at input step {s.number}"

/--
The lemma for one derived step: `premise₁ → … → premiseₙ → conclusion`, proved by its
script. This is `theorem inf_sN` in the generated file.
-/
def stepLemma (i : Interp) (syms : Symbols) (s : Step) (premises : Array Step) :
    TermElabM Expr := do
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
  let tacs ← script i syms s premises
  proveBy ty tacs m!"step {s.number} ({s.ruleName})"

/--
The skolem constants a skolemisation introduces, and the proof of its conclusion.

`LeanChecker::skolemize` writes `exists_prenex at stepP`, then `let ⟨sk₁, …, h⟩ := stepP`
to bring the symbols into scope for the rest of the block, and closes with
`symm_match using h`. A `let` pattern only scopes over what follows it, so a standalone
lemma cannot state a conclusion mentioning `sk`. `Classical.choose` gives the same
witnesses as closed terms instead, which every later step can then mention.

Only prenex existentials are handled: a skolem *function*, from an existential under a
universal, would need `Classical.skolem` and is reported.
-/
def skolemise (syms : Symbols) (s : Step) (parent : Expr) :
    TermElabM (Array (Nat × Expr) × Expr) := do
  let mut witnesses : Array (Nat × Expr) := #[]
  let mut h := parent
  for f in s.skolems do
    let some info := syms.funs[f]?
      | throwError "vampire: the skolem symbol {f} was not declared"
    unless info.arity == 0 do
      throwError "vampire: step {s.number} introduces the skolem function \
        '{info.name}' of arity {info.arity}; only skolem constants are ported"
    let ty ← inferType h
    unless ty.isAppOf ``Exists do
      throwError "vampire: step {s.number} skolemises {ty}, which is not an existential \
        — the parent was not in prenex form"
    let w ← mkAppM ``Classical.choose #[h]
    witnesses := witnesses.push (f, w)
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
  let mut last : Option Expr := none
  for step in s.derivation do
    let concl ← satClauseExpr i step.concl
    let mut ty := concl
    for prem in step.premises.reverse do
      ty ← mkArrow (← satClauseExpr i prem) ty
    let lemma ← proveBy ty #[← `(tactic| grind only [cases Or])]
      m!"a step of the SAT refutation at {s.number}"
    let mut args : Array Expr := #[]
    for prem in step.premises do
      let some a := have?[key prem]?
        | throwError "vampire: a clause in the SAT derivation at step {s.number} is \
            neither derived nor a hypothesis"
      args := args.push a
    let e := mkAppN lemma args
    have? := have?.insert (key step.concl) e
    last := some e
  let some e := last | throwError "vampire: empty SAT derivation"
  return e

/--
Replay the whole refutation, returning a proof of `False`.

The second loop of the generated file: each derived step is the lemma for it applied to
the proofs of its premises, and the last step is the empty clause.
-/
def replay (i₀ : Interp) (r : Refutation) : TermElabM Expr := do
  let mut splitProps : Std.HashMap Nat Expr := {}
  let mut skolems : Std.HashMap Nat Expr := {}
  let mut i := i₀
  let mut proofs : Std.HashMap Nat Expr := {}
  let mut byNumber : Std.HashMap Nat Step := {}
  let mut last : Option Expr := none
  for s in r.steps do
    trace[vampire.replay] "step {s.number} {s.ruleName} premises {s.premises}"
    byNumber := byNumber.insert s.number s
    match s.handler with
    | .input =>
      let some h := i.input s.number
        | throwError "vampire: no Lean hypothesis for input step {s.number}"
      let e ← bridgeInput i r.symbols s h
      proofs := proofs.insert s.number e
      last := some e
    | .avatarDefinition =>
      -- The generated file writes `let sAv := C` and then `have stepN : (sAv ↔ C) :=
      -- Iff.rfl`. Here `sAv` simply is `C`, so there is nothing to bind and the step is
      -- `Iff.rfl` at `C ↔ C`. The `{sAv : Prop}` binders the file needs — which this
      -- fork moved out of a section variable block, because Lean rescanned the block
      -- once per declaration — have no counterpart at all.
      let comp ← formExpr i r.symbols {} s.splitBody
      splitProps := splitProps.insert s.splitVar comp
      i := { i with splitProp := fun v => splitProps[v]? }
      let e ← mkAppOptM ``Iff.refl #[comp]
      proofs := proofs.insert s.number e
      last := some e
    | .skipped =>
      -- `isUncheckedInProof`: it is part of the derivation but contributes no Lean
      -- step, and the rules that name it as a premise ignore it.
      pure ()
    | .skolemise =>
      let some parentNum := s.premises[0]?
        | throwError "vampire: skolemisation {s.number} has no parent"
      let some parent := proofs[parentNum]?
        | throwError "vampire: the parent of skolemisation {s.number} is unproved"
      let (witnesses, spec) ← skolemise r.symbols s parent
      for (f, w) in witnesses do skolems := skolems.insert f w
      i := { i with skolem := fun f => skolems[f]? }
      let want ← stepType i r.symbols s
      let specStx ← exprToSyntax spec
      -- `symm_match using` wants a hypothesis, so the specification is bound first.
      let spec := mkIdent (Name.mkSimple "spec")
      let e ← proveBy want
        #[← `(tactic| have $spec:ident := $specStx),
          ← `(tactic| first | exact $spec | symm_match using $spec)]
        m!"skolemisation {s.number}"
      proofs := proofs.insert s.number e
      last := some e
    | _ =>
      let mut premises : Array Step := #[]
      for n in s.premises do
        let some p := byNumber[n]?
          | throwError "vampire: step {s.number} names premise {n}, which is not in \
              the exported proof"
        if p.handler == .skipped then continue
        premises := premises.push p
      -- `avatarRefutationByResolution` sorts the parents by unit number, and they were
      -- exported in that order; every other rule takes them as the inference lists them.
      let order :=
        if s.handler == .avatarRefutation then s.premises.qsort (· < ·) else s.premises
      let mut args : Array Expr := #[]
      for n in order do
        if ((byNumber[n]?).map (·.handler)) == some .skipped then continue
        let some a := proofs[n]?
          | throwError "vampire: premise {n} of step {s.number} is unproved"
        args := args.push a
      let e ←
        if s.handler == .avatarRefutation then
          avatarRefutation i s args
        else
          pure (mkAppN (← stepLemma i r.symbols s premises) args)
      proofs := proofs.insert s.number e
      last := some e
  let some e := last | throwError "vampire: the exported refutation is empty"
  -- The steps are assembled by application, which `mkAppN` does not typecheck. Without
  -- this a mismatch surfaces as a kernel error against the user's own theorem, with no
  -- indication of which step is wrong.
  try check e
  catch err =>
    throwError "vampire: the replayed proof does not typecheck\
      {indentD (← err.toMessageData.toString)}"
  return e

end Replay

end Vampire
