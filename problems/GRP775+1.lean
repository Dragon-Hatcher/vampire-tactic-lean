-- GRP775+1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.13s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP775+1.p`, beside this file. This is its statement in Lean:
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
variable {t_product : ι → ι → ι}
variable {t_d t_l t_r : ι → ι → Prop}

theorem T_GRP775p1 : (∀ v0 v1 v2 : ι, ((t_product (t_product v2 v1) v0) = (t_product v2 (t_product v1 v0)))) → (∀ v3 : ι, ((t_product v3 v3) = v3)) → (∀ v4 v5 : ι, ((t_l v4 v5) ↔ (((t_product v4 v5) = v4) ∧ ((t_product v5 v4) = v5)))) → (∀ v6 v7 : ι, ((t_r v6 v7) ↔ (((t_product v6 v7) = v7) ∧ ((t_product v7 v6) = v6)))) → (∀ v8 v9 : ι, ((t_d v8 v9) ↔ (∃ v10 : ι, ((t_r v8 v10) ∧ (t_l v10 v9))))) → (∀ v11 v12 : ι, ((t_d v11 v12) ↔ (((t_product v11 (t_product v12 v11)) = v11) ∧ ((t_product v12 (t_product v11 v12)) = v12)))) := by
  vampire
