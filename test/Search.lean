import Mathlib.Algebra.Order.Archimedean.Real.Basic
import Vampire

/-!
`vampire?`: the premises found by the library suggestions engine rather than
passed. Each example has to close its goal and say nothing but what `info`
says, which is where the suggestion goes; after each, the call it suggested,
which has to work as written.
-/

set_option linter.unusedVariables false

-- A library lemma, and nothing else: the goal is `Nat.add_comm`.
#guard_msgs (drop info) in
example (a b : ℕ) : a + b = b + a := by vampire?

#guard_msgs (drop info) in
example (a b : ℕ) : a + b = b + a := by vampire +mono [Nat.add_comm]

-- A library lemma about sets.
#guard_msgs (drop info) in
example (s t : Set ℕ) : s ∩ t ⊆ s := by vampire?

#guard_msgs (drop info) in
example (s t : Set ℕ) : s ∩ t ⊆ s := by vampire +mono [Set.inter_subset_left]

-- A local hypothesis together with a library lemma.
#guard_msgs (drop info) in
example (f : ℕ → ℕ) (h : ∀ x, f x = x + 0) (a : ℕ) : f a = a := by vampire?

#guard_msgs (drop info) in
example (f : ℕ → ℕ) (h : ∀ x, f x = x + 0) (a : ℕ) : f a = a := by
  vampire +mono [h, Nat.add_eq_left]

-- Over the reals, with a library lemma the arithmetic does not know. The
-- lemma is SInE's seventieth: monomorphization has to get that far down the
-- list before it stops, and the comparisons have to reach vampire as the
-- arithmetic they are, not as whatever monomorphization stood for `≤` and `0`.
#guard_msgs (drop info) in
example (x y : ℝ) (h : |x| ≤ y) : 0 ≤ y := by vampire?

#guard_msgs (drop info) in
example (x y : ℝ) (h : |x| ≤ y) : 0 ≤ y := by vampire +mono [h, abs_nonneg]
