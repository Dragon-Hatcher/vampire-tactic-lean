import Vampire.Reconstruct.Basic

/-!
Splitting.

`Splitter` breaks a clause into components with no variables in common, names
each component with a propositional variable, and hands the disjunction of the
names to a SAT solver. Work then goes on under an assignment to those names: a
clause derived while the name `n` is assumed carries `n` among its assumptions,
and means no more than that its literals follow from what is assumed.

A name means what its definition says it does, and `avatar_definition` binds it
to that, so a name and the component it stands for are the same thing here.
That is what makes the rules below go through: what a step assumes it can also
use.
-/

namespace Vampire.Reconstruct.Avatar

open Lean Meta

/--
`avatar_component`: the component a name stands for, under that name.

The clause is the component itself, and the name assumed is the definition of
the component, so there is nothing to do but read one as the other.
-/
def component (step : Step) : ReconstructM Expr := do
  let #[(name, assumption)] := step.assumed
    | throwError "an avatar component clause should hold under one name, got \
      {step.assumed.size}"
  let #[(_, _)] := step.premises
    | throwError "an avatar component clause should have one premise, got \
      {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "an avatar component clause without its definition"
  let core ← step.conclusion
  if ← isDefEq (← inferType assumption) core then
    return assumption
  -- The definition states the component as a formula, which `Formula::fromClause`
  -- builds by pushing the clause's literals onto a list, so the two disagree
  -- over the order of the literals and over which variable is bound where.
  -- Both speak of vampire's variables, though, so the binders can be paired by
  -- the variable each stands for, and the literals found by what they say.
  let some definition := parent.formula?
    | throwError "an avatar component clause's definition states no formula"
  let some component := (← definition.subformulas.filterM fun g => do
      return !((← connectiveOf g) matches .name))[0]?
    | throwError "an avatar definition states no component"
  let bound :=
    if (← connectiveOf component) matches .«forall» then component.boundVars
    else #[]
  forallBoundedTelescope core (some step.unit.varSorts.size) fun xs target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    let args ← bound.mapM fun v => do
      let some x := vars[v]?
        | throwError "the definition of `{name}` binds X{v}, which the \
          component does not mention"
      return x
    let instance_ := mkAppN assumption args
    let stated ← instantiateForall (← inferType assumption) args
    let place := placeLiteral target
    mkLambdaFVars xs (← elimParts stated 0 (fun _ h => place h) instance_)

/--
`avatar_contradiction_clause`: the names a refuted clause held under cannot all
be assumed at once.

The premise derived the empty clause from them, so at least one of them fails,
which is what the disjunction of their negations says.
-/
def contradictionClause (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, _)] := step.premises
    | throwError "an avatar contradiction clause should have one premise, got \
      {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "an avatar contradiction clause without a premise"
  let target ← step.conclusion
  let parts := junctionParts ``Or target
  -- Were every one of those names to fail, nothing would follow from the
  -- premise; so suppose the disjunction fails and read each name off that.
  let contradiction ← withLocalDeclD `h (mkApp (mkConst ``Not) target) fun h => do
    let mut proof := premiseProof
    for name in parent.splits do
      let (flipped, says) ← flipName name
      let mut found := none
      for (part, i) in parts.zipIdx do
        if ← isDefEq part flipped then
          found := some i
          break
      let some i := found
        | throwError "the negation of `{name}`{indentExpr flipped}\nis not \
          among{indentExpr target}"
      let refuted ← withLocalDeclD `d flipped fun d => do
        mkLambdaFVars #[d] (mkApp h (← injectPart ``Or target i d))
      let body ← namedFormula name
      proof := mkApp proof
        (← mkAppM ``Iff.mp
          #[← mkAppOptM ``Classical.not_not #[some body],
            ← mkAppM ``Iff.mp #[← mkAppM ``not_congr #[says], refuted]])
    mkLambdaFVars #[h] proof
  mkAppM ``Iff.mp
    #[← mkAppOptM ``Classical.not_not #[some target], contradiction]

end Vampire.Reconstruct.Avatar
