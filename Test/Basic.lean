import Vampire

/-!
The `vampire` tactic, closing a goal with a proof term replayed from the prover.

The problem sent to Vampire is still hard-coded, so only this shape works — but the
proof is real: `#print axioms` shows no `sorryAx`.
-/

theorem resolution_two_step (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by
  vampire

#print axioms resolution_two_step
