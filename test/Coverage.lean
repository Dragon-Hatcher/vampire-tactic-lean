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
  vampire (mode := "vampire") (cores := 1) (options := #[("newcnf", "on")]) [*]

-- A clause that no longer mentions a variable the formula quantified, which a
-- skolem it stays bound under still takes: `c(z, w)` of `∀ x, ∃ y, …`, the
-- skolem for `y` taking `x`.
#guard_msgs (drop info) in
example {ι : Type} (b : ι → ι → Prop) (c : ι → ι → Prop) (a : ι)
    (h : ∀ x, ∃ y, (∀ z w, c z w) ∧ b x y) (hb : ∀ x y, ¬ b x y ∨ ¬ b y x) (hc : ¬ c a a) :
    False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("newcnf", "on")]) [h, hb, hc]

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

-- Equality: superposition, and an equation turned round.
#guard_msgs (drop info) in
example {ι : Type} (f g : ι → ι) (a b : ι) (h1 : ∀ x, f (g x) = x) (h2 : g a = b)
    : f b = a := by
  vampire [*]

-- AVATAR: a disjunction of ground facts is split into components, with
-- subsumption resolution off, which would close it first.
#guard_msgs (drop info) in
example (p q r s : Prop) (h1 : p ∨ q) (h2 : r ∨ s) (h3 : p → r → False) (h4 : p → s → False)
    (h5 : q → r → False) (h6 : q → s → False) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("forward_subsumption_resolution", "off")]) [*]

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
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "simple")]) [*]

-- Polynomial evaluation: monomials merged.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (x : ℤ) (h : f (x + x + 2 * 3) = 0) : f (2 * x + 6) = 0 := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "force")]) [*]

-- Polynomial evaluation: a floor's integer part taken out.
#guard_msgs (drop info) in
example (f : ℝ → ℝ) (x : ℝ) (h : f (⌊x + 1⌋) = 0) : f (⌊x⌋ + 1) = 0 := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "force")]) [*]

-- Polynomial evaluation: integer division and remainder of numerals.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (h : f (7 / 2 + 7 % 2) = 0) : f 4 = 0 := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "force")]) [*]

-- Polynomial evaluation leaves a literal it changes nothing in as written, not
-- in normal form, while it evaluates the clause's other literal.
#guard_msgs (drop info) in
example (x y u z w : ℝ) (h : 27 = 36 * x + 19 * y + 24 * u ∨ (-3) * z + 17 * z < w)
    (h1 : 27 ≠ 36 * x + 19 * y + 24 * u) (h2 : w ≤ 14 * z) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "force")]) [*]

-- Polynomial evaluation refutes a literal of numerals written with `$lin_mul`:
-- `9/10 < x - y` evaluated to `x + -1·y`, and `y` rewritten into `x`.
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ℝ) (a : ι) (p : Prop) (x y : ℝ) (hp : ¬p)
    (h1 : 9/10 < 2 * x - y - x ∨ p) (h2 : f a = x) (h3 : f a = y) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "force")]) [*]

-- Pushing unary minus.
#guard_msgs (drop info) in
example (f : ℤ → ℤ) (x y : ℤ) (h : f (-(x + -y)) = 0) : f (-x + y) = 0 := by
  vampire (mode := "vampire") (cores := 1) (options := #[("push_unary_minus", "on")]) [*]

-- Cancellation.
#guard_msgs (drop info) in
example (x y : ℤ) (h : x + y < y + 3) (h2 : 3 ≤ x) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("cancellation", "force")]) [*]

-- Cancellation leaves a literal that compares no numbers as it is.
#guard_msgs (drop info) in
example (p : Prop) (x y : ℝ) (hp : ¬p) (h : p ∨ x + 3 < y + 3) (h2 : y ≤ x) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("cancellation", "force"), ("evaluation", "force")]) [*]

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
  vampire (mode := "vampire") (cores := 1) (options := #[("forward_subsumption_resolution", "off")]) [*]

-- A component that is a negative ground literal, which AVATAR names by its
-- complement.
#guard_msgs (drop info) in
example {ι : Type} (p q : ι → Prop) (a : ι) (h : ∀ y, ¬ p a ∨ q y) (hp : p a)
    (hq : ∀ y, ¬ q y) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("forward_subsumption_resolution", "off")]) [*]

-- Factoring, with AVATAR off so that the clause is not split instead.
#guard_msgs (drop info) in
example {ι : Type} (p : ι → Prop) (a : ι) (h : ∀ x y, p x ∨ p y) (hp : ∀ x, ¬ p x) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("avatar", "off"), ("forward_subsumption_resolution", "off")]) [*]

