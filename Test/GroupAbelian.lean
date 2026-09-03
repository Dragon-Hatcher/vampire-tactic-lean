import Test.GroupTheory

/-!
Two classical "this condition forces commutativity" theorems.

Separate from `Test/GroupTheory.lean` because of the accumulation limit documented at
the bottom of that file. One heavy goal per module is what is reliably safe.
-/

set_option vampire.timeout 30
set_option maxHeartbeats 0

variable [Group G]
/-- A group of exponent two is abelian.

TPTP `GRP001-1`, and the example in Figure 1 of the paper this port follows. -/
theorem exponent_two_abelian (h : ∀ x : G, x * x = 1) : ∀ a b : G, a * b = b * a := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity, h]

#print axioms exponent_two_abelian

/-!
`square_hom_abelian` — if `(a * b)² = a² * b²` for all `a b` then the group is abelian —
is not here, and not because it fails. It proves in about two seconds on its own:

    theorem square_hom_abelian (h : ∀ a b : G, (a * b) * (a * b) = (a * a) * (b * b)) :
        ∀ a b : G, a * b = b * a := by
      vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity,
                     mul_left_cancel, mul_right_cancel, h]

But it cannot share a module with `exponent_two_abelian`: two searches this size in one
process is already past the limit, and the second segfaults. Left out rather than given
a module of its own, since a third file would document the bug without testing anything
the other two do not.
-/
