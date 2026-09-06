import Test.Mono

-- The unused-variable linter cannot see through `vampire [*]`, which takes the whole
-- local context: every hypothesis below *is* used, just not by name in a proof term.
set_option linter.unusedVariables false
set_option linter.unusedSectionVars false

/-!
First-order group theory, over the `Group` class and `+mono`.

The axioms are the minimal ones: associativity, and *left* identity and inverse. Every
right-handed fact below has to be derived, which is what makes these more than a
restatement of the class. `Test/Mono.lean` proves the two that everything else leans on
(`inverse` and `identity`, the right inverse and right identity) and is imported here.

Each theorem is one Vampire refutation, replayed. `#print axioms` is the check that
matters: `sorryAx` would mean a step was admitted rather than proved.
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
skolemises on the goal side rather than the hypothesis side. -/
theorem solvable : ∀ a b : G, ∃ x, a * x = b := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

/-- Two elements commute exactly when their commutator is trivial. -/
theorem commutator_iff : ∀ a b : G, a * b * a⁻¹ * b⁻¹ = 1 ↔ a * b = b * a := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity]

/-- A group of exponent two is abelian.

TPTP `GRP001-1`, and the example in Figure 1 of the paper this port follows. -/
theorem exponent_two_abelian (h : ∀ x : G, x * x = 1) : ∀ a b : G, a * b = b * a := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity, h]

/-- If squaring is a homomorphism then the group is abelian. -/
theorem square_hom_abelian (h : ∀ a b : G, (a * b) * (a * b) = (a * a) * (b * b)) :
    ∀ a b : G, a * b = b * a := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel, inverse, identity,
                 mul_left_cancel, mul_right_cancel, h]

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
#print axioms exponent_two_abelian
#print axioms square_hom_abelian

/-!
These twelve used to be split across two modules, because the second large search in a
process segfaulted. That was `TermPartialOrdering`'s caches surviving a reset with a
dangling `const Ordering&` — see `docs/vampire-global-state.md` §6 and
`Lib/Reset.cpp`. Fixed; they all run here now, in a couple of seconds.
-/
