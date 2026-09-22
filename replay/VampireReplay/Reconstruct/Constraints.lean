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
`a = b`, where the two are one term but at pairs of subterms `equal` proves
equal, or `none` where they are not.

The pairs say where the two differ, so this descends both at once and takes a
pair wherever it meets one; nothing is searched for.
-/
partial def equalUnder (equal : Array (Expr × Expr × Expr)) (a b : Expr) :
    ReconstructM (Option Expr) := do
  if a == b then return some (← mkEqRefl a)
  for (x, y, p) in equal do
    if x == a && y == b then return some p
    if x == b && y == a then return some (← mkEqSymm p)
  unless a.isApp && b.isApp do return none
  let as := a.getAppArgs
  let bs := b.getAppArgs
  unless a.getAppFn == b.getAppFn && as.size == bs.size do return none
  let mut proof ← mkEqRefl a.getAppFn
  for (x, y) in as.zip bs do
    if x == y then
      proof ← mkCongrFun proof x
    else
      let some p ← equalUnder equal x y | return none
      proof ← mkCongr proof p
  return some proof

/--
`rest`, from `k` given what says each pair the step's unifier deferred is
equal, or else from one of the constraint literals that deny they are.

Each constraint is a case: it holds, and then it is a literal of `rest`; or the
pair it denies is equal, which is what `k` is handed.
-/
partial def underConstraints (step : Step) (vars : Vars) (rest : Expr)
    (k : Array (Expr × Expr × Expr) → ReconstructM Expr) : ReconstructM Expr := do
  let some (first, count) := step.unit.constraints | k #[]
  let some clause := step.unit.clause?
    | throwError "a step with unification constraints is not a clause"
  let literals := clause.literals
  let mut constraints := #[]
  for i in [first : first + count] do
    let some l := literals[i]?
      | throwError "the step records a constraint at literal {i}, and its \
          conclusion has {literals.size}"
    constraints := constraints.push (← literal vars l)
  let rec go (equal : Array (Expr × Expr × Expr)) (i : Nat) : ReconstructM Expr := do
    let some constraint := constraints[i]? | k equal
    let some equality := constraint.not?
      | throwError "the constraint{indentExpr constraint}\nis not a disequality"
    let some (_, x, y) := equality.eq?
      | throwError "the constraint{indentExpr constraint}\nis not a disequality"
    let deferred ← withLocalDeclD `h equality fun h => do
      mkLambdaFVars #[h] (← go (equal.push (x, y, h)) (i + 1))
    let held ← withLocalDeclD `h constraint fun h => do
      mkLambdaFVars #[h] (← placeLiteral rest h)
    mkAppM ``Classical.byCases #[deferred, held]
  go #[] 0

end Vampire.Reconstruct
