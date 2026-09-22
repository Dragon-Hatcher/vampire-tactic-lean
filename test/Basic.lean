import Mathlib.Data.Real.Basic
import Vampire

example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [hp, hpq]

example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [*]

example {ι : Type} (a b : ι) (h : a = b) : b = a := by vampire [h]

example {ι : Type} (p : ι → Prop) (a : ι) (h : ∀ x, p x) : p a := by vampire [h]

-- Type class goals are not first-order, so they need monomorphizing first.
example (x : ℝ) (h : 0 < x) : 0 < x := by vampire +mono [h]

-- Equality through a proxy predicate, whose congruence axiom says a predicate
-- holds of equal things alike; and the replacement reorders the clause.
example {ι : Type} (f g : ι → ι) (p : ι → Prop) (h : ∀ x, g x = f x)
    (hp : ∀ x, p (g x)) (a : ι) : p (f a) := by
  vampire (options := #[("equality_proxy", "RSTC")]) [h, hp]

-- `x ≠ a` is `¬(x = a)`, which vampire can state the other way round.
example {ι : Type} (f : ι → ι) (a b c : ι) (h : ∀ x, f x = a) (h2 : b = f c)
    (h3 : ∀ x, x ≠ a ∨ x ≠ b) : False := by
  vampire [h, h2, h3]

-- General splitting: a clause cut in two at a variable few literals share.
example {ι : Type} (p s : ι → Prop) (r q : ι → ι → Prop) (a : ι)
    (h : ∀ x y z, p x ∨ r x y ∨ q y z ∨ s z) (h1 : ∀ x, ¬ p x) (h2 : ∀ y z, ¬ q y z)
    (h3 : ∀ x y, ¬ r x y) (h4 : ∀ z, ¬ s z) : False := by
  vampire (options := #[("general_splitting", "on")]) [h, h1, h2, h3, h4]

-- Inner rewriting: a clause's own disequality rewrites its other literals.
example {ι : Type} (f g : ι → ι) (p : ι → Prop) (a b : ι)
    (h : f a ≠ b ∨ p (g (f a)) ∨ p (f a)) (h1 : ¬ p (g b)) (h2 : ¬ p b)
    (h3 : f a = b) : False := by
  vampire (options := #[("inner_rewriting", "on"), ("forward_demodulation", "off")])
    [h, h1, h2, h3]

-- Subsumption equality resolution: a disequality whose sides unify, dropped.
example {ι : Type} (f : ι → ι) (p : ι → ι → Prop) (a : ι)
    (h : ∀ x y z, f x ≠ f y ∨ p z x) (h1 : ∀ x, ¬ p x a) : False := by
  vampire (options := #[("subsumption_equality_resolution", "on")]) [h, h1]

-- Truth values absorbed out of a formula, by core's own absorption lemmas.
example (p q : Prop)
    (h : (p ∨ False) ∧ (True → q) ∧ (False → p) ∧ (q ↔ True) ∧ (p ↔ False ∨ p))
    (h2 : ¬ q ∨ (¬ p ∧ True)) : False := by
  vampire [h, h2]
