import Vampire.Reconstruct.Basic

/-!
Rules that leave a clause's literals alone but for dropping, repeating or
reorienting them.

Each comes to the same thing: every literal of the premise is a literal of the
conclusion, or is refutable on its own. `implies` settles that by looking each
one up, so nothing is searched for and nothing is rederived.
-/

namespace Vampire.Reconstruct.Clause

open Lean Meta

/--
Instantiates a premise clause at the variables the conclusion kept.

A clause is universally quantified over the variables occurring in it, and a
rule that drops a literal can drop the last occurrence of a variable with it.
Such a variable is instantiated at an arbitrary element of its sort; vampire's
domains are never empty.
-/
def instantiateAt (parent : Vampire.Unit) (vars : Vars) (proof stated : Expr) :
    ReconstructM (Expr × Expr) := do
  let mut args := #[]
  for (v, sortName) in parent.varSorts do
    match vars[v]? with
    | some x => args := args.push x
    | none => args := args.push (← someElement (← sortType sortName))
  return (mkAppN proof args, ← instantiateForall stated args)

/-- A step whose conclusion restates its premise's literals. -/
def literals (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, premiseStated)] := step.premises
    | throwError "expected one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "expected a premise"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    let (proof, stated) ← instantiateAt parent vars premiseProof premiseStated
    mkLambdaFVars xs (mkApp (← implies stated target) proof)

end Vampire.Reconstruct.Clause
