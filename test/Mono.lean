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
  vampire [h]

#guard_msgs (drop info) in
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [hp, hpq]

#guard_msgs (drop info) in
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [*]

#guard_msgs (drop info) in
example {ι : Type} (g : ι → ι) (a : ι) (h : ∀ x, g x = x) : g (g a) = a := by
  vampire [h]

-- A lemma named in brackets can still be waiting on what it is stated of:
-- `mul_assoc` says nothing until a type and its `Semigroup` instance are
-- chosen, and choosing them is monomorphization's job. It is elaborated with
-- what is left abstracted, universes included, or nothing could instantiate it.
#guard_msgs (drop info) in
example (G : Type) [Group G] (h : ∀ x : G, x * x = 1) : ∀ a b : G, a * b = b * a := by
  vampire [h, mul_assoc, one_mul]

-- A literal power is written out, and the ring axioms instantiated at `R`, each
-- with its own path to `R`'s operations: the same `0`, `+` and `*` reached
-- through different instances are one symbol, and stated one way to replay.
-- Jacobson's theorem for n = 3, which needs the ring axioms spelled out.
#guard_msgs (drop info) in
example (R : Type) [Ring R] (h : ∀ x : R, x ^ 3 = x) (a b : R) : a * b = b * a := by
  vampire [h, add_assoc, add_comm, add_zero, zero_add, neg_add_cancel,
    mul_assoc, mul_add, add_mul, mul_zero, zero_mul]

-- The README's example: instance arguments synthesized for each lemma.
#guard_msgs (drop info) in
example (G : Type) [Group G] : ∀ (a : G), a * a⁻¹ = 1 := by
  vampire [mul_assoc, one_mul, inv_mul_cancel]

-- A lemma with several instance parameters (`Lattice`, `AddGroup` and a
-- monotonicity class), instantiated at `ℝ` from `|x|` alone; `≤` and `0` of
-- the instance reach vampire as arithmetic.
#guard_msgs (drop info) in
example (x y : ℝ) (h : |x| ≤ y) : 0 ≤ y := by vampire [h, abs_nonneg]

-- A polymorphic hypothesis over two types, instantiated at the pair the goal uses.
#guard_msgs (drop info) in
example (g : ∀ {α β : Type}, α → β → α) (h : ∀ {α β : Type} (a : α) (b : β), g a b = a)
    (n : Nat) (s : String) : g n s = n := by
  vampire [h]

-- `List.length_cons` instantiated at `ℕ` by the `List.cons` the goal applies.
#guard_msgs (drop info) in
example (a : ℕ) (n : ℕ) (l : List ℕ) (h : l.length = n) : (a :: l).length = n + 1 := by
  vampire [h, List.length_cons]

-- A hypothesis gathered by `*` that cannot be stated is left out; one named is
-- an error that says why.
#guard_msgs (drop info) in
example (p : Prop) (hp : p) (hq : ∀ n : ℕ, (n : ℤ) ≥ 0) : p := by vampire [*]
