import Mathlib
import Vampire

-- A polymorphic hypothesis has to be instantiated at `Nat` before a
-- first-order prover can use it.
example (f : ∀ {α : Type}, α → α) (h : ∀ {α : Type} (x : α), f x = x) (n : Nat) :
    f n = n := by
  vampire +mono [h]

example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire +mono

example {ι : Type} (g : ι → ι) (a : ι) (h : ∀ x, g x = x) : g (g a) = a := by
  vampire +mono

-- A lemma named in brackets can still be waiting on what it is stated of:
-- `mul_assoc` says nothing until a type and its `Semigroup` instance are
-- chosen, and choosing them is monomorphization's job. Handing it over as a
-- bare term forgets the universes it was abstracted over, and then nothing
-- can instantiate it -- the lemma reaches the prover as no axiom at all.
example (G : Type) [Group G] (h : ∀ x : G, x * x = 1) : ∀ a b : G, a * b = b * a := by
  vampire +mono [h, mul_assoc, one_mul]
