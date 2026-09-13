import Vampire

-- A polymorphic hypothesis has to be instantiated at `Nat` before a
-- first-order prover can use it.
example (f : ∀ {α : Type}, α → α) (h : ∀ {α : Type} (x : α), f x = x) (n : Nat) :
    f n = n := by
  vampire +mono [h]

example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire +mono

example {ι : Type} (g : ι → ι) (a : ι) (h : ∀ x, g x = x) : g (g a) = a := by
  vampire +mono
