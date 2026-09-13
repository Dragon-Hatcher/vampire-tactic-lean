-- ALG245-1, from TPTP v9.3.1 (ALG).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.72s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `ALG245-1.p`, beside this file. This is its statement in Lean:
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
variable {t_a t_b t_c t_d : ι}
variable {t_mult : ι → ι → ι}

theorem T_ALG245m1 : (∀ v0 v1 v2 : ι, ((t_mult v0 (t_mult v1 v2)) = (t_mult (t_mult v0 v1) (t_mult v0 v2)))) → (∀ v3 v4 v5 : ι, ((t_mult (t_mult v3 v4) v5) = (t_mult (t_mult v3 v5) (t_mult v4 v5)))) → (∀ v6 v7 v8 v9 : ι, ((t_mult (t_mult (t_mult v6 v7) (t_mult v8 v9)) (t_mult (t_mult (t_mult v6 v7) (t_mult v8 v9)) (t_mult (t_mult v6 v8) (t_mult v7 v9)))) = (t_mult (t_mult v6 v8) (t_mult v7 v9)))) → (∀ v10 v11 v12 v13 : ι, ((t_mult (t_mult (t_mult (t_mult v10 v11) (t_mult v12 v13)) (t_mult (t_mult v10 v12) (t_mult v11 v13))) (t_mult (t_mult v10 v12) (t_mult v11 v13))) = (t_mult (t_mult v10 v11) (t_mult v12 v13)))) → (∀ v14 : ι, ((t_mult v14 v14) = v14)) → (¬((t_mult (t_mult (t_mult t_a t_b) (t_mult t_c t_d)) (t_mult (t_mult t_a t_c) (t_mult t_b t_d))) = (t_mult (t_mult (t_mult t_a t_c) (t_mult t_b t_d)) (t_mult (t_mult t_a t_b) (t_mult t_c t_d))))) → False := by
  vampire
