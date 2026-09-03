import Vampire

/-!
Monomorphisation, by way of lean-auto.

Vampire's logic is monomorphic first-order logic; these goals are neither. `+mono` runs
auto's monomorphisation procedure first, which instantiates the polymorphic lemmas at
the types the problem uses and replaces what is left with uninterpreted symbols.

The group theorems are the example from lean-smt's README, which is where `+mono` and
its implementation come from. `Group` is defined here rather than imported: the example
uses Mathlib's, and this package has no Mathlib dependency — but the shape that matters
is the same, a class-polymorphic carrier with polymorphic lemmas over it.

For contrast, `Test/Basic.lean` proves the same kind of statement with the group
operations passed as explicit parameters. That is what a goal has to look like without
monomorphisation, and what `+mono` now produces on its own.
-/

class Group (G : Type u) extends Mul G, One G, Inv G where
  mul_assoc : ∀ a b c : G, a * b * c = a * (b * c)
  one_mul : ∀ a : G, 1 * a = a
  inv_mul_cancel : ∀ a : G, a⁻¹ * a = 1

export Group (mul_assoc one_mul inv_mul_cancel)

variable [Group G]

theorem inverse : ∀ (a : G), a * a⁻¹ = 1 := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel]

theorem identity : ∀ (a : G), a * 1 = a := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse]

theorem unique_identity : ∀ (e : G), (∀ a, e * a = a) ↔ e = 1 := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel]

#print axioms inverse
#print axioms identity
#print axioms unique_identity
