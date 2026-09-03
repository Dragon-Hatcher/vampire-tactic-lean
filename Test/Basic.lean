import Vampire

/-!
A goal, translated to Vampire and closed by replaying the refutation it found.

The replay is a port of Vampire's Lean code generator: one lemma per inference, proved
by the tactic script the generator would have written, chained together. `#print axioms`
says what the result rests on.
-/

theorem resolution_two_step (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by
  vampire

#print axioms resolution_two_step
