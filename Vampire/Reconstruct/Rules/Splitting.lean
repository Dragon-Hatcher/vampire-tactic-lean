import Vampire.Reconstruct.Basic

/-!
General splitting.

`GeneralSplitting` takes a clause and a variable of it that few of its literals
share, and splits the clause in two: the literals mentioning that variable, and
the rest. A fresh predicate over the variables the two halves share stands
between them -- it is asserted in the first half and denied in the second -- so
that the variable is confined to one clause.

The name means that the first half fails: `p(x⃗)` says there is a value of the
split variable for which none of that half's literals holds. Read that way, the
first half is a tautology, and the second follows from the clause it came from.
-/

namespace Vampire.Reconstruct.Splitting

open Lean Meta

/--
The name a general splitting introduced, the variables it is applied to, and
the literals it stands against.
-/
private def componentOf (u : Vampire.Unit) :
    ReconstructM (String × Array UInt32 × Array Literal) := do
  let some clause := u.clause?
    | throwError "a general splitting component is not a clause"
  let mut name := none
  let mut arguments := #[]
  let mut rest := #[]
  for l in clause.literals do
    let some symbol := l.symbol?
      | throwError "a literal with an unknown predicate"
    if name.isNone && !(← isGoalSymbol symbol.name) && l.polarity then
      name := some symbol.name
      arguments ← l.args.mapM fun arg => do
        unless arg.isVar do
          throwError "the name `{symbol.name}` is applied to {arg}, not a variable"
        return arg.var
    else
      rest := rest.push l
  let some introduced := name
    | throwError "a general splitting component introduces no name"
  return (introduced, arguments, rest)

/-- The variables of `u` that are not among `arguments`, with their sorts. -/
private def splitVars (u : Vampire.Unit) (arguments : Array UInt32) :
    Array (UInt32 × String) :=
  u.varSorts.filter fun (v, _) => !arguments.contains v

/--
Binds the name a general splitting introduced: that the half it was split from
fails at some value of the split variable.
-/
def register (u : Vampire.Unit) : ReconstructM PUnit := do
  let (name, arguments, rest) ← componentOf u
  if ← resolvesSymbol name then return
  let sorts := u.varSorts
  let bound := arguments.filterMap fun v =>
    (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)
  let definition ← withVars bound {} fun vars locals => do
    let inner ← withVars (splitVars u arguments) vars fun vars split => do
      mkForallFVars split (junction ``Or ``False (← rest.mapM (Reconstruct.literal vars)))
    mkLambdaFVars locals (mkApp (mkConst ``Not) inner)
  modify fun s => { s with introduced := s.introduced.insert name definition }

/--
`general_splitting_component`: the half a general splitting kept, under the
name standing for its failing.

