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
  relateLiterals step parent premiseProof premiseStated

/--
`condensation`: the premise at a substitution that makes two of its literals
one.

`Condensation` unifies two literals of a clause and applies the unifier to the
whole of it, so the conclusion has one literal fewer than the premise and is an
instance of it. A clause is universally quantified, so an instance follows from
it; which instance is the unifier's to say, and the inference discards it.
-/
def condensation (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, premiseStated)] := step.premises
    | throwError "condensation should have one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "condensation without a premise"
  let use ← step.useAt 0
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    let vars ← coverVars parent kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ←
      Reconstruct.instantiateAt parent use vars premiseProof premiseStated
    -- Every literal of the instance is one of the conclusion's, the two that
    -- were unified having become one of them; `implies` looks each up.
    mkLambdaFVars xs (mkApp (← implies premiseType target) premiseAt)

/--
`polarity_flipping`: nothing, once the predicates it flipped are read as
meaning the opposite.

`Shuffling::polarityFlip` picks a set of predicates and replaces every literal
over them, in every clause of the problem, by its complement. That says
nothing about the clauses: it says that those predicates now mean the opposite
of what they did. Reading the steps after it that way -- which is what the framework does --
leaves this step stating what its premise does, up to the order shuffling put
its literals in.
-/
def polarityFlipping (step : Step) : ReconstructM Expr := literals step

end Vampire.Reconstruct.Clause