-- Equality as a proxy predicate, with each set of its axioms: reflexivity,
-- symmetry, transitivity and congruence.
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ι) (a b : ι) (h1 : a = b) (h2 : f a ≠ f b) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("equality_proxy", "R")]) [*]
#guard_msgs (drop info) in
example {ι : Type} (a b : ι) (h1 : a = b) (h2 : b ≠ a) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("equality_proxy", "RS")]) [*]
#guard_msgs (drop info) in
example {ι : Type} (a b c : ι) (h1 : a = b) (h2 : b = c) (h3 : a ≠ c) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("equality_proxy", "RST")]) [*]
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ι) (a b : ι) (h1 : a = b) (h2 : f a ≠ f b) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("equality_proxy", "RSTC")]) [*]

-- Inequality splitting names a ground side of a disequality.
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ι) (a b : ι) (h1 : ∀ x, f x ≠ a) (h2 : f b = a) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("inequality_splitting", "1")]) [*]

-- Condensation.
#guard_msgs (drop info) in
example {ι : Type} (p : ι → ι → Prop) (a : ι) (h : ∀ x y, p x a ∨ p y a) (hp : ∀ x, ¬ p x a) :
    False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("condensation", "on"), ("avatar", "off")]) [*]

-- Unit-resulting resolution.
#guard_msgs (drop info) in
example {ι : Type} (p q r : ι → Prop) (a : ι) (h : ∀ x, ¬ p x ∨ ¬ q x ∨ r x) (hp : p a)
    (hq : q a) (hr : ¬ r a) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("unit_resulting_resolution", "on")]) [*]

-- Pure predicate removal: `r` occurs only positively, so it is replaced by
-- `True`, which the formula follows to by monotonicity.
#guard_msgs (drop info) in
example (p q r : Prop) (h : (r ∨ p) ∧ q) (h2 : ¬q) : False := by
  vampire (mode := "vampire") (cores := 1) [h, h2]

-- The same under a quantifier.
#guard_msgs (drop info) in
example {ι : Type} (p q r : ι → Prop) (a : ι) (h : ∀ x, (r x ∨ p x) ∧ q x)
    (h2 : ¬q a) : False := by
  vampire (mode := "vampire") (cores := 1) [h, h2]

-- A junction left with one part is that part, which the junction around it
-- merges: `(p ∧ (a ∨ b)) ∨ c` is `c ∨ a ∨ b`.
#guard_msgs (drop info) in
example (p a b c : Prop) (h : (p ∧ (a ∨ b)) ∨ c) (ha : ¬a) (hb : ¬b) (hc : ¬c) : False := by
  vampire (mode := "vampire") (cores := 1) [h, ha, hb, hc]

-- A body that becomes a quantifier of the same kind is merged into the one
-- around it, whose variables go onto the front of its block one by one: in
-- the reverse of their order.
#guard_msgs (drop info) in
example {α : Type} (p : Prop) (q : α → α → α → Prop) (a : α) (h : ∀ x y : α, p ∧ ∀ z, q x y z)
    (hq : ¬ q a a a) : False := by
  vampire (mode := "vampire") (cores := 1) [h, hq]
#guard_msgs (drop info) in
example {α : Type} (p : Prop) (q : α → α → α → Prop) (a : α) (h : ∃ x y : α, p ∧ ∃ z, q x y z)
    (hq : ∀ x y z, ¬ q x y z) : False := by
  vampire (mode := "vampire") (cores := 1) [h, hq]

-- Unused predicate definition removal: `d` is used only positively, so its
-- definition is kept one way round, and then `q`, pure in what is left, is
-- removed from it.
#guard_msgs (drop info) in
example {ι : Type} (d p q : ι → Prop) (a : ι) (h1 : ∀ x, d x ↔ p x ∧ q x) (h2 : d a)
    (h3 : ¬p a) : False := by
  vampire (mode := "vampire") (cores := 1) [h1, h2, h3]

/-! ### More arithmetic -/