Either that half holds of the split variable, or it fails of it -- which is
what the name says.
-/
def component (step : Step) : ReconstructM Expr := do
  register step.unit
  let (_, arguments, rest) ← componentOf step.unit
  let some clause := step.unit.clause?
    | throwError "a general splitting component is not a clause"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs _target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    let parts ← clause.literals.mapM (Reconstruct.literal vars)
    let halves ← rest.mapM (Reconstruct.literal vars)
    -- What the name says, at the variables it is applied to.
    let quantified ← withVars (splitVars step.unit arguments) vars fun inner split => do
      mkForallFVars split
        (junction ``Or ``False (← rest.mapM (Reconstruct.literal inner)))
    let held ← withLocalDeclD `h quantified fun h => do
      -- The half holds of the split variable in particular.
      let args ← (splitVars step.unit arguments).mapM fun (v, sortName) => do
        match vars[v]? with
        | some x => pure x
        | none => someElement (← sortType sortName)
      mkLambdaFVars #[h]
        (← elimGiven halves (fun j hj => do
            let some part := halves[j]? | throwError "a missing literal"
            let mut found := none
            for (whole, i) in parts.zipIdx do
              if ← isDefEq whole part then
                found := some i
                break
            let some i := found | throwError "a literal of the half is not one \
              of the clause's"
            injectGiven parts i hj)
          (mkAppN h args))
    let failed ← withLocalDeclD `h (mkApp (mkConst ``Not) quantified) fun h => do
      -- Which is what the name stands for.
      let mut found := none
      for (part, i) in parts.zipIdx do
        if ← isDefEq part (mkApp (mkConst ``Not) quantified) then
          found := some i
          break
      let some i := found
        | throwError "the clause does not hold the name the splitting introduced"
      mkLambdaFVars #[h] (← injectGiven parts i h)
    mkLambdaFVars xs
      (← mkAppM ``Or.elim
        #[← mkAppOptM ``Classical.em #[some quantified], held, failed])

/--
`general_splitting`: the other half, under the denial of the name.

Either the half the name stands against holds of every value of the split
variable -- which is what denying the name says -- or there is a value of it
at which none of that half's literals holds, and the clause then gives the
other half.
-/
def general (step : Step) : ReconstructM Expr := do
  let #[(clauseProof, _), _] := step.premises
    | throwError "a general splitting should have two premises, got \
      {step.premises.size}"
  let #[parent, component] := step.unit.parents
    | throwError "a general splitting should have two premises"
  let some source := parent.clause?
    | throwError "a general splitting is not given a clause"
  let some conclusion := step.unit.clause?
    | throwError "a general splitting is not a clause"
  let (name, arguments, rest) ← componentOf component
  let split := splitVars component arguments
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    let parts ← conclusion.literals.mapM (Reconstruct.literal vars)
    -- What the name says, at the variables it is applied to.
    let quantified ← withVars split vars fun inner bound => do
      mkForallFVars bound
        (junction ``Or ``False (← rest.mapM (Reconstruct.literal inner)))
    -- The conclusion denies the name; the rest of it is the other half.
    let mut denied := none
    for (l, j) in conclusion.literals.zipIdx do
      if let some symbol := l.symbol? then
        if symbol.name == name && !l.polarity then
          denied := some j
          break
    let some i := denied
      | throwError "the conclusion does not deny the name `{name}`"
    -- The half holds throughout, which is the denial of the name.
    let held ← withLocalDeclD `h quantified fun h => do
      mkLambdaFVars #[h] (← injectGiven parts i
        (← mkAppM ``Iff.mpr
          #[← mkAppOptM ``Classical.not_not #[some quantified], h]))
    -- Or it fails somewhere, and the clause gives the other half there.
    let failed ← withLocalDeclD `h (mkApp (mkConst ``Not) quantified) fun h => do
      let mut against := h
      let mut witnesses : Vars := {}
      for (v, _) in split do
        let (witness, refuted) ← witnessAgainst against
        against := refuted
        witnesses := witnesses.insert v witness
      -- Every literal of the half fails at those witnesses.
      let mut halves := vars
      for (v, witness) in witnesses do
        halves := halves.insert v witness
      let refutedParts ← rest.mapM (Reconstruct.literal halves)
      let mut negations : Array (Expr × Expr) := #[]
      for (part, j) in refutedParts.zipIdx do
        let negation ← withLocalDeclD `l part fun l => do
          mkLambdaFVars #[l] (mkApp against (← injectGiven refutedParts j l))
        negations := negations.push (part, negation)
      -- The clause at those witnesses says one of its literals holds, and the
      -- ones of that half do not.
      let mut args := #[]
      for (v, sortName) in parent.varSorts do
        match halves[v]? with
        | some x => args := args.push x
        | none => args := args.push (← someElement (← sortType sortName))
      let sourceParts ← source.literals.mapM (Reconstruct.literal halves)
      mkLambdaFVars #[h] (← elimGiven sourceParts (fun _ hl => do
        let says ← instantiateMVars (← inferType hl)
        for (part, negation) in negations do
          if ← isDefEq part says then
            -- That literal fails at the witnesses, so this case cannot arise.
            return ← mkAppOptM ``False.elim
              #[some target, some (mkApp negation hl)]
        for (part, j) in parts.zipIdx do
          if ← isDefEq part says then
            return ← injectGiven parts j hl
        throwError "the literal{indentExpr says}\nis neither of the half the \
          name stands against nor of the conclusion")
        (mkAppN clauseProof args))
    mkLambdaFVars xs
      (← mkAppM ``Or.elim
        #[← mkAppOptM ``Classical.em #[some quantified], held, failed])

end Vampire.Reconstruct.Splitting
