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

The images are terms of the conclusion's variables, so `vars` is the map of
those -- the ones the conclusion kept and the ones only an image mentions
(`coverVars`). A premise variable with no image stands for nothing in
particular: it is instantiated at an element of its own sort.
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
A term of a premise, `t`, as a step used it: at what the use bound the
premise's variables to, and an arbitrary element for one it left unbound, as
`instantiateAt` has them.
-/
def termAt (parent : Vampire.Unit) (use : PremiseUse) (vars : Vars) (t : Term) :
    ReconstructM Expr := do
  let bound := Std.HashMap.ofList use.bindings.toList
  let mut premiseVars : Vars := {}
  for (v, sortName) in parent.varSorts do
    premiseVars := premiseVars.insert v <| ← match bound[v]? with
      | some image => term vars image
      | none => do someElement (← sortType sortName)
  term premiseVars t

/--
`vars`, a map of the conclusion's variables, with something of the right sort
for each of @b bound not in it.

@b bound is the step's `boundVarSorts`: the variables of the conclusion's
numbering that an image recorded against a premise mentions and the conclusion
does not have. Each is instantiated at an arbitrary element, which cannot
matter to the conclusion, and every premise has to agree on which: two
premises' images can mention the same one.

Only the conclusion's numbering goes in here. A premise of a step that
substituted numbers its variables its own way, so its variables are never keys
of this map: `instantiateAt` reads them through the images recorded against
it. A step that applied no substitution is the other case, `premiseVars`.
-/
def coverVars (vars : Vars) (bound : Array (UInt32 × String)) : ReconstructM Vars := do
  let mut vars := vars
  for (v, sortName) in bound do
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

/--
For a step that applied no substitution: its premise speaks of the very
variables its conclusion does, one numbering for both, so `vars` is extended to
the premise's variables -- one the conclusion dropped, with the literal it was
the last in, at an element of its sort -- and the premise is instantiated at
them. The premise's own literals can then be read through the map too.
-/
def premiseVars (parent : Vampire.Unit) (vars : Vars) : ReconstructM (Vars × Array Expr) := do
  let args ← argsFor parent vars
  let mut vars := vars
  for ((v, _), x) in parent.varSorts.zip args do
    vars := vars.insert v x
  return (vars, args)

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
The premise in position `i` among a step's parents, and how many times the
step took that same premise before there.

A premise can be used twice -- an inference can take a clause as both of its
premises -- so what the worker recorded of a use is found by position rather
than by which premise it is: the uses of a premise are recorded in the order
the step took them, and this says which of them is the one in position `i`.
-/
def Step.occurrence? (step : Step) (i : Nat) : Option (Vampire.Unit × Nat) := do
  let parent ← step.unit.parents[i]?
  return (parent, (step.unit.parents.extract 0 i).countP (·.number == parent.number))

/-- How a step used the premise in position `i` among its parents. -/
def Step.useAt? (step : Step) (i : Nat) : Option PremiseUse := do
  let (parent, earlier) ← step.occurrence? i
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
  let (_, earlier) ← step.occurrence? i
  step.unit.placement? i earlier

/-- One of a step's premises: the step it is, a proof of it, and what it says. -/
structure Premise where
  parent : Vampire.Unit
  proof : Expr
  stated : Expr

/-- The step's premises, where there are `count` of them. -/
private def Step.premisesExactly? (step : Step) (count : Nat) : Option (Array Premise) := do
  guard (step.premises.size == count && step.unit.parents.size == count)
  return (step.unit.parents.zip step.premises).map fun (parent, proof, stated) =>
    { parent, proof, stated }

private def Step.wrongPremises (step : Step) (count : Nat) : ReconstructM α :=
  throwError "{step.rule.name} should have {count} premise(s), got {step.premises.size} \
    proved and {step.unit.parents.size} recorded"

/-- The step's one premise. -/
def Step.onlyPremise (step : Step) : ReconstructM Premise := do
  let some #[p] := step.premisesExactly? 1 | step.wrongPremises 1
  return p

/-- The step's two premises, in the order vampire states them. -/
def Step.twoPremises (step : Step) : ReconstructM (Premise × Premise) := do
  let some #[p, q] := step.premisesExactly? 2 | step.wrongPremises 2
  return (p, q)

/-- `k` given the conclusion's literals to place into, `target` being what it says. -/
def Step.withInto (step : Step) (target : Expr) (k : Into → ReconstructM Expr) :
    ReconstructM Expr :=
  Reconstruct.withInto target step.unit.clauseSize? k

/--
Whether the term a use recorded is the left side of the equation it acted on,
rather than the right.

The use records the side as the premise states it, and vampire shares its
terms, so it is one of the equation's two arguments by index: which side the
inference used is read off rather than found by unifying either side with it.
-/
def recordedSideIsLeft (parent : Vampire.Unit) (use : PremiseUse) (index : Nat) :
    ReconstructM Bool := do
  let some side := use.term
    | throwError "step {parent.number} was used without recording which side of \
        its equation"
  let some clause := parent.clause?
    | throwError "the equation used from step {parent.number} is not a clause"
  let some l := clause.literals[index]?
    | throwError "step {parent.number} has no literal {index}"
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
  let (some source, some _) := (parent.clause?, step.unit.clause?)
    | -- These rules run over formulas too, before clausification, and there a
      -- formula's shape is what it says.
      return mkApp (← implies (← instantiateMVars premiseStated)
        (← step.conclusion)) premiseProof
  step.underVars fun kept target => do
    -- Dropping a literal can drop the last occurrence of a variable with it.
    let (vars, args) ← premiseVars parent (← coverVars kept step.unit.boundVarSorts)
    -- The premise's literals are read as the premise means them: polarity
    -- flipping divides the proof, and this step can be the line itself.
    let sourceParts ← reading parent (source.literals.mapM (literal vars))
    -- Where the worker recorded each literal went, which is where it goes;
    -- one it did not is looked for.
    let position? := step.unit.parents.findIdx? (·.number == parent.number)
    let placed := position?.bind step.placedAt
    -- The conclusion's literals, by the count of them: a literal can itself be
    -- a disjunction, which taking the clause apart by its shape would split.
    step.withInto target fun into => do
      elimGiven sourceParts (motive? := some target) (fun i h => do
        if let some (some _) := placed.bind (·[i]?) then
          return ← into.placeAt placed i h
        if let some done ← into.place? h (hint := i) then return done
        -- Every literal the step kept is one of the conclusion's; one it
        -- dropped has to be refutable on its own, as `t ≠ t` is.
        if let some refuted ← refuteDropped? target h then return refuted
        throwError "the literal{indentExpr (← instantiateMVars (← inferType h))}\n\
          is neither among{indentExpr target}\nnor refutable on its own")
        (mkAppN premiseProof args)

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
Stands in for a rule that has no implementation yet: a `sorry` of the step's
conclusion, which is still rebuilt, so later steps can use it. Nothing about
the step itself is checked.
-/
def unimplemented (step : Step) : ReconstructM Expr := do
  modify fun s => { s with unimplemented := s.unimplemented.insert step.rule.name }
  mkSorry (← step.conclusion) (synthetic := false)

end Vampire.Reconstruct
