import Mathlib.Algebra.Order.Archimedean.Real.Basic
import Vampire

/-!
Small theorems chosen to reach as many of replay's code paths as they can, and
each of the bugs a benchmark problem once found, in one file so that Mathlib
and the tactic are loaded once. Each has to close its goal and say nothing but
what `info` says.

Where a path depends on how vampire goes about it, `options` asks for it: an
evaluation mode, ALASCA, cancellation. Under the default portfolio mode the
options only seed the schedule, whose strategies set their own, so a test that
needs a rule to run pins a single strategy of those options
(`mode := "vampire"`, which wants `cores := 1`). Which rules each test reaches
is worth checking with `trace.vampire` when one is added: a test can pass by a
proof that goes another way.
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
  vampire (mode := "vampire") (cores := 1) (options := #[("avatar_congruence_closure", "on")]) [*]

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

-- Polynomial evaluation leaves a literal it changes nothing in as written, not
-- in normal form, while it evaluates the clause's other literal.
#guard_msgs (drop info) in
example (x y u z w : ℝ) (h : 27 = 36 * x + 19 * y + 24 * u ∨ (-3) * z + 17 * z < w)
    (h1 : 27 ≠ 36 * x + 19 * y + 24 * u) (h2 : w ≤ 14 * z) : False := by
  vampire (options := #[("evaluation", "force")]) [*]

-- Polynomial evaluation refutes a literal of numerals written with `$lin_mul`:
-- `9/10 < x - y` evaluated to `x + -1·y`, and `y` rewritten into `x`.
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ℝ) (a : ι) (p : Prop) (x y : ℝ) (hp : ¬p)
    (h1 : 9/10 < 2 * x - y - x ∨ p) (h2 : f a = x) (h3 : f a = y) : False := by
  vampire (options := #[("evaluation", "force")]) [*]

-- Pushing unary minus.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (x y : ℤ) (h : f (-(x + -y)) = 0) : f (-x + y) = 0 := by
  vampire (mode := "vampire") (cores := 1) (options := #[("push_unary_minus", "on")]) [*]

-- Cancellation.
#guard_msgs (drop info) in
example (x y : ℤ) (h : x + y < y + 3) (h2 : 3 ≤ x) : False := by
  vampire (options := #[("cancellation", "force")]) [*]

-- Cancellation leaves a literal that compares no numbers as it is.
#guard_msgs (drop info) in
example (p : Prop) (x y : ℝ) (hp : ¬p) (h : p ∨ x + 3 < y + 3) (h2 : y ≤ x) : False := by
  vampire (options := #[("cancellation", "force"), ("evaluation", "force")]) [*]

-- ALASCA normalization: a comparison scaled by the gcd of its coefficients.
#guard_msgs (drop info) in
example (x y : ℝ) (h : 2 * x + 4 * y ≤ 6) (h2 : x + 2 * y > 3) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- ALASCA normalization: an equation turned round, and over the integers.
#guard_msgs (drop info) in
example (x : ℤ) (h : 2 * x = 2 * 3) (h2 : x ≠ 3) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- ALASCA normalization of a comparison with zero on either side: the
-- difference `t` it states is `r` or `-l`.
#guard_msgs (drop info) in
example (x : ℝ) (h1 : 0 < x) (h2 : x < 0) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- ALASCA normalization of `r + -l`, and of an equation it derives.
#guard_msgs (drop info) in
example (x y : ℝ) (h1 : x ≠ y) (h2 : x ≤ y) (h3 : y ≤ x) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- ALASCA normalization of an integer `≥`, which becomes `>` with one added.
#guard_msgs (drop info) in
example (x y : ℤ) (h : x ≥ y + 1) (h2 : x ≤ y) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

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
  vampire (mode := "vampire") (cores := 1) [*]

-- Factoring, with AVATAR off so that the clause is not split instead.
#guard_msgs (drop info) in
example {ι : Type} (p : ι → Prop) (a : ι) (h : ∀ x y, p x ∨ p y) (hp : ∀ x, ¬ p x) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("avatar", "off")]) [*]

-- Equality as a proxy predicate, with its axioms.
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ι) (a b : ι) (h1 : a = b) (h2 : f a ≠ f b) : False := by
  vampire (options := #[("equality_proxy", "RSTC")]) [*]

-- General splitting names part of a clause.
#guard_msgs (drop info) in
example {ι : Type} (p q r : ι → ι → Prop) (a : ι)
    (h : ∀ x y z, p x y ∨ q y z ∨ r z x) (hp : ∀ x y, ¬ p x y) (hq : ∀ x y, ¬ q x y)
    (hr : ∀ x y, ¬ r x y) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("general_splitting", "on")]) [*]

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
  vampire (mode := "vampire") (cores := 1) (options := #[("gaussian_variable_elimination", "force")]) [*]

-- The order's theory axioms: transitivity and totality.
#guard_msgs (drop info) in
example (x y z : ℤ) (h1 : x < y) (h2 : y < z) (h3 : z < x) : False := by vampire [*]

#guard_msgs (drop info) in
example (x y z : ℝ) (h1 : x ≤ y) (h2 : y ≤ z) (h3 : z < x) : False := by vampire [*]

-- ALASCA's Fourier–Motzkin over the rationals.
#guard_msgs (drop info) in
example (f : ℚ → ℚ) (a : ℚ) (h1 : ∀ x, f x > x) (h2 : f a < a) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- A literal dropped with the last occurrence of a variable, by a rule that
-- substitutes nothing: the premise is read in the conclusion's numbering, the
-- dropped variable at an element of its sort.
#guard_msgs (drop info) in
example {ι κ : Type} (p : ι → Prop) (f : κ → κ) (h : ∀ (x : κ) (y : ι), p y ∨ f x ≠ f x)
    (k : κ) (a : ι) (ha : ¬ p a) : False := by
  vampire [*]

-- Superposition over several sorts: the equation's `x : A` is left out of the
-- conclusion, whose own variable is the equation's `y : B`, and what `x` is
-- bound to is read in the conclusion's numbering, not the equation's.
#guard_msgs (drop info) in
example {A B C D : Type} (R : B → Prop) (m : C → B) (k : D → B → C) (g : A → D)
    (h1 : ∀ (x : A) (y : B), m (k (g x) y) = y) (h2 : ∀ u : C, ¬ R (m u)) (a : A) (b : B)
    (hb : R b) : False := by
  vampire [*]

-- Unification with abstraction: resolution and superposition defer what they
-- cannot unify into constraint literals, found by which literals they are once
-- literal selection has moved them (step 31's constraint is not where
-- superposition put it), and the resolved pair is complementary up to them.
#guard_msgs (drop info) in
example {ι : Type} (f : ℤ → ι) (p : ι → Prop) (b : ι) (q r : Prop) (a : ℤ) (h1 : f 1 = b ∨ q)
    (h2 : p (f (a + 2)) ∨ r) (h3 : ¬ p b) (h4 : ¬ q) (h5 : ¬ r) (ha : a + 2 ≤ 1)
    (hb : 1 ≤ a + 2) : False := by
  vampire (options := #[("unification_with_abstraction", "all"),
    ("abstracting_linear_arithmetic_superposition_calculus", "off"),
    ("forward_demodulation", "off"), ("backward_demodulation", "off"),
    ("forward_subsumption_resolution", "off"), ("avatar", "off"),
    ("function_definition_elimination", "none")]) [*]

-- A rewrite inside a shared term that mentions a variable: each of vampire's
-- terms is rebuilt once, and rewritten once, however often it is shared.
#guard_msgs (drop info) in
example {ι : Type} (p : ι → Prop) (h : ι → ι → ι) (g : ι → ι) (a : ι)
    (h1 : ∀ x, p (h (h (h (h (g x) (g x)) (h (g x) (g x))) (h (h (g x) (g x)) (h (g x) (g x)))) (h (h (h (g x) (g x)) (h (g x) (g x))) (h (h (g x) (g x)) (h (g x) (g x))))))
    (h2 : ∀ x, g x = x) (h3 : ¬ p (h (h (h (h (a) (a)) (h (a) (a))) (h (h (a) (a)) (h (a) (a)))) (h (h (h (a) (a)) (h (a) (a))) (h (h (a) (a)) (h (a) (a)))))) : False := by
  vampire [*]

-- Backward demodulation, with forward demodulation off.
#guard_msgs (drop info) in
example {ι : Type} (f g : ι → ι) (p : ι → Prop) (a : ι) (hp : p (f (f a)))
    (h : ∀ x, f x = g x) (hn : ¬ p (g (g a))) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("function_definition_elimination", "none"), ("forward_demodulation", "off")]) [*]

