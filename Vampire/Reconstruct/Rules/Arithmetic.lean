import Vampire.Reconstruct.Basic

/-!
The steps that hold by arithmetic.

Vampire's own arithmetic rules -- ALASCA normalising a literal into a sum
against zero, evaluating what is constant, adding two inequalities together --
record nothing of why each is sound, so these are the one kind of step whose
conclusion replay has to prove for itself. What proves it is the decision
procedure `Context.contradiction` holds.
-/

namespace Vampire.Reconstruct.Arithmetic

open Lean Meta

/--
What a step's premises say, each instantiated as the step used it.

A premise is a clause, so what it says is a disjunction; it is taken apart by
the caller, since which of its literals holds is a case to be made rather than
a fact to be had.
-/
private def premisesOf (step : Step) (vars : Vars) :
    ReconstructM (Array (Expr × Expr)) := do
  let mut out := #[]
  for ((proof, stated), i) in step.premises.zipIdx do
    let some parent := step.unit.parents[i]?
      | throwError "no premise in position {i}"
    -- A step that bound the premise's variables recorded what to; one that
    -- took the premise as it stands recorded nothing, and then it is taken so.
    match ← try some <$> step.useAt i catch _ => pure none with
    | some use =>
      out := out.push (← instantiateAt parent use (← coverVars parent vars) proof stated)
    | none =>
      -- Nothing recorded: the premise speaks of the same variables the
      -- conclusion does, and stands for whatever it does not mention.
      let mut args := #[]
      for (v, sortName) in parent.varSorts do
        match vars[v]? with
        | some x => args := args.push x
        | none => args := args.push (← someElement (← sortType sortName))
      out := out.push (mkAppN proof args,
        ← sharedClause (← instantiateForall stated args))
  return out

/--
A step whose conclusion follows from its premises by arithmetic.

Suppose the conclusion fails. Then each of its literals fails, which is a fact;
and each premise holds, so one of its literals does, which is a case. Every
case ends in facts that cannot all hold of any numbers.
-/
partial def theoryStep (step : Step) : ReconstructM Expr := do
  -- Before clausification a step states a formula, and what it did to it was
  -- to rewrite its literals where they stand: a congruence, whose leaves are
  -- where the arithmetic is.
  if step.unit.clause?.isNone then
    let #[(proof, stated)] := step.premises
      | throwError "a formula normalised from {step.premises.size} premises"
    let conclusion ← step.conclusion
    if ← isDefEq stated conclusion then
      return proof
    return ← mkAppM ``Iff.mp #[← equiv stated conclusion, proof]
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    let premises ← premisesOf step vars
    -- A clause of one literal is what a theory axiom states, and that is
    -- proved as it stands rather than by supposing it false.
    if (junctionParts ``Or target).size == 1 then
      let facts ← premises.filterMapM fun (proof, stated) => do
        if (junctionParts ``Or stated).size == 1 then
          return some (← plainly proof)
        return none
      if facts.size == premises.size then
        try
          return ← mkLambdaFVars xs (← (← read).contradiction facts (some target))
        catch _ => pure ()
    let refuted ← withLocalDeclD `h (mkApp (mkConst ``Not) target) fun h => do
      -- What says each literal of the conclusion fails.
      let parts := junctionParts ``Or target
      let mut facts := #[]
      for (part, i) in parts.zipIdx do
        let refuting ← withLocalDeclD `l part fun l => do
          mkLambdaFVars #[l] (mkApp h (← injectGiven parts i l))
        facts := facts.push (← plainly refuting)
      -- And a case for each literal of each premise.
      let rec go (facts : Array Expr) (i : Nat) : ReconstructM Expr := do
        let some (proof, stated) := premises[i]?
          | return ← (← read).contradiction facts none
        elimGiven (junctionParts ``Or stated)
          (fun _ h => do go (facts.push (← plainly h)) (i + 1)) proof
      mkLambdaFVars #[h] (← go facts 0)
    mkLambdaFVars xs (ofNotNot target refuted)

end Vampire.Reconstruct.Arithmetic
