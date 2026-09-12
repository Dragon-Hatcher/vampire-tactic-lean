-- SEU056+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU056+1.p`, beside this file. This is its statement in Lean:
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
variable {t_powerset : ι → ι}
variable {t_relation__image t_set__intersection2 : ι → ι → ι}
variable {t_empty t_function t_one__to__one t_relation t_relation__empty__yielding : ι → Prop}
variable {t_disjoint t_element t_in t_subset : ι → ι → Prop}

theorem T_SEU056p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_function v2))) → (∀ v3 : ι, ((t_empty v3) → (t_relation v3))) → (∀ v4 : ι, (((t_relation v4) ∧ (t_empty v4) ∧ (t_function v4)) → ((t_relation v4) ∧ (t_function v4) ∧ (t_one__to__one v4)))) → (∀ v5 v6 : ι, ((t_set__intersection2 v5 v6) = (t_set__intersection2 v6 v5))) → (∀ v7 v8 : ι, ((t_disjoint v7 v8) ↔ ((t_set__intersection2 v7 v8) = t_empty__set))) → (∀ v9 : ι, (∃ v10 : ι, (t_element v10 v9))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (∀ v11 v12 : ι, (((t_relation v11) ∧ (t_relation v12)) → (t_relation (t_set__intersection2 v11 v12)))) → (∀ v13 : ι, (¬(t_empty (t_powerset v13)))) → (t_empty t_empty__set) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → (∀ v14 v15 : ι, ((t_set__intersection2 v14 v14) = v14)) → (∃ v16 : ι, ((t_relation v16) ∧ (t_function v16))) → (∃ v17 : ι, ((t_empty v17) ∧ (t_relation v17))) → (∀ v18 : ι, ((¬(t_empty v18)) → (∃ v19 : ι, ((t_element v19 (t_powerset v18)) ∧ (¬(t_empty v19)))))) → (∃ v20 : ι, (t_empty v20)) → (∃ v21 : ι, ((t_relation v21) ∧ (t_empty v21) ∧ (t_function v21))) → (∃ v22 : ι, ((¬(t_empty v22)) ∧ (t_relation v22))) → (∀ v23 : ι, (∃ v24 : ι, ((t_element v24 (t_powerset v23)) ∧ (t_empty v24)))) → (∃ v25 : ι, (¬(t_empty v25))) → (∃ v26 : ι, ((t_relation v26) ∧ (t_function v26) ∧ (t_one__to__one v26))) → (∃ v27 : ι, ((t_relation v27) ∧ (t_relation__empty__yielding v27))) → (∀ v28 v29 : ι, (t_subset v28 v28)) → (∀ v30 v31 : ι, ((t_disjoint v30 v31) → (t_disjoint v31 v30))) → (∀ v32 v33 v34 : ι, (((t_relation v34) ∧ (t_function v34)) → ((t_one__to__one v34) → ((t_relation__image v34 (t_set__intersection2 v32 v33)) = (t_set__intersection2 (t_relation__image v34 v32) (t_relation__image v34 v33)))))) → (∀ v35 : ι, ((t_relation v35) → ((t_relation__image v35 t_empty__set) = t_empty__set))) → (∀ v36 v37 : ι, ((t_in v36 v37) → (t_element v36 v37))) → (∀ v38 : ι, ((t_set__intersection2 v38 t_empty__set) = t_empty__set)) → (∀ v39 v40 : ι, ((t_element v39 v40) → ((t_empty v40) ∨ (t_in v39 v40)))) → (∀ v41 v42 : ι, ((t_element v41 (t_powerset v42)) ↔ (t_subset v41 v42))) → (∀ v43 v44 v45 : ι, (((t_in v43 v44) ∧ (t_element v44 (t_powerset v45))) → (t_element v43 v45))) → (∀ v46 v47 v48 : ι, (¬((t_in v46 v47) ∧ (t_element v47 (t_powerset v48)) ∧ (t_empty v48)))) → (∀ v49 : ι, ((t_empty v49) → (v49 = t_empty__set))) → (∀ v50 v51 : ι, (¬((t_in v50 v51) ∧ (t_empty v51)))) → (∀ v52 v53 : ι, (¬((t_empty v52) ∧ (¬(v52 = v53)) ∧ (t_empty v53)))) → (∀ v54 v55 v56 : ι, (((t_relation v56) ∧ (t_function v56)) → (((t_disjoint v54 v55) ∧ (t_one__to__one v56)) → (t_disjoint (t_relation__image v56 v54) (t_relation__image v56 v55))))) := by
  vampire
