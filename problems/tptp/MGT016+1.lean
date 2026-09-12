-- MGT016+1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT016+1.p`, beside this file. This is its statement in Lean:
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
variable {t_class t_complexity t_inertia t_reorganization t_reorganization__type : ι → ι → ι → Prop}

theorem T_MGT016p1 : (∀ v0 v1 : ι, ((t_organization v0 v1) → (∃ v2 : ι, (t_inertia v0 v2 v1)))) → (∀ v3 v4 v5 v6 v7 v8 v9 v10 v11 : ι, (((t_organization v3 v10) ∧ (t_organization v4 v11) ∧ (t_class v3 v5 v10) ∧ (t_class v4 v5 v11) ∧ (t_complexity v3 v6 v10) ∧ (t_complexity v4 v7 v11) ∧ (t_inertia v3 v8 v10) ∧ (t_inertia v4 v9 v11) ∧ (t_greater v7 v6)) → (t_greater v9 v8))) → (∀ v12 v13 v14 v15 v16 v17 v18 v19 v20 : ι, (((t_organization v12 v18) ∧ (t_organization v13 v18) ∧ (¬(t_organization v13 v20)) ∧ (t_class v12 v15 v18) ∧ (t_class v13 v15 v18) ∧ (t_reorganization v12 v18 v19) ∧ (t_reorganization v13 v18 v20) ∧ (t_reorganization__type v12 v14 v18) ∧ (t_reorganization__type v13 v14 v18) ∧ (t_inertia v12 v16 v18) ∧ (t_inertia v13 v17 v18) ∧ (t_greater v17 v16)) → (t_greater v19 v20))) → (∀ v21 v22 v23 v24 v25 v26 v27 v28 v29 : ι, (((t_organization v21 v27) ∧ (t_organization v22 v27) ∧ (¬(t_organization v22 v29)) ∧ (t_class v21 v24 v27) ∧ (t_class v22 v24 v27) ∧ (t_reorganization v21 v27 v28) ∧ (t_reorganization v22 v27 v29) ∧ (t_reorganization__type v21 v23 v27) ∧ (t_reorganization__type v22 v23 v27) ∧ (t_complexity v21 v25 v27) ∧ (t_complexity v22 v26 v27) ∧ (t_greater v26 v25)) → (t_greater v28 v29))) := by
  vampire
