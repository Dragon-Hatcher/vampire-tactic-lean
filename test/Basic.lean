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
