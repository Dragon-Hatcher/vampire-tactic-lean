-- GRP659-10, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.45s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP659-10.p`, beside this file. This is its statement in Lean:
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
variable {t_x1 t_x1__2 : ι → ι}
variable {t_ld t_mult t_rd t_tuple : ι → ι → ι}

theorem T_GRP659m10 : (∀ v0 v1 : ι, ((t_mult v0 (t_ld v0 v1)) = v1)) → (∀ v2 v3 : ι, ((t_ld v2 (t_mult v2 v3)) = v3)) → (∀ v4 v5 : ι, ((t_mult (t_rd v4 v5) v5) = v4)) → (∀ v6 v7 : ι, ((t_rd (t_mult v6 v7) v7) = v6)) → (∀ v8 v9 v10 : ι, ((t_mult (t_mult v8 (t_mult v9 v10)) v9) = (t_mult (t_mult v8 v9) (t_mult v10 v9)))) → (∀ v11 : ι, (¬((t_tuple (t_mult v11 (t_x1 v11)) (t_mult (t_x1__2 v11) v11)) = (t_tuple (t_x1 v11) (t_x1__2 v11))))) → False := by
  vampire
