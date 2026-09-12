-- GRP683-10, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.19s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP683-10.p`, beside this file. This is its statement in Lean:
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
variable {t_x3 t_x4 t_x5 : ι}
variable {t_ld t_mult t_rd : ι → ι → ι}

theorem T_GRP683m10 : (∀ v0 : ι, ((t_ld v0 (t_mult v0 v0)) = v0)) → (∀ v1 : ι, ((t_rd (t_mult v1 v1) v1) = v1)) → (∀ v2 v3 : ι, ((t_mult v2 (t_ld v2 v3)) = (t_ld v2 (t_mult v2 v3)))) → (∀ v4 v5 : ι, ((t_mult (t_rd v4 v5) v5) = (t_rd (t_mult v4 v5) v5))) → (∀ v6 v7 v8 v9 : ι, ((t_ld (t_ld v6 v7) (t_mult (t_ld v6 v7) (t_mult v8 v9))) = (t_mult (t_ld v6 (t_mult v6 v8)) v9))) → (∀ v10 v11 v12 v13 : ι, ((t_rd (t_mult (t_mult v10 v11) (t_rd v12 v13)) (t_rd v12 v13)) = (t_mult v10 (t_rd (t_mult v11 v13) v13)))) → (∀ v14 v15 : ι, ((t_ld v14 (t_mult v14 (t_ld v15 v15))) = (t_rd (t_mult (t_rd v14 v14) v15) v15))) → (¬((t_mult t_x3 (t_ld t_x4 (t_mult t_x4 t_x5))) = (t_mult t_x3 t_x5))) → False := by
  vampire
