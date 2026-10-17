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
example (a b : ℕ) : a + b = b + a := by vampire [Nat.add_comm]

-- A library lemma about sets.
#guard_msgs (drop info) in
example (s t : Set ℕ) : s ∩ t ⊆ s := by vampire?

#guard_msgs (drop info) in
example (s t : Set ℕ) : s ∩ t ⊆ s := by vampire [Set.inter_subset_left]

-- A local hypothesis together with a library lemma.
#guard_msgs (drop info) in
example (f : ℕ → ℕ) (h : ∀ x, f x = x + 0) (a : ℕ) : f a = a := by vampire?

#guard_msgs (drop info) in
example (f : ℕ → ℕ) (h : ∀ x, f x = x + 0) (a : ℕ) : f a = a := by
  vampire [h, Nat.add_eq_left]

-- Over the reals, with a library lemma the arithmetic does not know. The
-- lemma is SInE's seventieth: monomorphization has to get that far down the
-- list before it stops, and the comparisons have to reach vampire as the
-- arithmetic they are, not as whatever monomorphization stood for `≤` and `0`.
#guard_msgs (drop info) in
example (x y : ℝ) (h : |x| ≤ y) : 0 ≤ y := by vampire?

#guard_msgs (drop info) in
example (x y : ℝ) (h : |x| ≤ y) : 0 ≤ y := by vampire [h, abs_nonneg]

-- A group lemma found among many with several type parameters: pairing them
-- with the problem's constants is bounded, and the bound is not reached
-- before the lemmas that matter are instantiated.
#guard_msgs (drop info) in
example (G : Type) [CommGroup G] (a b : G) : a * b * a⁻¹ = b := by vampire?

#guard_msgs (drop info) in
example (G : Type) [CommGroup G] (a b : G) : a * b * a⁻¹ = b := by
  vampire [mul_div_cancel_left, div_div_cancel_left, mul_div_cancel]

-- Lemmas about `Option α` instantiate themselves at ever larger types; the
-- instances nearest the problem come first, and the bound trims the rest.
#guard_msgs (drop info) in
example (a b : ℤ) : min a b ≤ max a b := by vampire?

#guard_msgs (drop info) in
example (a b : ℤ) : min a b ≤ max a b := by
  vampire [Int.min_def, Int.min_le_right, Int.max_def, Int.min_le_left]

-- Local hypotheses and a lemma about sets.
#guard_msgs (drop info) in
example (s t u : Set ℕ) (h1 : s ⊆ t) (h2 : t ⊆ u) : s ⊆ u := by vampire?

#guard_msgs (drop info) in
example (s t u : Set ℕ) (h1 : s ⊆ t) (h2 : t ⊆ u) : s ⊆ u := by vampire [h2, h1, Set.Subset.trans]

-- A list lemma instantiated at `ℕ`.
#guard_msgs (drop info) in
example (l₁ l₂ : List ℕ) : (l₁ ++ l₂).length = l₁.length + l₂.length := by vampire?

#guard_msgs (drop info) in
example (l₁ l₂ : List ℕ) : (l₁ ++ l₂).length = l₁.length + l₂.length := by
  vampire [List.length_append]

-- Divisibility over `ℤ`.
#guard_msgs (drop info) in
example (a b : ℤ) (h : a ∣ b) (c : ℤ) : a ∣ b * c := by vampire?

#guard_msgs (drop info) in
example (a b : ℤ) (h : a ∣ b) (c : ℤ) : a ∣ b * c := by vampire [h, Int.dvd_mul_of_dvd_left]

-- A function used as a value, and a lemma about injectivity found for it.
#guard_msgs (drop info) in
example (f : ℕ → ℕ) (hf : Function.Injective f) (a b : ℕ) (h : f a = f b) : a = b := by
  vampire?

#guard_msgs (drop info) in
example (f : ℕ → ℕ) (hf : Function.Injective f) (a b : ℕ) (h : f a = f b) : a = b := by
  vampire [hf, h, Function.not_injective_iff]