-- Arithmetic subterm generalization of an ALASCA normal form, `X0 + t ≠ 0`
-- made `0 ≠ X0`: vampire shares the equality with its sides turned round.
-- (SMT-LIB LIA jain_7, under the strategy that found it.)
#guard_msgs (drop info) in
example
    (s_c_main__x_0 : ℤ)
    (s_c_main__y_0 : ℤ)
    (s_c_main__z_0 : ℤ)
    (h1 : ((∃ (v0 : ℤ) (v1 : ℤ) (v2 : ℤ) (v3 : ℤ), ((((2097152 : ℤ) * v0) + ((2097152 : ℤ) * v1) + ((2097152 : ℤ) * v2) + ((2097152 : ℤ) * v3)) = s_c_main__y_0)) ∧ (∃ (v4 : ℤ) (v5 : ℤ) (v6 : ℤ) (v7 : ℤ), ((((1048576 : ℤ) * v4) + ((1048576 : ℤ) * v5) + ((1048576 : ℤ) * v6) + ((1048576 : ℤ) * v7)) = s_c_main__x_0)) ∧ (∃ (v8 : ℤ) (v9 : ℤ) (v10 : ℤ) (v11 : ℤ), ((((4194304 : ℤ) * v8) + ((4194304 : ℤ) * v9) + ((4194304 : ℤ) * v10) + ((4194304 : ℤ) * v11)) = s_c_main__z_0))))
    (h2 : (¬((∃ (v12 : ℤ), (((4194304 : ℤ) * v12) = s_c_main__z_0)) ∧ (∃ (v13 : ℤ), (((1048576 : ℤ) * v13) = s_c_main__x_0)) ∧ (∃ (v14 : ℤ), (s_c_main__y_0 = ((2097152 : ℤ) * v14)))))) :
    False := by
  vampire (strategy := "ott+21_1024_to=lakbo:sil=128000:alasca=on:wl=60:uwa=alasca_main:nwc=0.5:updr=off:random_seed=93277:cond=on:i=16:fgj=on:ep=RS:asg=force:nm=10:hb=500:rtra=on:qa=off:rawr=on_1") [*]

-- Arithmetic subterm generalization: a variable standing only under `x - y`.
#guard_msgs (drop info) in
example (p : ℤ → Prop) (h : ∀ x y : ℤ, p (x - y)) (hn : ¬ p 5) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("arithmetic_subterm_generalizations", "force")]) [*]

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
  vampire (mode := "vampire") (cores := 1) (options := #[("unification_with_abstraction", "all"),
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

-- Constrained resolution through a product: ALASCA's unifier reads a product
-- of two terms as an uninterpreted symbol and descends into it, deferring the
-- sums inside, `f x + f b ≠ f d + f e`.
#guard_msgs (drop info) in
example (f : ℝ → ℝ) (p : ℝ → Prop) (b c d e : ℝ) (h1 : ∀ x, p ((f x + f b) * c))
    (h2 : ¬ p ((f d + f e) * c)) (h3 : ∀ x, x < d ∨ f x + f b = f d + f e) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- Constrained resolution inside a sum: ALASCA's unifier matches `f (…)` with
-- `f (…)` among the summands of `c + f (…)` and descends into them, deferring
-- the sums inside, `g x + g b ≠ g d + g e`.
#guard_msgs (drop info) in
example (f g : ℝ → ℝ) (p : ℝ → Prop) (b c d e : ℝ) (h1 : ∀ x, p (f (g x + g b) + c))
    (h2 : ¬ p (f (g d + g e) + c)) (h3 : ∀ x, x < d ∨ g x + g b = g d + g e) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- Constrained resolution deferring two pairs from one sum, one for each symbol
-- its summands are grouped by.
#guard_msgs (drop info) in
example (f g : ℝ → ℝ) (p q : ℝ → Prop) (b d e : ℝ) (h1 : ∀ x, p (f x + f b + (g x + g b)))
    (h2 : ¬ p (f d + f e + (g d + g e))) (h3 : ∀ x, f x + f b = f d + f e ∨ q x)
    (h4 : ∀ x, g x + g b = g d + g e ∨ q x) (h5 : ∀ x, ¬ q x) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
    ("function_definition_elimination", "none")]) [*]

-- Constrained resolution of `X0 * -5 = 10`: the deferred pair is between the
-- equation's sides, and only those are arithmetic -- normalising the whole
-- literal would make an equation it unfolds to `True`. (TPTP ARI115_1, under
-- the strategy that found it.)
#guard_msgs (drop info) in
example : ∃ x : ℤ, x * -5 = 10 := by
  vampire (strategy := "ott+21_1024_to=lakbo:sil=128000:alasca=on:wl=60:uwa=alasca_main:nwc=0.5:random_seed=93277:cond=on:i=16:fgj=on:ep=RS:asg=force:nm=10:hb=500:rtra=on:qa=off:rawr=on_1")

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

/-! ### Sites of vampire's the coverage metric found untested

Each reaches one place in vampire where an inference is made that nothing else
in the suite did (`bench/coverage.py`); the options pin what makes vampire take
that path.
-/

-- An input formula that is `$false`, clausified by the old CNF and by the new.
#guard_msgs (drop info) in
example (p : Prop) (h : False) : p := by vampire (mode := "vampire") (cores := 1) [*]

