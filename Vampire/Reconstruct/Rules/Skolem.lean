import Vampire.Reconstruct.Basic

/-!
Skolemisation.

Vampire skolemises a formula in NNF, not a prenex one, so an existential can
sit anywhere -- under a disjunction, where no witness is available in the other
branch. `Exists.elim` would therefore have to hold the rest of the proof inside
its continuation. Hilbert choice avoids that: it yields a term, so the skolem
symbol can simply be bound to it and nothing else has to move.

It also makes the walk uniform. `(∃ v, p v) ↔ p (ε p)` holds in *both*
directions, so the original formula and its skolemisation are equivalent and
can be related by plain congruence, with no need to ask whether a position is
positive.
-/

namespace Vampire.Reconstruct.Skolem

open Lean Meta

/--
`p ↔ c` for two rebuilt literals.

Substituting into a literal makes vampire build a fresh one, and an equality is
oriented by its own term order, so the conclusion can state an equality the
other way round from the premise.
-/
private partial def literalIff (p c : Expr) : ReconstructM Expr := do
  if ← isDefEq p c then
    return ← mkAppOptM ``Iff.refl #[some p]
  if p.isAppOfArity ``Not 1 && c.isAppOfArity ``Not 1 then
    return ← mkAppM ``not_congr #[← literalIff p.appArg! c.appArg!]
  if let (some (α, a, b), some (_, a', b')) := (p.eq?, c.eq?) then
    if (← isDefEq a b') && (← isDefEq b a') then
      return ← mkAppOptM ``eq_comm #[some α, some a, some b]
  throwError "cannot relate{indentExpr p}\nto{indentExpr c}"

/--
Walks a skolemisation step, premise beside conclusion, returning the
conclusion's proposition and a proof that the premise is equivalent to it.

Skolemisation is structural -- it substitutes into literals, keeps the
junctions and universals, and drops the existentials in place -- so the two
formulas run in step, and taking the conclusion's shape as the target means
that a reoriented equality is dealt with where it appears.

`skolems` is what the step recorded: which term replaced each existential
variable. Binding the variable to the chosen witness rebuilds the body as the
skolemised one, and registering the symbol as a function of the arguments
vampire gave it makes the conclusion rebuild to the same term.
-/
partial def walk (sorts : Array (UInt32 × String)) (skolems : Std.HashMap UInt32 Term)
    (vars : Vars) (premise conclusion : Formula) : ReconstructM (Expr × Expr) := do
  match ← connectiveOf premise with
  | .and => congrJunction ``And ``True ``and_congr
  | .or => congrJunction ``Or ``False ``or_congr
  | .«forall» =>
    unless (← connectiveOf conclusion) matches .«forall» do
      throwError "skolemisation should keep a universal quantifier"
    let some premiseBody := premise.subformulas[0]?
      | throwError "quantifier without a body"
    let some conclusionBody := conclusion.subformulas[0]?
      | throwError "quantifier without a body"
    withVars (boundVars premise) vars fun vars' locals => do
      let (prop, congr) ← walk sorts skolems vars' premiseBody conclusionBody
      let mut prop := prop
      let mut congr := congr
      -- One `forall_congr'` per binder, innermost first.
      for x in locals.reverse do
        congr ← mkAppM ``forall_congr' #[← mkLambdaFVars #[x] congr]
        prop ← mkForallFVars #[x] prop
      return (prop, congr)
  | .«exists» =>
    let some premiseBody := premise.subformulas[0]?
      | throwError "quantifier without a body"
    peel (boundVars premise).toList vars premiseBody
  | _ =>
    -- A literal, or a constant: rebuilt on both sides and related directly.
    let p ← Reconstruct.formula sorts vars premise
    let c ← Reconstruct.formula sorts vars conclusion
    return (c, ← literalIff p c)
where
  boundVars (f : Formula) : Array (UInt32 × String) :=
    f.boundVars.filterMap fun v => (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)

  /-- An n-ary junction, congruent argument by argument. -/
  congrJunction (fn unit lemma : Name) : ReconstructM (Expr × Expr) := do
    unless (← connectiveOf conclusion) matches .and | .or do
      throwError "skolemisation should keep a junction"
    unless premise.subformulas.size == conclusion.subformulas.size do
      throwError "skolemisation changed a junction's size"
    let parts ← premise.subformulas.zipIdx.mapM fun (g, i) => do
      let some h := conclusion.subformulas[i]? | throwError "missing subformula"
      walk sorts skolems vars g h
    if parts.isEmpty then
      let e := mkConst unit
      return (e, ← mkAppOptM ``Iff.refl #[some e])
    let (lastProp, lastProof) := parts.back!
    let mut prop := lastProp
    let mut proof := lastProof
    for (p, pf) in parts.pop.reverse do
      proof ← mkAppM lemma #[pf, proof]
      prop := mkApp2 (mkConst fn) p prop
    return (prop, proof)

  /-- Takes the existential variables of a block one at a time. -/
  peel (bound : List (UInt32 × String)) (vars : Vars) (body : Formula) :
      ReconstructM (Expr × Expr) := do
    match bound with
    | [] => walk sorts skolems vars body conclusion
    | (v, sortName) :: rest => do
      let τ ← sortType sortName
      -- The predicate the witness is chosen from, as a function of `v`.
      let p ← withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
        mkLambdaFVars #[x] (← existsProp sorts rest (vars.insert v x) body)
      let (witness, choice) ← epsilon τ p
      registerSkolem skolems vars v witness
      let (prop, rest') ← peel rest (vars.insert v witness) body
      -- (∃ v, p v) ↔ p ε ↔ prop
      return (prop, ← mkAppM ``Iff.trans #[choice, rest'])

/-- `skolemize`: drops the existentials of a formula for chosen witnesses. -/
def skolemize (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, _)] := step.premises
    | throwError "skolemize should have one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "skolemize without a premise"
  let some premise := parent.formula?
    | throwError "skolemize should be given a formula"
  let some conclusion := step.unit.formula?
    | throwError "skolemize should state a formula"
  let skolems := Std.HashMap.ofList step.unit.skolems.toList
  -- The conclusion's variables are the premise's, so its sorts cover both.
  let sorts := parent.varSorts ++ step.unit.varSorts
  let (_, iff) ← walk sorts skolems {} premise conclusion
  mkAppM ``Iff.mp #[iff, premiseProof]

end Vampire.Reconstruct.Skolem
