import Mathlib.Algebra.Order.Archimedean.Real.Basic
import Vampire

/-!
Small theorems chosen to reach as many of replay's code paths as they can, and
each of the bugs a benchmark problem once found, in one file so that Mathlib
and the tactic are loaded once. Each has to close its goal and say nothing but
what `info` says.

Where a path depends on how vampire goes about it, `options` asks for it: an
evaluation mode, ALASCA, cancellation.
-/

set_option linter.unusedVariables false

/-! ### First-order logic -/

-- Clausification of an equivalence: newcnf copies a subformula at both
-- polarities, and its two existential blocks number their variables alike,
-- so which symbols an occurrence introduced is read off the clause it left.
#guard_msgs (drop info) in
example {ι : Type} (mem : ι → ι → Prop) (pair : ι → ι → ι) (prod : ι → ι → ι)
    (h : ∀ a b c, c = prod a b ↔ ∀ z, mem z c ↔ ∃ x y, z = pair x y ∧ mem x a ∧ mem y b)
    (a b z : ι) (hz : mem z (prod a b)) : ∃ x y, z = pair x y ∧ mem x a := by
  vampire [*]

-- A block of existentials under universals: skolems that are functions.
#guard_msgs (drop info) in
example {ι : Type} (r : ι → ι → ι → Prop) (h : ∀ x, ∃ y z, r x y z)
    (h2 : ∀ x y z, r x y z → False) (a : ι) : False := by
  vampire [*]

-- A long block of existentials: each witness chosen over the ones before it.
#guard_msgs (drop info) in
example {ι : Type} (p : ι → Prop) (i : ι)
    (h : ∃ a b c d e f g, p a ∧ p b ∧ p c ∧ p d ∧ p e ∧ p f ∧ p g) : ∃ x, p x := by
  vampire [*]

-- Equality: superposition and demodulation, and an equation turned round.
#guard_msgs (drop info) in
example {ι : Type} (f g : ι → ι) (a b : ι) (h1 : ∀ x, f (g x) = x) (h2 : g a = b)
    : f b = a := by
  vampire [*]

-- AVATAR: a disjunction of ground facts is split into components.
#guard_msgs (drop info) in
example (p q r s : Prop) (h1 : p ∨ q) (h2 : r ∨ s) (h3 : p → r → False) (h4 : p → s → False)
    (h5 : q → r → False) (h6 : q → s → False) : False := by
  vampire [*]

