import Vampire

example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire +showQuery [hp, hpq]

example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [*]

example {ι : Type} (f : ι → ι) (a : ι) (h : ∀ x, f x = x) : f (f a) = a := by vampire [h]
