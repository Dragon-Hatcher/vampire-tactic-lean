-- GRP411-1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.64s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP411-1.p`, beside this file. This is its statement in Lean:
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
variable {t_a3 t_b3 t_c3 : ι}
variable {t_inverse : ι → ι}
variable {t_multiply : ι → ι → ι}

theorem T_GRP411m1 : (∀ v0 v1 v2 : ι, ((t_multiply (t_multiply (t_inverse (t_multiply v0 (t_inverse (t_multiply v1 v2)))) (t_multiply v0 (t_inverse v2))) (t_inverse (t_multiply (t_inverse v2) v2))) = v1)) → (¬((t_multiply (t_multiply t_a3 t_b3) t_c3) = (t_multiply t_a3 (t_multiply t_b3 t_c3)))) → False := by
  vampire