-- ALASCA's superposition, into an uninterpreted function over the reals.
#guard_msgs (drop info) in
example (f : ℝ → ℝ) (a : ℝ) (h1 : ∀ x, f x = x + 1) (h2 : f a = a) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- ALASCA's superposition under an uninterpreted function, which no decision
-- procedure sees through: the rewrite is a congruence.
#guard_msgs (drop info) in
example (f g : ℝ → ℝ) (a : ℝ) (h1 : ∀ x, f x = x + 1) (h2 : g (f a) ≠ g (a + 1)) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- ALASCA's superposition into an uninterpreted predicate, with the equation
-- solved for the term it rewrites (`0 = 2 x - f x` as `f x = 2 x`).
#guard_msgs (drop info) in
example (f : ℝ → ℝ) (p : ℝ → Prop) (a : ℝ) (h1 : ∀ x, f x = 2 * x) (h2 : p (f a)) (h3 : ¬ p (a + a)) :
    False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- ALASCA's superposition from a clause with another literal, carried.
#guard_msgs (drop info) in
example (f g : ℝ → ℝ) (a : ℝ) (h1 : ∀ x, x < 0 ∨ f x = x + 1) (h2 : 0 < a) (h3 : g (f a) ≠ g (a + 1)) :
    False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- ALASCA's superposition by a unifier that solved `X + 1 = a` for `X`: the
