-- PUZ029-1, from TPTP v9.3.1 (PUZ).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.00s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `PUZ029-1.p`, beside this file. This is its statement in Lean:
-- one type variable for TPTP's single sort, functors as functions into it, predicates
-- as functions into `Prop`, and the whole problem as `axiom₁ → … → axiomₙ → goal`.
-- `False` as the goal means the problem states no conjecture and asks for a refutation.
--
-- Only `Vampire` is imported, for the `vampire` tactic that closes the goal.
import Vampire
set_option maxHeartbeats 0
set_option maxRecDepth 100000000
set_option linter.all false
universe u
variable {ι : Type u}
variable [inst : Inhabited ι]
variable {t_piggy : ι}
variable {t_balloonist t_dances__on__tightropes t_eats__lunch__in__public t_eats__pennybuns t_fat t_has__umbrella t_liable__to__giddiness t_looks__ridiculous t_old t_pig t_treated__with__respect t_wise t_young : ι → Prop}

theorem T_PUZ029m1 : (∀ v0 : ι, ((t_dances__on__tightropes v0) ∨ (t_eats__pennybuns v0) ∨ (t_old v0))) → (∀ v1 : ι, ((¬(t_pig v1)) ∨ (¬(t_liable__to__giddiness v1)) ∨ (t_treated__with__respect v1))) → (∀ v2 : ι, ((¬(t_wise v2)) ∨ (¬(t_balloonist v2)) ∨ (t_has__umbrella v2))) → (∀ v3 : ι, ((¬(t_looks__ridiculous v3)) ∨ (¬(t_eats__pennybuns v3)) ∨ (¬(t_eats__lunch__in__public v3)))) → (∀ v4 : ι, ((¬(t_balloonist v4)) ∨ (¬(t_young v4)) ∨ (t_liable__to__giddiness v4))) → (∀ v5 : ι, ((¬(t_fat v5)) ∨ (¬(t_looks__ridiculous v5)) ∨ (t_dances__on__tightropes v5) ∨ (t_eats__lunch__in__public v5))) → (∀ v6 : ι, ((¬(t_liable__to__giddiness v6)) ∨ (¬(t_wise v6)) ∨ (¬(t_dances__on__tightropes v6)))) → (∀ v7 : ι, ((¬(t_pig v7)) ∨ (¬(t_has__umbrella v7)) ∨ (t_looks__ridiculous v7))) → (∀ v8 : ι, ((t_dances__on__tightropes v8) ∨ (¬(t_treated__with__respect v8)) ∨ (t_fat v8))) → (∀ v9 : ι, ((t_young v9) ∨ (t_old v9))) → (∀ v10 : ι, ((¬(t_young v10)) ∨ (¬(t_old v10)))) → (t_wise t_piggy) → (t_young t_piggy) → (t_pig t_piggy) → (t_balloonist t_piggy) → False := by
  vampire
