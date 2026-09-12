-- SEU141+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.05s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU141+1.p`, beside this file. This is its statement in Lean:
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
variable {t_empty__set : ι}
variable {t_set__difference t_set__intersection2 : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_disjoint t_in t_subset : ι → ι → Prop}

theorem T_SEU141p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_set__intersection2 v2 v3) = (t_set__intersection2 v3 v2))) → (∀ v4 v5 : ι, ((v4 = v5) ↔ ((t_subset v4 v5) ∧ (t_subset v5 v4)))) → (∀ v6 v7 : ι, ((t_subset v6 v7) ↔ (∀ v8 : ι, ((t_in v8 v6) → (t_in v8 v7))))) → (∀ v9 v10 v11 : ι, ((v11 = (t_set__intersection2 v9 v10)) ↔ (∀ v12 : ι, ((t_in v12 v11) ↔ ((t_in v12 v9) ∧ (t_in v12 v10)))))) → (∀ v13 v14 v15 : ι, ((v15 = (t_set__difference v13 v14)) ↔ (∀ v16 : ι, ((t_in v16 v15) ↔ ((t_in v16 v13) ∧ (¬(t_in v16 v14))))))) → (∀ v17 v18 : ι, ((t_disjoint v17 v18) ↔ ((t_set__intersection2 v17 v18) = t_empty__set))) → True → True → True → (t_empty t_empty__set) → (∀ v19 v20 : ι, ((t_set__intersection2 v19 v19) = v19)) → (∃ v21 : ι, (t_empty v21)) → (∃ v22 : ι, (¬(t_empty v22))) → (∀ v23 v24 : ι, (t_subset v23 v23)) → (∀ v25 v26 : ι, ((t_disjoint v25 v26) → (t_disjoint v26 v25))) → (∀ v27 : ι, ((t_set__intersection2 v27 t_empty__set) = t_empty__set)) → (∀ v28 : ι, ((t_set__difference v28 t_empty__set) = v28)) → (∀ v29 : ι, ((t_set__difference t_empty__set v29) = t_empty__set)) → (∀ v30 v31 : ι, ((¬((¬(t_disjoint v30 v31)) ∧ (∀ v32 : ι, (¬(t_in v32 (t_set__intersection2 v30 v31)))))) ∧ (¬((∃ v33 : ι, (t_in v33 (t_set__intersection2 v30 v31))) ∧ (t_disjoint v30 v31))))) → (∀ v34 : ι, ((t_empty v34) → (v34 = t_empty__set))) → (∀ v35 v36 : ι, (¬((t_in v35 v36) ∧ (t_empty v36)))) → (∀ v37 v38 : ι, (¬((t_empty v37) ∧ (¬(v37 = v38)) ∧ (t_empty v38)))) → (∀ v39 v40 : ι, ((t_disjoint v39 v40) ↔ ((t_set__difference v39 v40) = v39))) := by
  vampire