#guard_msgs (drop info) in
example (p : Prop) (h : False) : p := by
  vampire (mode := "vampire") (cores := 1) (options := #[("newcnf", "on")]) [*]

-- Fast condensation: `P(X) ∨ P(a)` is `P(a)`, at the matcher it found.
#guard_msgs (drop info) in
example {ι : Type} (P : ι → Prop) (a : ι) (h : ∀ x, P x ∨ P a) (hn : ¬ P a) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("condensation", "fast")]) [*]

-- Theory flattening names `a + 1` by a variable: the step is replayed once the
-- equation between them is substituted.
#guard_msgs (drop info) in
example (P : ℤ → Prop) (a : ℤ) (h : P (a + 1)) (hn : ∀ x, ¬ P (x + 1)) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("theory_flattening", "on")]) [*]

-- Equality factoring, outside ALASCA.
#guard_msgs (drop info) in
example {ι : Type} (a b c : ι) (h : ∀ x y : ι, x = y ∨ x = a) (hb : b ≠ a) (hc : c ≠ a)
    (hbc : b ≠ c) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("avatar", "off")]) [*]

-- Gaussian variable elimination, with equality resolution with deletion off,
-- which would otherwise have eliminated the variable first: its conclusion is
-- the premise at `x := a + 1`, which it records.
#guard_msgs (drop info) in
example (P : ℤ → Prop) (a : ℤ) (h : ∀ x : ℤ, x = a + 1 → P x) (hn : ¬ P (a + 1)) : False := by
  vampire (mode := "vampire") (cores := 1)
    (options := #[("gaussian_variable_elimination", "force"),
      ("equality_resolution_with_deletion", "off")]) [*]

-- Forward subsumption demodulation, and the subsumption resolution it does when
-- the rewrite would leave a disequality trivial. Under DISCOUNT, whose
-- simplifying clauses are the active ones, so the main premise has to be one
-- derived after the side premise is active; plain subsumption resolution, off
-- in the second, would otherwise get there first.
#guard_msgs (drop info) in
example {ι : Type} (p s t : ι → Prop) (f : ι → ι → ι) (g : ι → ι) (a b : ι)
    (h1 : ∀ x y, g x = a → f x y = x) (h2 : ∀ x, s x → g x = a → ¬ p (f x b))
    (h7 : s a) (h3 : p a) (h5 : t a) (h6 : ∀ x, t x → g x = a) : False := by
  vampire (mode := "vampire") (cores := 1)
    (options := #[("forward_subsumption_demodulation", "on"), ("avatar", "off"),
      ("saturation_algorithm", "discount")]) [*]

#guard_msgs (drop info) in
example {ι : Type} (q s t : ι → Prop) (f : ι → ι → ι) (g : ι → ι) (a b : ι)
    (h1 : ∀ x y, g x = a → f x y = x) (h2 : ∀ x, s x → g x = a → f x b ≠ x ∨ q x)
    (h7 : s a) (h3 : ¬ q a) (h5 : t a) (h6 : ∀ x, t x → g x = a) : False := by
  vampire (mode := "vampire") (cores := 1)
    (options := #[("forward_subsumption_demodulation", "on"), ("avatar", "off"),
      ("saturation_algorithm", "discount"), ("forward_subsumption_resolution", "off")]) [*]

-- ALASCA's strong normalization of comparisons: `a ≥ b` is `a > b ∨ a = b`, two
-- literals of one, which follow from it by the arithmetic.
#guard_msgs (drop info) in
example (a b : ℝ) (h1 : a ≥ b) (h2 : a < b) : False := by
  vampire (mode := "vampire") (cores := 1)
    (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"),
      ("alasca_strong_normalziation", "on")]) [*]

/-! Theory axioms, with evaluation off so that vampire has to use them: each
goal denies what one axiom states, and each axiom is replayed as its
`Vampire.Lemmas.tha_*` lemma at the clause's variables. -/

-- Nothing lies strictly between an integer and the next.
#guard_msgs (drop info) in
example (x y : ℤ) (h1 : x < y) (h2 : y < x + 1) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

-- Distributivity.
#guard_msgs (drop info) in
example (x y z : ℤ) (h : x * (y + z) ≠ x * y + x * z) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

#guard_msgs (drop info) in
example (f : ℤ → ℤ) (a : ℤ) (h : f (a + 0) ≠ f a) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

#guard_msgs (drop info) in
example (f : ℤ → ℤ) (a b : ℤ) (h : f (-(a + b)) ≠ f (-b + -a)) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

#guard_msgs (drop info) in
example (a b : ℤ) (hb : b ≠ 0) (h : a ≠ b * (a / b) + a % b) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

