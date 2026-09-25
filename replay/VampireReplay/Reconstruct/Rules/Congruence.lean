import VampireReplay.Reconstruct.Basic
import VampireReplay.Reconstruct.Rules.Clause

/-!
Rules that restate a formula without changing what it says.

Flattening merges nested junctions and adjacent quantifiers, cancels double
negations and pushes a negation into a literal. Most of that is invisible once
the formula is a Lean proposition -- `∀ x y` already is two binders, and an
n-ary junction folds the same either way -- and `equiv` accounts for the rest.
-/

namespace Vampire.Reconstruct.Congruence

open Lean Meta

/-- A step that restates its premise. -/
def restated (step : Step) : ReconstructM Expr := do
  let ⟨_, proof, stated⟩ ← step.onlyPremise
  restate proof stated (← step.conclusion)

/--
A step that restates its first premise, the others being definitions it
applied.

Unfolding a definition rewrites `sF(t)` to what `sF` was defined as, and
folding one does the reverse. A name is bound to what it names, so both are
already the same proposition here and the definitions among the premises carry
no further weight.
-/
def unfolded (step : Step) : ReconstructM Expr := do
  let some (proof, stated) := step.premises[0]?
    | throwError "{step.rule.name} should have at least one premise, got none"
  let some parent := step.unit.parents[0]?
    | throwError "{step.rule.name} should have at least one premise, got none"
  -- Folding rebuilds the clause, so its literals can come back in another
  -- order; they are related one by one rather than by the clause's shape.
  Clause.restatedLiterals step parent proof stated

end Vampire.Reconstruct.Congruence
