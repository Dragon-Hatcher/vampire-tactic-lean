-- NUM396+1, from TPTP v9.3.1 (NUM).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.11s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NUM396+1.p`, beside this file. This is its statement in Lean:
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
variable {t_powerset t_singleton t_succ : ι → ι}
variable {t_set__union2 : ι → ι → ι}
variable {t_empty t_epsilon__connected t_epsilon__transitive t_function t_one__to__one t_ordinal t_relation t_relation__empty__yielding t_relation__non__empty : ι → Prop}
variable {t_element t_in t_subset : ι → ι → Prop}

theorem T_NUM396p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_function v2))) → (∀ v3 : ι, ((t_ordinal v3) → ((t_epsilon__transitive v3) ∧ (t_epsilon__connected v3)))) → (∀ v4 : ι, ((t_empty v4) → (t_relation v4))) → (∀ v5 : ι, (((t_relation v5) ∧ (t_empty v5) ∧ (t_function v5)) → ((t_relation v5) ∧ (t_function v5) ∧ (t_one__to__one v5)))) → (∀ v6 : ι, (((t_epsilon__transitive v6) ∧ (t_epsilon__connected v6)) → (t_ordinal v6))) → (∀ v7 : ι, ((t_empty v7) → ((t_epsilon__transitive v7) ∧ (t_epsilon__connected v7) ∧ (t_ordinal v7)))) → (∀ v8 v9 : ι, ((t_set__union2 v8 v9) = (t_set__union2 v9 v8))) → (∀ v10 : ι, ((t_succ v10) = (t_set__union2 v10 (t_singleton v10)))) → (∀ v11 v12 : ι, ((v12 = (t_singleton v11)) ↔ (∀ v13 : ι, ((t_in v13 v12) ↔ (v13 = v11))))) → (∀ v14 : ι, ((t_epsilon__transitive v14) ↔ (∀ v15 : ι, ((t_in v15 v14) → (t_subset v15 v14))))) → (∀ v16 v17 v18 : ι, ((v18 = (t_set__union2 v16 v17)) ↔ (∀ v19 : ι, ((t_in v19 v18) ↔ ((t_in v19 v16) ∨ (t_in v19 v17)))))) → (∀ v20 : ι, ((t_epsilon__connected v20) ↔ (∀ v21 v22 : ι, (¬((t_in v21 v20) ∧ (t_in v22 v20) ∧ (¬(t_in v21 v22)) ∧ (¬(v21 = v22)) ∧ (¬(t_in v22 v21))))))) → (∀ v23 : ι, ((t_ordinal v23) ↔ ((t_epsilon__transitive v23) ∧ (t_epsilon__connected v23)))) → (∀ v24 : ι, (∃ v25 : ι, (t_element v25 v24))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (∀ v26 : ι, (¬(t_empty (t_succ v26)))) → (t_empty t_empty__set) → ((t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set) ∧ (t_function t_empty__set) ∧ (t_one__to__one t_empty__set) ∧ (t_empty t_empty__set) ∧ (t_epsilon__transitive t_empty__set) ∧ (t_epsilon__connected t_empty__set) ∧ (t_ordinal t_empty__set)) → (∀ v27 v28 : ι, (((t_relation v27) ∧ (t_relation v28)) → (t_relation (t_set__union2 v27 v28)))) → (∀ v29 v30 : ι, ((¬(t_empty v29)) → (¬(t_empty (t_set__union2 v29 v30))))) → (∀ v31 v32 : ι, ((¬(t_empty v31)) → (¬(t_empty (t_set__union2 v32 v31))))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → (∀ v33 v34 : ι, ((t_set__union2 v33 v33) = v33)) → (∃ v35 : ι, ((t_relation v35) ∧ (t_function v35))) → (∃ v36 : ι, ((t_epsilon__transitive v36) ∧ (t_epsilon__connected v36) ∧ (t_ordinal v36))) → (∃ v37 : ι, ((t_empty v37) ∧ (t_relation v37))) → (∃ v38 : ι, (t_empty v38)) → (∃ v39 : ι, ((t_relation v39) ∧ (t_empty v39) ∧ (t_function v39))) → (∃ v40 : ι, ((t_relation v40) ∧ (t_function v40) ∧ (t_one__to__one v40) ∧ (t_empty v40) ∧ (t_epsilon__transitive v40) ∧ (t_epsilon__connected v40) ∧ (t_ordinal v40))) → (∃ v41 : ι, ((¬(t_empty v41)) ∧ (t_relation v41))) → (∃ v42 : ι, (¬(t_empty v42))) → (∃ v43 : ι, ((t_relation v43) ∧ (t_function v43) ∧ (t_one__to__one v43))) → (∃ v44 : ι, ((t_relation v44) ∧ (t_relation__empty__yielding v44))) → (∃ v45 : ι, ((t_relation v45) ∧ (t_relation__empty__yielding v45) ∧ (t_function v45))) → (∃ v46 : ι, ((t_relation v46) ∧ (t_relation__non__empty v46) ∧ (t_function v46))) → (∀ v47 v48 : ι, (t_subset v47 v47)) → (∀ v49 : ι, ((t_set__union2 v49 t_empty__set) = v49)) → (∀ v50 v51 : ι, ((t_in v50 v51) → (t_element v50 v51))) → (∀ v52 v53 v54 : ι, (((t_subset v52 v53) ∧ (t_subset v53 v54)) → (t_subset v52 v54))) → (∀ v55 v56 : ι, ((t_element v55 v56) → ((t_empty v56) ∨ (t_in v55 v56)))) → (∀ v57 v58 : ι, ((t_element v57 (t_powerset v58)) ↔ (t_subset v57 v58))) → (∀ v59 v60 v61 : ι, (((t_in v59 v60) ∧ (t_element v60 (t_powerset v61))) → (t_element v59 v61))) → (∀ v62 v63 v64 : ι, (¬((t_in v62 v63) ∧ (t_element v63 (t_powerset v64)) ∧ (t_empty v64)))) → (∀ v65 : ι, ((t_empty v65) → (v65 = t_empty__set))) → (∀ v66 v67 : ι, (¬((t_in v66 v67) ∧ (t_empty v67)))) → (∀ v68 v69 : ι, (t_subset v68 (t_set__union2 v68 v69))) → (∀ v70 v71 : ι, (¬((t_empty v70) ∧ (¬(v70 = v71)) ∧ (t_empty v71)))) → (∀ v72 : ι, ((t_ordinal v72) → (t_ordinal (t_succ v72)))) := by
  vampire
