import VampireReplay.Reconstruct.Step

/-!
What an abstracting unifier leaves behind.

Under unification with abstraction the substitution does not make the two terms
one: what it could not unify it defers into disequality literals, which the
inference puts into its conclusion. So the conclusion holds either by one of
those literals, or because every pair deferred is equal -- and then the two
terms are one by congruence at exactly those pairs.
-/

namespace Vampire.Reconstruct

open Lean Meta

/--
The conclusion `into`, from `k` given what says each pair the step's unifier
deferred is equal, or else from one of the constraint literals that deny they
are.

Each constraint is a case: it holds, and then it is a literal of the
conclusion; or the pair it denies is equal, which is what `k` is handed.
-/
partial def underConstraints (step : Step) (into : Into)
    (k : Array (Expr × Expr × Expr) → ReconstructM Expr) : ReconstructM Expr := do
  let positions := step.unit.constraints
  for i in positions do
    unless i < into.parts.size do
      throwError "the step records a constraint at literal {i}, and its \
        conclusion has {into.parts.size}"
  let rec go (equal : Array (Expr × Expr × Expr)) (i : Nat) : ReconstructM Expr := do
    let some position := positions[i]? | k equal
    let constraint := into.parts[position]!
    let some equality := constraint.not?
      | throwError "the constraint{indentExpr constraint}\nis not a disequality"
    let some (_, x, y) := equality.eq?
      | throwError "the constraint{indentExpr constraint}\nis not a disequality"
    let deferred ← withLocalDeclD `h equality fun h => do
      mkLambdaFVars #[h] (← go (equal.push (x, y, h)) (i + 1))
    let held ← withLocalDeclD `h constraint fun h => do
      mkLambdaFVars #[h] (into.inject position h)
    mkAppM ``Classical.byCases #[deferred, held]
  go #[] 0

end Vampire.Reconstruct
