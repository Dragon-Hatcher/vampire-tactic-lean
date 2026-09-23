import Mathlib.Algebra.Order.Archimedean.Real.Basic
import Vampire

-- Every example has to close its goal and say nothing but what `info` says:
-- a warning -- a step admitted as `sorry`, say -- fails the test. Hypotheses
-- are used through the tactic, which the unused-variable linter cannot see.
set_option linter.unusedVariables false

-- A polymorphic hypothesis has to be instantiated at `Nat` before a
-- first-order prover can use it.
#guard_msgs (drop info) in
example (f : ∀ {α : Type}, α → α) (h : ∀ {α : Type} (x : α), f x = x) (n : Nat) :
    f n = n := by
  vampire +mono [h]

#guard_msgs (drop info) in
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire +mono [hp, hpq]

#guard_msgs (drop info) in
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire +mono [*]

#guard_msgs (drop info) in
example {ι : Type} (g : ι → ι) (a : ι) (h : ∀ x, g x = x) : g (g a) = a := by
  vampire +mono [h]

-- A lemma named in brackets can still be waiting on what it is stated of:
-- `mul_assoc` says nothing until a type and its `Semigroup` instance are
-- chosen, and choosing them is monomorphization's job. Handing it over as a
-- bare term forgets the universes it was abstracted over, and then nothing
-- can instantiate it -- the lemma reaches the prover as no axiom at all.
#guard_msgs (drop info) in
example (G : Type) [Group G] (h : ∀ x : G, x * x = 1) : ∀ a b : G, a * b = b * a := by
  vampire +mono [h, mul_assoc, one_mul]

-- A literal power has to be written out before monomorphization, not after:
-- what monomorphization leaves of `x ^ 3` is an opaque function applied to
-- `x` and to the natural number 3, and the prover is told of no such number.
-- Jacobson's theorem for n = 3, which needs the ring axioms spelled out.
#guard_msgs (drop info) in
example (R : Type) [Ring R] (h : ∀ x : R, x ^ 3 = x) (a b : R) : a * b = b * a := by
  vampire +mono [h, add_assoc, add_comm, add_zero, zero_add, neg_add_cancel,
    mul_assoc, mul_add, add_mul, mul_zero, zero_mul]