#guard_msgs (drop info) in
example (a b : ℤ) (hb : b ≠ 0) (h : a % b < 0) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

-- The remainder's upper bound is `|b| - 1`, and `|b|` is `b` or `-b` by its sign.
#guard_msgs (drop info) in
example (a b : ℤ) (hb : 0 < b) (h : b ≤ a % b) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

#guard_msgs (drop info) in
example (a b : ℤ) (hb : b < 0) (h : -b ≤ a % b) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

-- A field's division: the inverse of what is not zero is not zero.
#guard_msgs (drop info) in
example (x : ℝ) (hx : x ≠ 0) (h : 1 / x = 0) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

#guard_msgs (drop info) in
example (x y : ℝ) (hx : x ≠ 0) (h : (y * x) / x ≠ y) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

#guard_msgs (drop info) in
example (x : ℝ) (h : (⌊x⌋ : ℝ) ≤ x - 1) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

#guard_msgs (drop info) in
example (x : ℝ) (h : x + 1 ≤ (⌈x⌉ : ℝ)) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("evaluation", "off"), ("theory_axioms", "on")]) [*]

-- Integer Fourier-Motzkin, whose third premise says a term is an integer, and
-- floor Fourier-Motzkin, where the atom itself is a floor: certified by
-- `Vampire.Lemmas`, instantiated at the terms vampire recorded.
#guard_msgs (drop info) in
example (x : ℝ) (h1 : 0 < (⌊x⌋ : ℝ)) (h2 : (⌊x⌋ : ℝ) < 1) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

#guard_msgs (drop info) in
example (x y : ℝ) (h1 : 2 * (⌊x⌋ : ℝ) < (⌊y⌋ : ℝ)) (h2 : (⌊y⌋ : ℝ) < 2 * (⌊x⌋ : ℝ) + 1) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

#guard_msgs (drop info) in
example (x y : ℝ) (h : (⌊y⌋ : ℝ) = 2 * x + 1) (h1 : 0 < x) (h2 : 2 * x < 1) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- The integral term's atom has a negative coefficient in it.
#guard_msgs (drop info) in
example (x y z : ℝ) (h : (⌊z⌋ : ℝ) = x - 3 * y) (h1 : 3 * y < x) (h2 : x < 3 * y + 1) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- One bound not strict.
#guard_msgs (drop info) in
example (x y : ℝ) (h : (⌊y⌋ : ℝ) = x) (h1 : 0 ≤ x) (h2 : x < 1) (h3 : x ≠ 0) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- Floor elimination: `2 ⌊x⌋ = 1` has no integer solution.
#guard_msgs (drop info) in
example (x : ℝ) (P : Prop) (h : 2 * (⌊x⌋ : ℝ) = 1 ∨ P) (hp : ¬P) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

#guard_msgs (drop info) in
example (x y : ℝ) (h : ∀ z : ℝ, 3 * (⌊z⌋ : ℝ) = 2 ∨ z = y) (h2 : x ≠ y) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- Coherence: an integer taken out of a floor.
#guard_msgs (drop info) in
example (x y : ℝ) (h : (⌊y⌋ : ℝ) = x) (h2 : (⌊x + 1/2⌋ : ℝ) ≠ x) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

#guard_msgs (drop info) in
example (x y a : ℝ) (h : (⌊y⌋ : ℝ) = 2 * x) (h2 : (⌊2 * x + a⌋ : ℝ) ≠ 2 * x + ⌊a⌋) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- Coherence normalization: what a floor equals is its own floor.
#guard_msgs (drop info) in
example (a b : ℝ) (h : (⌊a⌋ : ℝ) = 2 * b) (h2 : (⌊2 * b⌋ : ℝ) ≠ 2 * b) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on")]) [*]

-- ALASCA's axioms of nonlinear monotonicity.
#guard_msgs (drop info) in
example (x y z : ℝ) (hx : 0 < x) (h : y < z) (h2 : x * z ≤ x * y) : False := by
  vampire (mode := "vampire") (cores := 1) (options := #[("abstracting_linear_arithmetic_superposition_calculus", "on"), ("theory_axioms", "on")]) [*]

-- Function definition introduction, whose definitions vampire states reoriented.
#guard_msgs (drop info) in
example (α : Type) (f : α → α → α) (g : α → α) (a : α)
    (h1 : ∀ x y, f (f x y) y = f x y) (h2 : ∀ x, g (f x x) = x) : g (f (f (f a a) a) a) = a := by
  vampire (mode := "vampire") (cores := 1) (options := #[("function_definition_introduction", "1")]) [*]
