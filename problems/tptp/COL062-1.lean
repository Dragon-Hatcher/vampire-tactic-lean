-- COL062-1, from TPTP v9.3.1 (COL).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.08s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `COL062-1.p`, beside this file. This is its statement in Lean:
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
variable {t_b t_t : ι}
variable {t_f t_g t_h : ι → ι}
variable {t_apply : ι → ι → ι}

theorem T_COL062m1 : (∀ v0 v1 v2 : ι, ((t_apply (t_apply (t_apply t_b v0) v1) v2) = (t_apply v0 (t_apply v1 v2)))) → (∀ v3 v4 : ι, ((t_apply (t_apply t_t v3) v4) = (t_apply v4 v3))) → (∀ v5 : ι, (¬((t_apply (t_apply (t_apply v5 (t_f v5)) (t_g v5)) (t_h v5)) = (t_apply (t_apply (t_f v5) (t_h v5)) (t_g v5))))) → False := by
  vampire
