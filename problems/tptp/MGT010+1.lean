-- MGT010+1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT010+1.p`, beside this file. This is its statement in Lean:
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
variable {t_greater t_organization : ι → ι → Prop}
variable {t_accountability t_class t_reliability t_reorganization__free t_reproducibility t_size : ι → ι → ι → Prop}

theorem T_MGT010p1 : (∀ v0 v1 : ι, ((t_organization v0 v1) → (∃ v2 : ι, (t_reproducibility v0 v2 v1)))) → (∀ v3 v4 v5 v6 v7 v8 v9 v10 v11 v12 : ι, (((t_organization v3 v5) ∧ (t_organization v4 v6) ∧ (t_reliability v3 v7 v5) ∧ (t_reliability v4 v8 v6) ∧ (t_accountability v3 v9 v5) ∧ (t_accountability v4 v10 v6) ∧ (t_reproducibility v3 v11 v5) ∧ (t_reproducibility v4 v12 v6)) → ((t_greater v12 v11) ↔ ((t_greater v8 v7) ∧ (t_greater v10 v9))))) → (∀ v13 v14 v15 v16 v17 v18 v19 v20 v21 : ι, (((t_organization v13 v20) ∧ (t_organization v14 v21) ∧ (t_reorganization__free v13 v20 v20) ∧ (t_reorganization__free v14 v21 v21) ∧ (t_class v13 v15 v20) ∧ (t_class v14 v15 v21) ∧ (t_reproducibility v13 v16 v20) ∧ (t_reproducibility v14 v17 v21) ∧ (t_size v13 v18 v20) ∧ (t_size v14 v19 v21) ∧ (t_greater v19 v18)) → (t_greater v17 v16))) → (∀ v22 v23 v24 v25 v26 v27 v28 v29 v30 v31 v32 : ι, (((t_organization v22 v31) ∧ (t_organization v23 v32) ∧ (t_reorganization__free v22 v31 v31) ∧ (t_reorganization__free v23 v32 v32) ∧ (t_class v22 v24 v31) ∧ (t_class v23 v24 v32) ∧ (t_reliability v22 v25 v31) ∧ (t_reliability v23 v26 v32) ∧ (t_accountability v22 v27 v31) ∧ (t_accountability v23 v28 v32) ∧ (t_size v22 v29 v31) ∧ (t_size v23 v30 v32) ∧ (t_greater v30 v29)) → ((t_greater v26 v25) ∧ (t_greater v28 v27)))) := by
  vampire
