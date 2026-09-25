import VampireReplay.Reconstruct.Basic

/-!
Rules that leave a clause's literals alone but for dropping, repeating or
reorienting them.

Each comes to the same thing: every literal of the premise is a literal of the
conclusion, or is refutable on its own. `implies` settles that by looking each
one up, so nothing is searched for and nothing is rederived.

What other rules share of instantiating a clause, taking one apart and
restating one lives here too.
-/

namespace Vampire.Reconstruct.Clause

open Lean Meta

/--
A step that restates a premise clause, perhaps with its literals rebuilt in
another order: the premise itself where it already states the conclusion, and
otherwise its literals related one by one.
-/
def restatedLiterals (step : Step) (parent : Vampire.Unit) (proof stated : Expr) :
    ReconstructM Expr := do
  if ← sameFormula (← instantiateMVars stated) (← step.conclusion) then
    return proof
  relateLiterals step parent proof stated

/-- A step whose conclusion restates its premise's literals. -/
def literals (step : Step) : ReconstructM Expr := do
  let ⟨parent, premiseProof, premiseStated⟩ ← step.onlyPremise
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
  let ⟨parent, premiseProof, premiseStated⟩ ← step.onlyPremise
  let use ← step.useAt 0
  step.underVars fun kept target => do
    let vars ← coverVars kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ←
      instantiateAt parent use vars premiseProof premiseStated
    -- Every literal of the instance is one of the conclusion's, the two that
    -- were unified having become one of them; `implies` looks each up.
    pure (mkApp (← implies premiseType target) premiseAt)

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
