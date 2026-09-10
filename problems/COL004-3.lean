-- COL004-3, from TPTP v9.3.1 (COL).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `COL004-3.p`, beside this file. This is its statement in Lean:
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
variable {t_k t_s t_x t_y : ι}
variable {t_apply : ι → ι → ι}

theorem T_COL004m3 : (∀ v0 v1 v2 : ι, ((t_apply (t_apply (t_apply t_s v0) v1) v2) = (t_apply (t_apply v0 v2) (t_apply v1 v2)))) → (∀ v3 v4 : ι, ((t_apply (t_apply t_k v3) v4) = v3)) → (¬((t_apply (t_apply (t_apply (t_apply t_s (t_apply t_k (t_apply t_s (t_apply (t_apply t_s t_k) t_k)))) (t_apply (t_apply t_s (t_apply (t_apply t_s t_k) t_k)) (t_apply (t_apply t_s t_k) t_k))) t_x) t_y) = (t_apply t_y (t_apply (t_apply t_x t_x) t_y)))) → False := by
  vampire
