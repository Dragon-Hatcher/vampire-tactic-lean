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

/-- What a propositional clause says: the disjunction of what its names say. -/
private def satClauseStates (c : SatClause) : ReconstructM Expr := do
  return junction ``Or ``False (← c.literals.mapM namedFormula)

mutual

/--
A proof of what a propositional clause says.

A clause is either a first-order clause's propositional shadow, and then it says
what that clause says, up to the order of the names; or the solver derived it,
and then it follows from the clauses it was derived from by unit propagation:
supposing its own literals false, each clause in turn has all but one of its
literals false, so that one holds -- and the last has none left.
-/
private partial def satClause (origins : Std.HashMap UInt32 (Expr × Expr))
    (known : Std.HashMap String Expr) (c : SatClause) : ReconstructM Expr := do
  let target ← satClauseStates c
  if let some origin := c.origin? then
    let some (proof, stated) := origins[origin.number]?
      | throwError "the propositional shadow of step {origin.number}, which is \
        not among the refutation's premises"
    let place := placeLiteral target
    return ← elimParts stated 0 (fun _ h => place h) proof
  -- Suppose the clause fails; then each of its literals is false, which is to
  -- say that each of their negations holds.
  let contradiction ← withLocalDeclD `n (mkApp (mkConst ``Not) target) fun n => do
    let mut known := known
    for (name, i) in c.literals.zipIdx do
      let (flipped, says) ← flipName name
      let body ← namedFormula name
      let refuted ← withLocalDeclD `d body fun d => do
        mkLambdaFVars #[d] (mkApp n (← injectPart ``Or target i d))
      known := known.insert (flippedName name)
        (← mkAppM ``Iff.mpr #[says, refuted])
    mkLambdaFVars #[n] (← propagate origins known c.premises 0)
  mkAppM ``Iff.mp #[← mkAppOptM ``Classical.not_not #[some target], contradiction]

/--
`False`, by unit propagation through the clauses a derived clause was derived
from: each of them has all but one of its literals already false, and the last
of them has none left.
-/
private partial def propagate (origins : Std.HashMap UInt32 (Expr × Expr))
    (known : Std.HashMap String Expr) (premises : Array SatClause) (i : Nat) :
    ReconstructM Expr := do
  let some premise := premises[i]?
    | throwError "the clauses a propositional step was derived from left \
      nothing to contradict"
  let names := premise.literals
  let proof ← satClause origins known premise
  let stated ← satClauseStates premise
  elimParts stated 0 (fun j h => do
    let some name := names[j]? | throwError "missing literal"
    match known[flippedName name]? with
    | some negated =>
      -- The literal is already false, so this case cannot arise. Which of the
      -- two is the negation is up to which of the two names carries it.
      let (positive, negation) :=
        if (← instantiateMVars (← inferType h)).not?.isSome then (negated, h)
        else (h, negated)
      mkAppOptM ``absurd
        #[some (← inferType positive), some (mkConst ``False), some positive,
          some negation]
    | none => propagate origins (known.insert name h) premises (i + 1)) proof

end

/--
`avatar_refutation`: the propositional problem the names were handed to has no
model, so what they stand for cannot all hold.
-/
def refutation (step : Step) : ReconstructM Expr := do
  let some root := step.unit.satPremise?
    | throwError "an avatar refutation without the propositional clause it \
      stands on"
  let mut origins : Std.HashMap UInt32 (Expr × Expr) := {}
  for (parent, premise) in step.unit.parents.zip step.premises do
    origins := origins.insert parent.number premise
  satClause origins {} root

end Vampire.Reconstruct.Avatar
