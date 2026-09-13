import Mathlib.Data.Real.Basic
import Vampire

example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [hp, hpq]

example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [*]

example {ι : Type} (a b : ι) (h : a = b) : b = a := by vampire [h]

example {ι : Type} (p : ι → Prop) (a : ι) (h : ∀ x, p x) : p a := by vampire [h]

-- Type class goals are not first-order, so they need monomorphizing first.
example (x : ℝ) (h : 0 < x) : 0 < x := by vampire +mono [h]
