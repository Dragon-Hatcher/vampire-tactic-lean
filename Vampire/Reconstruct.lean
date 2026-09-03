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

Three places do something the generator does not, each because the generator is writing
a standalone file and this is working inside a goal:

* **Input units are bridged.** `fullProof` takes Vampire's own units as hypotheses and
  has nothing to match them against. Here the Lean hypothesis the unit came from is
  right there, and the two can differ — Vampire orients an equation by its term
  ordering — so `bridgeInput` carries the proof across.
* **Witnesses come from the context.** Vampire assumes every sort is non-empty and its
  proofs use that. The generated file declares `[Inhabited ι]` in its preamble; here
  `inhabitant` looks for a term the user already has.
* **A script stops when the goal closes.** The generated file is one block per lemma
  and assumes every line has a goal to act on.

One tactic is strengthened rather than transposed: the `ennf` script's bare `exact h`
gets the `first | exact h | grind` its three sibling normal forms already have. It
assumes VampLean's transformation and Vampire's agree on the order of the disjuncts,
and they do not always.

## What is not ported

* **AVATAR** — splitting, the SAT refutation, and the resolution replay of it that this
  fork added. The tactic runs Vampire with `avatar off` rather than producing steps it
  cannot replay. This is the biggest remaining piece: it costs search power on large
  problems.
* **Skolemisation and the definition introductions** — these bring symbols into the
  proof that the goal has no term for, so they need the `exists_prenex` and
  `let ⟨sk, h⟩ := …` machinery the generator uses.
* **Multi-clause clausification** — `LeanChecker::clausify` shares one destructured
  conjunction across several conclusions, which needs the enclosing context rather than
  a standalone lemma.
* **`rectify` with a non-identity renaming**, and the quantifier reordering
  `outputReorderIfNeeded` inserts when prenexing changes the variable order.
* **Arithmetic** (`EVALUATION` and the theory axioms), which the translation does not
  reach either.

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
def stepType (i : Interp) (syms : Symbols) (s : Step) : MetaM Expr := do
  unless s.splits.isEmpty do
    throwError "vampire: step {s.number} holds under an AVATAR split; the splitting \
      rules are not ported yet"
  if s.isClause then
    go {} 0
  else
    formExpr i syms {} s.statement
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
  let run : TermElabM (List MVarId) := Tactic.run mv.mvarId! do
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
Something of type `ty` from the local context.

Vampire's logic assumes every sort is non-empty, and a refutation may use that: from
`∀ x, P x` and `∀ x, ¬P x` it derives `⊥`, which in Lean needs an inhabitant of the
domain. The generated file gets one from the `[Inhabited ι]` in its preamble; here the
goal's own context usually has one, and it is a term the user already had.
-/
def inhabitant (ty : Expr) : MetaM (Option Expr) := do
  for d in ← getLCtx do
    if d.isImplementationDetail then continue
    if ← isDefEq d.type ty then return some d.toExpr
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
  -- The variables `intro` will have bound by the time the instantiation lines run.
  let inScope : Std.HashSet Nat := s.vars.foldl (fun acc (v, _) => acc.insert v) {}
  -- A premise variable the unifier left alone but the conclusion does not bind: it
  -- needs a witness, which is where Vampire's non-empty-domain assumption shows up.
  let witnessFor (p : Step) : TermElabM (Nat → Option Term) := do
    let mut m : Std.HashMap Nat Term := {}
    for (v, sort) in p.vars do
      if inScope.contains v then continue
      let ty ← Replay.sortExpr i syms sort
      let some w ← inhabitant ty
        | throwError "vampire: step {s.number} needs an element of {ty} to instantiate \
            v{v} of a premise, and the goal's context has none; Vampire's logic assumes \
            every sort is non-empty and this refutation uses that"
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
      let witness ← witnessFor premises[k]!
      let args ← terms.mapM (termSyntax i syms witness)
      tacs := tacs.push (← instantiate (derived k) (hyp k) args)
    return tacs
  match s.handler with
  | .genericSubs | .genericNoSubs =>
    -- intros h0 … hₖ v… ; have i0 := h0 <args> ; … ; grind only […]
    let mut ids := (Array.range premises.size).map hyp
    for (v, _) in s.vars do ids := ids.push (mkIdent (varName v))
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
    if s.cnfCount != 1 then
      throwError "vampire: step {s.number} clausifies a formula into {s.cnfCount}         clauses; only the single-clause case is ported"
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| try simp only),
             ← `(tactic| prenexify at $h:ident <;> ac_nf0 <;> ac_nf0 at $h:ident <;>
                   try (first | assumption | trivial))]
  | .unusedPredDefRemoval =>
    return #[← `(tactic| intro $h:ident), ← `(tactic| simp only [$h:ident, imp_self, implies_true])]
  | .avatarContradiction =>
    return #[← `(tactic| intro $h:ident),
             ← `(tactic| try simp only [imp_false, imp_iff_not_or, not_not] at $h:ident),
             ← `(tactic| exact $h)]
  | .definitionUnfolding =>
    -- intros; instantiate the first premise; rewrite once with each defining equation,
    -- in the direction the recorded left-hand side says; grind.
    let mut ids := (Array.range premises.size).map hyp
    for (v, _) in s.vars do ids := ids.push (mkIdent (varName v))
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
  let concl ← stepType i syms s
  let mut ty := concl
  for p in premises.reverse do
    ty ← mkArrow (← stepType i syms p) ty
  let tacs ← script i syms s premises
  proveBy ty tacs m!"step {s.number} ({s.ruleName})"

/--
Replay the whole refutation, returning a proof of `False`.

The second loop of the generated file: each derived step is the lemma for it applied to
the proofs of its premises, and the last step is the empty clause.
-/
def replay (i : Interp) (r : Refutation) : TermElabM Expr := do
  let mut proofs : Std.HashMap Nat Expr := {}
  let mut byNumber : Std.HashMap Nat Step := {}
  let mut last : Option Expr := none
  for s in r.steps do
    byNumber := byNumber.insert s.number s
    if s.handler == .input then
      let some h := i.input s.number
        | throwError "vampire: no Lean hypothesis for input step {s.number}"
      proofs := proofs.insert s.number (← bridgeInput i r.symbols s h)
      last := proofs[s.number]?
    else
      let mut premises : Array Step := #[]
      for n in s.premises do
        let some p := byNumber[n]?
          | throwError "vampire: step {s.number} names premise {n}, which is not in               the exported proof"
        premises := premises.push p
      let lemma ← stepLemma i r.symbols s premises
      let mut args : Array Expr := #[]
      for n in s.premises do
        let some a := proofs[n]?
          | throwError "vampire: premise {n} of step {s.number} is unproved"
        args := args.push a
      let e := mkAppN lemma args
      proofs := proofs.insert s.number e
      last := some e
  let some e := last | throwError "vampire: the exported refutation is empty"
  return e

end Replay

end Vampire