-- rewritten term and the equation's side are equal as numbers, not one term.
#guard_msgs (drop info) in
example (f g : ℝ → ℝ) (a : ℝ) (h1 : ∀ x, f (x + 1) = x) (h2 : g (f a) ≠ g (a - 1)) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- ALASCA's superposition with a rational coefficient to divide by.
#guard_msgs (drop info) in
example (f g : ℝ → ℝ) (a : ℝ) (h1 : ∀ x, 2 * f x = x) (h2 : g (f a) ≠ g (a / 2)) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- ALASCA's demodulation by a unit equation, under an uninterpreted function.
#guard_msgs (drop info) in
example (f g : ℝ → ℝ) (p : ℝ → Prop) (a : ℝ) (h1 : ∀ x, f x = x + 1) (h2 : p (g (f a)))
    (h3 : ¬ p (g (a + 1))) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("alasca_demodulation", "on"), ("function_definition_elimination", "none")]) [*]

-- ALASCA's demodulation rewrites the whole clause: here the term is in two of
-- its literals.
#guard_msgs (drop info) in
example (f g : ℝ → ℝ) (p q : ℝ → Prop) (a : ℝ) (h1 : f a = 2 * a) (h2 : p (g (f a)) ∨ q (f a))
    (h3 : ¬ p (g (a + a))) (h4 : ¬ q (2 * a)) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("alasca_demodulation", "on"), ("function_definition_elimination", "none")]) [*]

-- ALASCA's demodulation into an equation over an uninterpreted sort.
#guard_msgs (drop info) in
example (α : Type) (f : ℝ → ℝ) (g : ℝ → α) (a : ℝ) (b : α) (h1 : ∀ x, f x = x + 1)
    (h2 : g (f a) = b) (h3 : g (a + 1) ≠ b) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("alasca_demodulation", "on"), ("function_definition_elimination", "none")]) [*]

-- Resolution by ALASCA's unifier, which solved `X + 1 = a` for `X`: the two
-- literals are complementary as numbers.
#guard_msgs (drop info) in
example (p : ℝ → Prop) (a : ℝ) (h1 : ∀ x, p (x + 1)) (h2 : ¬ p a) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- ALASCA's Fourier–Motzkin by a unifier that solved `X + 1 = a`: the atoms
-- are equal as numbers, not one term.
#guard_msgs (drop info) in
example (f : ℝ → ℝ) (a : ℝ) (h1 : ∀ x, f (x + 1) > 0) (h2 : f a < 0) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- ALASCA's inequality factoring, by a unifier that solved `X + 1 = Y + 2`.
#guard_msgs (drop info) in
example (f : ℝ → ℝ) (h1 : ∀ x y, f (x + 1) > 0 ∨ f (y + 2) > 0) (h2 : ∀ x y, f x ≤ 0 ∨ f y ≤ 0) :
    False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("avatar", "off"), ("function_definition_elimination", "none")]) [*]

-- ALASCA's equality factoring, by a unifier that solved `X + 1 = Y + 2`.
#guard_msgs (drop info) in
example (f : ℝ → ℝ) (h1 : ∀ x y, f (x + 1) = 0 ∨ f (y + 2) = 0) (h2 : ∀ x y, f x ≠ 0 ∨ f y ≠ 0) :
    False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("avatar", "off"), ("function_definition_elimination", "none")]) [*]

-- ALASCA's term factoring, by a unifier that solved `X + 1 = Y + 2`.
#guard_msgs (drop info) in
example (f : ℝ → ℝ) (h1 : ∀ x y, f (x + 1) + f (y + 2) > 0) (h2 : ∀ x y, f x + f y < 0) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("avatar", "off"), ("function_definition_elimination", "none")]) [*]

-- ALASCA's superposition by a unifier that deferred `g X + g Y = g a + g b`,
-- then term factoring under the same kind of constraint.
#guard_msgs (drop info) in
example (f g : ℝ → ℝ) (a b : ℝ) (h1 : ∀ x y, f (g x + g y) = x + y) (h2 : f (g a + g b) ≠ a + b) :
    False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

/-! ### VIRAS quantifier elimination -/

-- A term and an infinitesimal: `x` just above `a`.
#guard_msgs (drop info) in
example (p : Prop) (a b : ℝ) (h : ∀ x : ℝ, x ≤ a ∨ x ≥ b ∨ p) (hab : a < b) (hp : ¬ p) :
    False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- The bottom of the order: `x` below every place a literal changes.
#guard_msgs (drop info) in
example (p : Prop) (a : ℝ) (h : ∀ x : ℝ, x > a ∨ p) (hp : ¬ p) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- An infinitesimal past an equation's zero, wherever that zero lies.
#guard_msgs (drop info) in
example (p : Prop) (a b : ℝ) (h : ∀ x : ℝ, 3 * x ≤ a ∨ 2 * x = b ∨ p) (hp : ¬ p) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]
