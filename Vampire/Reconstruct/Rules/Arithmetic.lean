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
      out := out.push (← instantiateAt parent use (← coverVars parent vars step.unit.boundVarSorts) proof stated)
    | none =>
      -- Nothing recorded: a simplifying inference that applies no substitution
      -- states its premise of the very variables its conclusion speaks of, so
      -- that is what it is instantiated at. A variable the conclusion does not
      -- have is one the step evaluated or dropped the literal of, and the
      -- premise is a fact of every element of its sort, so which element is
      -- taken for it cannot matter.
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
    -- Each premise holds, so one of its literals does, which is a case; every
    -- case has to make the conclusion, which is what the numbers settle.
    let rec go (facts : Array Expr) (i : Nat) : ReconstructM Expr := do
      let some (proof, stated) := premises[i]?
        | return ← byArithmetic facts target
      elimGiven (junctionParts ``Or stated)
        (fun _ h => do go (facts.push (← plainly h)) (i + 1)) proof
    mkLambdaFVars xs (← go #[] 0)

end Vampire.Reconstruct.Arithmetic
