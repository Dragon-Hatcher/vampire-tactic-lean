import VampireReplay.Reconstruct.Carry
import VampireReplay.Reconstruct.Equiv

namespace Vampire.Reconstruct

open Lean Meta

/--
Reads a step the way that step means it: polarity flipping divides the proof
into the steps before it and the steps after it, which mean the opposite by the
predicates it flipped.
-/
def reading (u : Vampire.Unit) (k : ReconstructM α) : ReconstructM α :=
  withReader (fun c =>
    { c with flipping := c.flipped != 0 && u.number >= c.flipped }) k

/--
The Lean proposition a step asserts. A clause is implicitly universally
quantified over its variables; a formula carries its own binders.

Splitting works on a clause under the assumption that the components it split
off are false, and writes those assumptions on the clause. So such a clause
says no more than that its literals follow from the names it holds under.
-/
private def buildConclusion (u : Vampire.Unit) : ReconstructM Expr := do
  let sorts := u.varSorts
  let stated ←
    match u.clause?, u.formula? with
    | some c, _ =>
      withVars sorts {} fun vars locals => do
        mkForallFVars locals (← clause vars c)
    | _, some f => formula sorts {} f
    | _, _ => throwError "step {u.number} is neither a clause nor a formula"
  let mut conclusion := stated
  for name in u.splits.reverse do
    conclusion ← mkArrow (← namedFormula name) conclusion
  return conclusion

/--
The proposition a step asserts, rebuilt once.

A rule that introduces a name has to bind it before this is called, which is
why it is taken on demand rather than handed to the rule ready-made.
-/
def conclusionOf (u : Vampire.Unit) : ReconstructM Expr := do
  if let some c := (← get).conclusions[u.number]? then
    return c
  let c ← reading u (buildConclusion u)
  modify fun s => { s with conclusions := s.conclusions.insert u.number c }
  return c

/--
Instantiates a premise at what the inference bound its variables to.

A variable the inference left alone is bound to itself, and one the conclusion
did not keep stands for nothing in particular, so `vars` has to cover the
premise's variables before this is called.
-/
def instantiateAt (parent : Vampire.Unit) (use : PremiseUse) (vars : Vars)
    (proof stated : Expr) : ReconstructM (Expr × Expr) := do
  let bound := Std.HashMap.ofList use.bindings.toList
  let mut args := #[]
  for (v, sortName) in parent.varSorts do
    match bound[v]? with
    | some image => args := args.push (← term vars image)
    | none => args := args.push (← someElement (← sortType sortName))
  return (mkAppN proof args, ← sharedClause (← instantiateForall stated args))

/--
Something of the right sort for each of a premise's variables the conclusion
did not keep, and for each of @b bound.

Such a variable is instantiated at an arbitrary element, and both premises have
to agree on which: a substitution recorded against the premise can mention it.

