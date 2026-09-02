/-
The recognizers used by the ported translators, from lean-smt (`Smt/Recognizers.lean`),
Copyright (c) 2021-2025 by the authors listed in that project's AUTHORS file. Released
under Apache 2.0; see `NOTICE`. Only the ones the propositional fragment needs are kept.
-/
import Lean

namespace Lean.Expr

/-- `p ∨ q`. -/
def vampireOr? (p : Expr) : Option (Expr × Expr) :=
  p.app2? ``Or

/-- `p → q` where both sides are propositions, i.e. implication rather than a function
sort or a dependent product. -/
def vampireImp? (p : Expr) : MetaM (Option (Expr × Expr)) := do
  let .forallE _ p q _ := p | return none
  if ← (isAProp p) <&&> (isAProp q) then
    return (p, q)
  else
    return none
where
  isAProp (e : Expr) : MetaM Bool := do
    return (← Meta.inferType e).isProp

/-- `a == b`. -/
def vampireBEq? (b : Expr) : Option (Expr × Expr × Expr) :=
  let_expr BEq.beq α _ a b := b | none
  return (α, a, b)

/-- `a != b`. -/
def vampireBNe? (b : Expr) : Option (Expr × Expr × Expr) :=
  let_expr bne α _ a b := b | none
  return (α, a, b)

end Lean.Expr