-- AVATAR's congruence closure: the solver's theory conflicts name ground
-- literals nothing in the proof splits off, whose definitions have to be
-- found by name.
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ι) (a b c : ι) (h1 : a = b ∨ a = c) (h2 : f a ≠ f b)
    (h3 : f a ≠ f c) : False := by
  vampire (options := #[("avatar_congruence_closure", "on")]) [*]

-- A named formula: a subformula repeated under enough structure that
-- clausification names it.
#guard_msgs (drop info) in
example {ι : Type} (p q r : ι → Prop)
    (h : ∀ x, (p x ∧ q x ∧ r x) ∨ (q x ∧ r x ∧ p x) ∨ ¬ p x) (a : ι) (hp : p a)
    (hq : ¬ q a) : False := by
  vampire [*]

/-! ### Theory normalization, and goals that state `>` and `≥` -/

-- `¬(x > y)` in the goal is `x ≤ y` to vampire, both ways round.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (x : ℤ) (h : ¬ (f x > 100)) (h2 : f x > 200) : False := by
  vampire [*]

#guard_msgs (drop info) in
example (f : ℤ → ℤ) (x : ℤ) (h : ¬ (f x ≥ 100)) (h2 : f x ≥ 200) : False := by
  vampire [*]

-- Theory normalization of a formula: its atoms rewritten where they stand,
-- `≤` under a quantifier and a negated one.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (h : ∀ x, f x - x ≤ 3) (h2 : ¬ (f 0 ≤ 3)) : False := by
  vampire [*]

/-! ### The literal-wise simplifications -/

-- Interpreted evaluation, the default.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (h : f (2 + 3) = 1) : f 5 = 1 := by
  vampire (options := #[("evaluation", "simple")]) [*]

-- Interpreted evaluation with inequality normalization.
#guard_msgs (drop info) in
example (x : ℤ) (h : x * 1 + 0 < 3 - 1) (h2 : 2 ≤ x) : False := by
  vampire (options := #[("evaluation", "simple"), ("normalize_inequalities", "on")]) [*]

-- Polynomial evaluation: monomials merged.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (x : ℤ) (h : f (x + x + 2 * 3) = 0) : f (2 * x + 6) = 0 := by
  vampire (options := #[("evaluation", "force")]) [*]

-- Polynomial evaluation: a floor's integer part taken out.
#guard_msgs (drop info) in
example (f : ℝ → ℝ) (x : ℝ) (h : f (⌊x + 1⌋) = 0) : f (⌊x⌋ + 1) = 0 := by
  vampire (options := #[("evaluation", "force")]) [*]

-- Polynomial evaluation: integer division and remainder of numerals.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (h : f (7 / 2 + 7 % 2) = 0) : f 4 = 0 := by
  vampire (options := #[("evaluation", "force")]) [*]

-- Pushing unary minus.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (x y : ℤ) (h : f (-(x + -y)) = 0) : f (-x + y) = 0 := by
  vampire (options := #[("push_unary_minus", "on")]) [*]

-- Cancellation.
#guard_msgs (drop info) in
example (x y : ℤ) (h : x + y < y + 3) (h2 : 3 ≤ x) : False := by
  vampire (options := #[("cancellation", "force")]) [*]

-- ALASCA normalization: a comparison scaled by the gcd of its coefficients.
#guard_msgs (drop info) in
example (x y : ℝ) (h : 2 * x + 4 * y ≤ 6) (h2 : x + 2 * y > 3) : False := by
  vampire (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- ALASCA normalization: an equation turned round, and over the integers.
#guard_msgs (drop info) in
example (x : ℤ) (h : 2 * x = 2 * 3) (h2 : x ≠ 3) : False := by
  vampire (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- ALASCA normalization of an integer `≥`, which becomes `>` with one added.
#guard_msgs (drop info) in
example (x y : ℤ) (h : x ≥ y + 1) (h2 : x ≤ y) : False := by
  vampire (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- A defined constant: vampire's `sF` is a symbol to evaluation, which leaves
-- its definition be.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (c : ℤ) (h1 : c = 0 + 6) (h2 : f c ≠ f 6) : False := by
  vampire [*]

/-! ### Theory axioms and floors -/

#guard_msgs (drop info) in
example (x : ℤ) (h : 2 * x = 6) : x = 3 := by vampire [h]

#guard_msgs (drop info) in
example (x : ℝ) : (⌊x⌋ : ℝ) ≤ x := by vampire

#guard_msgs (drop info) in
example (x : ℝ) : x < ⌊x⌋ + 1 := by vampire

/-! ### Splitting, proxies and other preprocessing -/

-- AVATAR splits a clause into variable-disjoint components.
#guard_msgs (drop info) in
example {ι : Type} (p q : ι → Prop) (a : ι) (h : ∀ x y, p x ∨ q y) (hp : ∀ x, ¬ p x)
    (hq : ∀ y, ¬ q y) : False := by
  vampire [*]

-- Factoring, with AVATAR off so that the clause is not split instead.
#guard_msgs (drop info) in
example {ι : Type} (p : ι → Prop) (a : ι) (h : ∀ x y, p x ∨ p y) (hp : ∀ x, ¬ p x) : False := by
  vampire (options := #[("avatar", "off")]) [*]

-- Equality as a proxy predicate, with its axioms.
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ι) (a b : ι) (h1 : a = b) (h2 : f a ≠ f b) : False := by
  vampire (options := #[("equality_proxy", "RSTC")]) [*]

-- General splitting names part of a clause.
#guard_msgs (drop info) in
example {ι : Type} (p q r : ι → ι → Prop) (a : ι)
    (h : ∀ x y z, p x y ∨ q y z ∨ r z x) (hp : ∀ x y, ¬ p x y) (hq : ∀ x y, ¬ q x y)
    (hr : ∀ x y, ¬ r x y) : False := by
  vampire (options := #[("general_splitting", "on")]) [*]

-- Inequality splitting names a ground side of a disequality.
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ι) (a b : ι) (h1 : ∀ x, f x ≠ a) (h2 : f b = a) : False := by
  vampire (options := #[("inequality_splitting", "1")]) [*]

-- Condensation.
#guard_msgs (drop info) in
example {ι : Type} (p : ι → ι → Prop) (a : ι) (h : ∀ x y, p x a ∨ p y a) (hp : ∀ x, ¬ p x a) :
    False := by
  vampire (options := #[("condensation", "on"), ("avatar", "off")]) [*]

-- Unit-resulting resolution.
#guard_msgs (drop info) in
example {ι : Type} (p q r : ι → Prop) (a : ι) (h : ∀ x, ¬ p x ∨ ¬ q x ∨ r x) (hp : p a)
    (hq : q a) (hr : ¬ r a) : False := by
  vampire (options := #[("unit_resulting_resolution", "on")]) [*]

/-! ### More arithmetic -/

-- Arithmetic subterm generalization: a variable standing only under `x - y`.
#guard_msgs (drop info) in
example (p : ℤ → Prop) (h : ∀ x y : ℤ, p (x - y)) (hn : ¬ p 5) : False := by
  vampire (options := #[("arithmetic_subterm_generalizations", "force")]) [*]

-- Gaussian variable elimination.
#guard_msgs (drop info) in
example (p : ℤ → Prop) (h : ∀ x : ℤ, x ≠ 5 ∨ p x) (hn : ¬ p 5) : False := by
  vampire (options := #[("gaussian_variable_elimination", "force")]) [*]

-- The order's theory axioms: transitivity and totality.
#guard_msgs (drop info) in
example (x y z : ℤ) (h1 : x < y) (h2 : y < z) (h3 : z < x) : False := by vampire [*]

#guard_msgs (drop info) in
example (x y z : ℝ) (h1 : x ≤ y) (h2 : y ≤ z) (h3 : z < x) : False := by vampire [*]

-- ALASCA's Fourier–Motzkin over the rationals, and its superposition.
#guard_msgs (drop info) in
example (f : ℚ → ℚ) (a : ℚ) (h1 : ∀ x, f x > x) (h2 : f a < a) : False := by
  vampire (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- Backward demodulation, with forward demodulation off.
#guard_msgs (drop info) in
example {ι : Type} (f g : ι → ι) (p : ι → Prop) (a : ι) (hp : p (f (f a)))
    (h : ∀ x, f x = g x) (hn : ¬ p (g (g a))) : False := by
  vampire (options := #[("forward_demodulation", "off")]) [*]

-- ALASCA's superposition, into an uninterpreted function over the reals.
#guard_msgs (drop info) in
example (f : ℝ → ℝ) (a : ℝ) (h1 : ∀ x, f x = x + 1) (h2 : f a = a) : False := by
  vampire (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]