@b bound is the step's `boundVarSorts`: a unifier's image can mention a
variable that neither the premise nor the conclusion has, and reading that term
back needs its sort too. The conclusion does not speak of it, so which element
is taken for it cannot matter either.
-/
def coverVars (parent : Vampire.Unit) (vars : Vars)
    (bound : Array (UInt32 × String) := #[]) : ReconstructM Vars := do
  let mut vars := vars
  for (v, sortName) in parent.varSorts ++ bound do
    unless vars.contains v do
      vars := vars.insert v (← someElement (← sortType sortName))
  return vars

/--
What a premise is instantiated at: for each of its variables, what `vars` has
for it, and otherwise something of its sort -- a variable the conclusion did
not keep stands for nothing in particular.
-/
def argsFor (parent : Vampire.Unit) (vars : Vars) : ReconstructM (Array Expr) :=
  parent.varSorts.mapM fun (v, sortName) => do
    match vars[v]? with
    | some x => pure x
    | none => someElement (← sortType sortName)

/-- A step of vampire's proof, with everything needed to justify it. -/
structure Step where
  unit : Vampire.Unit
  rule : InferenceRule
  /-- The premises: a proof of each, paired with what it proves. -/
  premises : Array (Expr × Expr)
  /--
  The names the step holds under, each with the hypothesis standing for it.

  Discharged into the conclusion by the framework, so a rule only reads these
  where what it does depends on them, as splitting's own rules do.
  -/
  assumed : Array (String × Expr)

/--
What a step concludes, without the assumptions it holds under: what a rule has
to prove, the framework having put those assumptions in scope.
-/
def coreOf (u : Vampire.Unit) : ReconstructM Expr := do
  let mut core ← conclusionOf u
  for name in u.splits do
    unless core.isForall do
      throwError "step {u.number} holds under `{name}` but states{indentExpr core}"
    core := core.bindingBody!
  return core

/-- The step's conclusion, as a Lean proposition. -/
def Step.conclusion (step : Step) : ReconstructM Expr := coreOf step.unit

/--
`k` under the step's own variables: the locals its conclusion binds, what each
of vampire's variables stands for, and what the conclusion says of them. What
`k` proves is abstracted over those locals again.
-/
def Step.underVars (step : Step) (k : Vars → Expr → ReconstructM Expr) :
    ReconstructM Expr := do
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    mkLambdaFVars xs (← k vars target)

/--
How a step used the premise in position `i` among its parents.

A premise can be used twice -- an inference can take a clause as both of its
premises -- so a use is found by position rather than by which premise it is,
counting the uses of that premise in the order they were recorded.
-/
def Step.useAt? (step : Step) (i : Nat) : Option PremiseUse := do
  let parent ← step.unit.parents[i]?
  let earlier := (step.unit.parents.extract 0 i).countP (·.number == parent.number)
  let uses := step.unit.premiseUses.filter (·.premise == parent.number)
  uses[earlier]?

/-- `useAt?`, for a rule that cannot go on without the use. -/
def Step.useAt (step : Step) (i : Nat) : ReconstructM PremiseUse := do
  let some use := step.useAt? i
    | throwError "step {step.unit.number} did not record how it used its \
      premise in position {i}"
  return use

/--
Where the literals of the premise in position `i` went in the conclusion, as
the worker recorded it under the use `useAt i` reads: `none` where nothing was.
-/
def Step.placedAt (step : Step) (i : Nat) : Option Placement := do
  let parent ← step.unit.parents[i]?
  let earlier := (step.unit.parents.extract 0 i).countP (·.number == parent.number)
  step.unit.placement? i earlier

/-- The conclusion's literals, `target` being what it says, to place into. -/
def Step.into (step : Step) (target : Expr) : Into :=
  Into.of target ((step.unit.clause?.map (·.size)).getD 0)

/--
Whether the term a use recorded is the left side of the equation it acted on,
rather than the right.

The use records the side as the premise states it, and vampire shares its
terms, so it is one of the equation's two arguments by index: which side the
inference used is read off rather than found by unifying either side with it.
-/
def recordedSideIsLeft (parent : Vampire.Unit) (use : PremiseUse) (literal : Nat) :
    ReconstructM Bool := do
  let some side := use.term
    | throwError "step {parent.number} was used without recording which side of \
        its equation"
  let some clause := parent.clause?
    | throwError "the equation used from step {parent.number} is not a clause"
  let some l := clause.literals[literal]?
    | throwError "step {parent.number} has no literal {literal}"
  let #[lhs, rhs] := l.args
    | throwError "the literal used from step {parent.number} is not an equation"
  if lhs == side then return true
  if rhs == side then return false
  throwError "the term recorded against step {parent.number}, {side}, is neither \
    side of {l}"

/--
A step whose conclusion restates its premise's literals, whatever it did to
them.

The literals are taken as vampire has them rather than found by taking the
clause apart: a literal naming a subformula stands for a whole formula, and the
disjuncts of what it rebuilds to are not literals of the clause.
-/
def relateLiterals (step : Step) (parent : Vampire.Unit)
    (premiseProof premiseStated : Expr) : ReconstructM Expr := do
  let some source := parent.clause?
    | -- These rules run over formulas too, before clausification, and there a
      -- formula's shape is what it says.
      return mkApp (← implies (← instantiateMVars premiseStated)
        (← step.conclusion)) premiseProof
  let some conclusion := step.unit.clause?
    | return mkApp (← implies (← instantiateMVars premiseStated)
        (← step.conclusion)) premiseProof
  step.underVars fun kept target => do
    -- Dropping a literal can drop the last occurrence of a variable with it.
    let vars ← coverVars parent kept step.unit.boundVarSorts
    let args ← argsFor parent vars
    -- The premise's literals are read as the premise means them: polarity
    -- flipping divides the proof, and this step can be the line itself.
    let sourceParts ← reading parent (source.literals.mapM (literal vars))
    let targetParts ← conclusion.literals.mapM (Reconstruct.literal vars)
    -- As in `placeLiteral`: a literal is looked for as it stands before the
    -- other ways of stating it are built, which for a clause of a few hundred
    -- literals is the whole cost of the step.
    let targetSuffix := suffixJunctions ``Or ``False targetParts
    let placeIn (chain candidate : Expr) : ReconstructM (Option Expr) := do
      let (parts, suffix) :=
        if chain == target then (targetParts, targetSuffix)
        else
          let parts := junctionParts ``Or chain
          (parts, suffixJunctions ``Or ``False parts)
      let stated ← instantiateMVars (← inferType candidate)
      if let some i := parts.findIdx? (· == stated) then
        return some (← injectGiven parts i candidate (suffix? := some suffix))
      for (part, i) in parts.zipIdx do
        if ← isDefEq part stated then
          return some (← injectGiven parts i candidate (suffix? := some suffix))
      return none
    -- Every literal the step kept is one of the conclusion's; one it dropped
    -- has to be refutable on its own, as `t ≠ t` is.
    let stating (candidate : Expr) : ReconstructM Expr := do
      instantiateMVars (← inferType candidate)
    -- A literal the clause repeats is left where it is until its last
    -- occurrence, so that the earlier ones still have it to be placed at.
    let recurs := sourceParts.mapIdx fun i part =>
      (sourceParts.extract (i + 1) sourceParts.size).contains part
    -- Where the worker recorded each literal went, which is where it goes;
    -- one it did not is looked for.
    let placed := (step.unit.parents.findIdx? (·.number == parent.number)).bind
      step.placedAt
    let into := step.into target
    let inStep : Nat → Nat → Expr → Expr → ReconstructM (Option Expr) := fun i j h t => do
      if recurs[i]! then return none
      if let some placed := placed then
        if let some (some (k, flipped)) := placed[i]? then
          unless k == j do return none
          if flipped then return ← flipEquality h else return some h
      for candidate in #[h] ++ (← doubleNegations h) ++ (← flipEquality h).toArray do
        if ← isDefEq (← stating candidate) t then
          return some candidate
      return none
    let accountedFor (h rest : Expr) : ReconstructM (Option Expr) := do
      let stated ← stating h
      for candidate in #[h] ++ (← doubleNegations h) ++ (← flipEquality h).toArray do
        if let some placed ← placeIn rest candidate then
          return some placed
      if let some inner := asNegation stated then
        if let some (_, lhs, rhs) := inner.eq? then
          if ← isDefEq lhs rhs then
            return some (← mkAppOptM ``absurd
              #[some inner, some rest, some (← mkEqRefl lhs), some h])
      if stated.isConstOf ``False then
        return some (← mkAppOptM ``False.elim #[some rest, some h])
      return none
    -- The literals usually run in step, and then the clause is carried across
    -- following the shape of both rather than put back a literal at a time.
    let whole : Nat → Nat → Expr → Expr → ReconstructM (Option Expr) :=
      fun i j h rest => do
        if let some placed := placed then
          if let some done ← placeAt into placed i j h then return some done
        accountedFor h rest
    if let some carried ←
        carrying (junction ``Or ``False sourceParts) target 0 0 inStep whole then
      return mkApp carried (mkAppN premiseProof args)
    let body ← elimGiven sourceParts (fun i h => do
      if let some placed := placed then
        if let some done ← placeAt into placed i 0 h then return done
      match ← accountedFor h target with
      | some placed => return placed
      | none =>
        throwError "the literal{indentExpr (← stating h)}\nis neither among\
          {indentExpr target}\nnor refutable on its own")
      (mkAppN premiseProof args)
    pure body

/--
A rule that cannot reach a proof the tactic asked for, and says why.

Unlike `unimplemented` it admits nothing: meeting one means the tactic's
assumptions about the search no longer hold, which is worth an error rather
than a `sorry`.
-/
def unreachable (step : Step) (why : String) : ReconstructM Expr :=
  throwError "step {step.unit.number} is {step.rule.name}, which should not be \
    reached: {why}"

/--
Stands in for a rule that has no implementation yet. The step's conclusion is
still rebuilt and checked, so only the justification is missing.
-/
def unimplemented (step : Step) : ReconstructM Expr := do
  modify fun s => { s with unimplemented := s.unimplemented.insert step.rule.name }
  mkSorry (← step.conclusion) (synthetic := false)

end Vampire.Reconstruct
