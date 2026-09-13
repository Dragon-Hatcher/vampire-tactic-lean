-- MGT004+1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT004+1.p`, beside this file. This is its statement in Lean:
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
variable {t_accountability t_reliability t_reorganization t_survival__chance : ι → ι → ι → Prop}

theorem T_MGT004p1 : (∀ v0 v1 : ι, ((t_organization v0 v1) → (∃ v2 : ι, (t_reliability v0 v2 v1)))) → (∀ v3 v4 : ι, ((t_organization v3 v4) → (∃ v5 : ι, (t_accountability v3 v5 v4)))) → (∀ v6 v7 v8 v9 v10 v11 v12 v13 v14 v15 : ι, (((t_organization v6 v14) ∧ (t_organization v7 v15) ∧ (t_reliability v6 v8 v14) ∧ (t_reliability v7 v9 v15) ∧ (t_accountability v6 v10 v14) ∧ (t_accountability v7 v11 v15) ∧ (t_survival__chance v6 v12 v14) ∧ (t_survival__chance v7 v13 v15) ∧ (t_greater v9 v8) ∧ (t_greater v11 v10)) → (t_greater v13 v12))) → (∀ v16 v17 v18 v19 v20 v21 v22 v23 v24 : ι, (((t_organization v16 v21) ∧ (t_organization v16 v22) ∧ (t_reorganization v16 v23 v24) ∧ (t_reliability v16 v17 v21) ∧ (t_reliability v16 v18 v22) ∧ (t_accountability v16 v19 v21) ∧ (t_accountability v16 v20 v22) ∧ (¬(t_greater v23 v21)) ∧ (t_greater v22 v21) ∧ (¬(t_greater v22 v24))) → ((t_greater v17 v18) ∧ (t_greater v19 v20)))) → (∀ v25 v26 v27 v28 v29 v30 v31 : ι, (((t_organization v25 v28) ∧ (t_organization v25 v29) ∧ (t_reorganization v25 v30 v31) ∧ (t_survival__chance v25 v26 v28) ∧ (t_survival__chance v25 v27 v29) ∧ (¬(t_greater v30 v28)) ∧ (t_greater v29 v28) ∧ (¬(t_greater v29 v31))) → (t_greater v26 v27))) := by
  vampire
