import Test.Mono

/-!
First-order group theory, over the `Group` class and `+mono`.

The axioms are the minimal ones: associativity, and *left* identity and inverse. Every
right-handed fact below has to be derived, which is what makes these more than a
restatement of the class. `Test/Mono.lean` proves the two that everything else leans on
(`inverse` and `identity`, the right inverse and right identity) and is imported here.

Each theorem is one Vampire refutation, replayed. `#print axioms` at the end is the
check that matters: `sorryAx` would mean a step was admitted rather than proved.

Kept to twelve goals per module deliberately — see the note at the bottom.
-/

set_option vampire.timeout 30
set_option maxHeartbeats 0

variable [Group G]
/-- The identity is its own inverse. -/
theorem inv_one : (1 : G)⁻¹ = 1 := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

/-- Inversion is an involution. -/
theorem inv_inv : ∀ a : G, a⁻¹⁻¹ = a := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

/-- Left cancellation. -/
theorem mul_left_cancel : ∀ a b c : G, a * b = a * c → b = c := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel]

/-- Right cancellation — which needs the right-handed facts, unlike its mirror. -/
theorem mul_right_cancel : ∀ a b c : G, b * a = c * a → b = c := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

/-- An inverse is unique: anything that multiplies to the identity *is* the inverse. -/
theorem inv_unique : ∀ a b : G, a * b = 1 → b = a⁻¹ := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

/-- Socks and shoes. -/
theorem mul_inv_rev : ∀ a b : G, (a * b)⁻¹ = b⁻¹ * a⁻¹ := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

/-- The only idempotent is the identity. -/
theorem idempotent_is_one : ∀ a : G, a * a = a → a = 1 := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

/-- `a * b = 1` is symmetric, though the axioms are not. -/
theorem mul_eq_one_comm : ∀ a b : G, a * b = 1 → b * a = 1 := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

/-- Every equation `a * x = b` is solvable. An existential goal, so the refutation
skolemises — on the goal side rather than the hypothesis side. -/
theorem solvable : ∀ a b : G, ∃ x, a * x = b := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

/-- Two elements commute exactly when their commutator is trivial. -/
theorem commutator_iff : ∀ a b : G, a * b * a⁻¹ * b⁻¹ = 1 ↔ a * b = b * a := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

#print axioms inv_one
#print axioms inv_inv
#print axioms mul_left_cancel
#print axioms mul_right_cancel
#print axioms inv_unique
#print axioms mul_inv_rev
#print axioms idempotent_is_one
#print axioms mul_eq_one_comm
#print axioms solvable
#print axioms commutator_iff

/-!
## A limit worth knowing about

The abelian theorems live in `Test/GroupAbelian.lean` rather than here, because past
about a dozen `+mono` goals in one module the embedded prover segfaults.

It is cumulative work, not any one goal and not a count. `square_hom_abelian` crashes as
the twelfth goal here and proves in two seconds on its own; replacing it with a trivial
goal crashes just the same. Thirty copies of one small goal are fine, and so are fifteen
varied small ones — but the two abelian theorems together are enough on their own. That
points at the allocator never being reset across runs (`docs/STATUS.md`, "Open
questions").

`+mono` is implicated: the same statements written first-order by hand, with the group
operations as explicit parameters and no `+mono`, all pass in one module.
-/
