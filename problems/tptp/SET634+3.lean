-- SET634+3, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.21s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET634+3.p`, beside this file. This is its statement in Lean:
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
variable {t_difference t_intersection : ι → ι → ι}
variable {t_member t_subset : ι → ι → Prop}

theorem T_SET634p3 : (∀ v0 v1 : ι, ((∀ v2 : ι, ((t_member v2 v0) ↔ (t_member v2 v1))) → (v0 = v1))) → (∀ v3 v4 v5 : ι, ((t_member v5 (t_intersection v3 v4)) ↔ ((t_member v5 v3) ∧ (t_member v5 v4)))) → (∀ v6 v7 v8 : ι, ((t_member v8 (t_difference v6 v7)) ↔ ((t_member v8 v6) ∧ (¬(t_member v8 v7))))) → (∀ v9 v10 : ι, ((v9 = v10) ↔ ((t_subset v9 v10) ∧ (t_subset v10 v9)))) → (∀ v11 v12 : ι, ((t_intersection v11 v12) = (t_intersection v12 v11))) → (∀ v13 v14 : ι, ((v13 = v14) ↔ (∀ v15 : ι, ((t_member v15 v13) ↔ (t_member v15 v14))))) → (∀ v16 v17 : ι, ((t_subset v16 v17) ↔ (∀ v18 : ι, ((t_member v18 v16) → (t_member v18 v17))))) → (∀ v19 : ι, (t_subset v19 v19)) → (∀ v20 v21 v22 : ι, ((t_intersection v20 (t_difference v21 v22)) = (t_difference (t_intersection v20 v21) v22))) := by
  vampire
