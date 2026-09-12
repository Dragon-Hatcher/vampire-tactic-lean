import Vampire.Reconstruct.Basic

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
  let #[(proof, stated)] := step.premises
    | throwError "expected one premise, got {step.premises.size}"
  let conclusion ← step.conclusion
  if ← isDefEq (← instantiateMVars stated) conclusion then
    return proof
  mkAppM ``Iff.mp #[← equiv stated conclusion, proof]

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
    | throwError "expected at least one premise"
  let some parent := step.unit.parents[0]?
    | throwError "expected at least one premise"
  let conclusion ← step.conclusion
  if ← isDefEq (← instantiateMVars stated) conclusion then
    return proof
  -- Folding rebuilds the clause, so its literals can come back in another
  -- order; they are related one by one rather than by the clause's shape.
  relateLiterals step parent proof stated

/--
`pure_predicate_removal`: a formula with some of what it said left out.

`PredicateDefinition` replaces a predicate that only ever occurs one way round
by the truth value that way round gives, and absorbs that value into what is
left. What remains is what the premise said, less some of it, which is what
`implies` settles by looking each part up.
-/
def weakened (step : Step) : ReconstructM Expr := do
  let #[(proof, stated)] := step.premises
    | throwError "expected one premise, got {step.premises.size}"
  let conclusion ← step.conclusion
  let stated ← instantiateMVars stated
  if ← isDefEq stated conclusion then
    return proof
  -- What remains is what the premise said, less some of it, which `implies`
  -- settles by looking each part up. A truth value absorbed inside the formula
  -- is the other case: nothing is missing from the top, and the two are
  -- related by a congruence that descends to where it was absorbed.
  try
    return mkApp (← implies stated conclusion) proof
  catch _ =>
    return ← mkAppM ``Iff.mp #[← equiv stated conclusion, proof]

end Vampire.Reconstruct.Congruence
