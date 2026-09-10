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

/-- `Nonempty α`, which Hilbert choice needs to pick a witness at all. -/
private def nonempty (τ : Expr) : ReconstructM Expr := do
  let goal := mkApp (mkConst ``Nonempty [(← getLevel τ)]) τ
  match ← trySynthInstance goal with
  | .some inst => return inst
  | _ =>
    throwError "cannot skolemise over{indentExpr τ}\nwithout `Nonempty` for it"

/--
`(∃ v, p v) ↔ p (Classical.epsilon p)`, with the chosen witness.

Forwards is `epsilon_spec_aux`, which is already the implication and takes the
`Nonempty` instance explicitly, so the witness it speaks of is the one built
here. Backwards the witness is that very term.
-/
private def epsilon (τ p : Expr) : ReconstructM (Expr × Expr) := do
  let inst ← nonempty τ
  let witness := mkApp3 (mkConst ``Classical.epsilon [← getLevel τ]) τ inst p
  let forward ← mkAppOptM ``Classical.epsilon_spec_aux #[some τ, some inst, some p]
  -- `p` has to be given: `h`'s type is beta-reduced, so it cannot be recovered
  -- from the arguments by unification.
  let backward ← withLocalDeclD `h (p.beta #[witness]) fun h => do
    mkLambdaFVars #[h]
      (← mkAppOptM ``Exists.intro #[some τ, some p, some witness, some h])
  return (witness, ← mkAppM ``Iff.intro #[forward, backward])

/--
Skolemises a formula, returning the result and a proof that the original is
equivalent to it.

`skolems` is what the step recorded: which term replaced each existential
variable. Binding the variable to the chosen witness makes the body rebuild as
the skolemised one, and registering the symbol as a function of the arguments
vampire gave it makes the step's own conclusion rebuild to the same thing.
-/
partial def formula (sorts : Array (UInt32 × String)) (skolems : Std.HashMap UInt32 Term)
    (vars : Vars) (f : Formula) : ReconstructM (Expr × Expr) := do
  let connective ← match f.connective with
    | .ok c => pure c
    | .error e => throwError "{e}"
  match connective with
  | .and => congrJunction ``And ``True ``and_congr
  | .or => congrJunction ``Or ``False ``or_congr
  | .«forall» =>
    let bound := boundVars f
    withVars bound vars fun vars' locals => do
      let some body := f.subformulas[0]? | throwError "quantifier without a body"
      let (skolemised, proof) ← formula sorts skolems vars' body
      let mut result := skolemised
      let mut congr := proof
      -- One `forall_congr'` per binder, innermost first.
      for x in locals.reverse do
        congr ← mkAppM ``forall_congr' #[← mkLambdaFVars #[x] congr]
        result ← mkForallFVars #[x] result
      return (result, congr)
  | .«exists» =>
    let some body := f.subformulas[0]? | throwError "quantifier without a body"
    peel (boundVars f).toList vars body
  | _ =>
    -- Nothing below is skolemised, so the formula stands as it is.
    let rebuilt ← Reconstruct.formula sorts vars f
    return (rebuilt, ← mkAppOptM ``Iff.refl #[some rebuilt])
where
  boundVars (f : Formula) : Array (UInt32 × String) :=
    f.boundVars.filterMap fun v => (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)

  /-- An n-ary junction, congruent argument by argument. -/
  congrJunction (fn unit lemma : Name) : ReconstructM (Expr × Expr) := do
    let parts ← f.subformulas.mapM (formula sorts skolems vars)
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
    | [] => formula sorts skolems vars body
    | (v, sortName) :: rest => do
      let τ ← sortType sortName
      -- The predicate the witness is chosen from, as a function of `v`.
      let p ← withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
        let (inner, _) ← peel rest (vars.insert v x) body
        mkLambdaFVars #[x] inner
      let (witness, choice) ← epsilon τ p
      -- Register the symbol under the arguments vampire gave it, so that the
      -- step's conclusion rebuilds to the same term.
      match skolems[v]? with
      | none => throwError "no skolem recorded for the existential X{v}"
      | some skolemTerm =>
        let some symbol := skolemTerm.symbol?
          | throwError "the skolem term for X{v} has no symbol"
        let args ← skolemTerm.args.mapM fun arg => do
          unless arg.isVar do
            throwError "skolem {symbol.name} was applied to {arg}, not a variable"
          let some x := vars[arg.var]?
            | throwError "variable X{arg.var} has no recorded sort"
          return x
        let definition ← mkLambdaFVars args witness
        modify fun s =>
          { s with introduced := s.introduced.insert symbol.name definition }
      let (skolemised, rest') ← peel rest (vars.insert v witness) body
      -- (∃ v, p v) ↔ p ε ↔ skolemised
      return (skolemised, ← mkAppM ``Iff.trans #[choice, rest'])

/-- `skolemize`: drops the existentials of a formula for chosen witnesses. -/
def skolemize (step : Step) : ReconstructM Expr := do
  let #[(premise, _)] := step.premises
    | throwError "skolemize should have one premise, got {step.premises.size}"
  let some u := step.unit.parents[0]?
    | throwError "skolemize without a premise"
  let some f := u.formula?
    | throwError "skolemize should be given a formula"
  let skolems := Std.HashMap.ofList step.unit.skolems.toList
  let (_, iff) ← formula u.varSorts skolems {} f
  let proof ← mkAppM ``Iff.mp #[iff, premise]
  return proof

end Vampire.Reconstruct.Skolem
