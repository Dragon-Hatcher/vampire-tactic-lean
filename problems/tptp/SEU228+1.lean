-- SEU228+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.04s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU228+1.p`, beside this file. This is its statement in Lean:
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
variable {t_powerset t_relation__dom t_relation__rng : ι → ι}
variable {t_apply t_relation__image t_relation__inverse__image : ι → ι → ι}
variable {t_empty t_function t_one__to__one t_relation t_relation__empty__yielding : ι → Prop}
variable {t_element t_in t_subset : ι → ι → Prop}

theorem T_SEU228p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_function v2))) → (∀ v3 : ι, ((t_empty v3) → (t_relation v3))) → (∀ v4 : ι, (((t_relation v4) ∧ (t_empty v4) ∧ (t_function v4)) → ((t_relation v4) ∧ (t_function v4) ∧ (t_one__to__one v4)))) → (∀ v5 v6 : ι, ((v5 = v6) ↔ ((t_subset v5 v6) ∧ (t_subset v6 v5)))) → (∀ v7 : ι, (((t_relation v7) ∧ (t_function v7)) → (∀ v8 v9 : ι, ((v9 = (t_relation__image v7 v8)) ↔ (∀ v10 : ι, ((t_in v10 v9) ↔ (∃ v11 : ι, ((t_in v11 (t_relation__dom v7)) ∧ (t_in v11 v8) ∧ (v10 = (t_apply v7 v11)))))))))) → (∀ v12 : ι, (((t_relation v12) ∧ (t_function v12)) → (∀ v13 v14 : ι, ((v14 = (t_relation__inverse__image v12 v13)) ↔ (∀ v15 : ι, ((t_in v15 v14) ↔ ((t_in v15 (t_relation__dom v12)) ∧ (t_in (t_apply v12 v15) v13)))))))) → (∀ v16 v17 : ι, ((t_subset v16 v17) ↔ (∀ v18 : ι, ((t_in v18 v16) → (t_in v18 v17))))) → (∀ v19 : ι, (((t_relation v19) ∧ (t_function v19)) → (∀ v20 : ι, ((v20 = (t_relation__rng v19)) ↔ (∀ v21 : ι, ((t_in v21 v20) ↔ (∃ v22 : ι, ((t_in v22 (t_relation__dom v19)) ∧ (v21 = (t_apply v19 v22)))))))))) → True → True → True → True → True → True → True → True → (∀ v23 : ι, (∃ v24 : ι, (t_element v24 v23))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (∀ v25 : ι, (¬(t_empty (t_powerset v25)))) → (t_empty t_empty__set) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → (∀ v26 : ι, (((¬(t_empty v26)) ∧ (t_relation v26)) → (¬(t_empty (t_relation__dom v26))))) → (∀ v27 : ι, (((¬(t_empty v27)) ∧ (t_relation v27)) → (¬(t_empty (t_relation__rng v27))))) → (∀ v28 : ι, ((t_empty v28) → ((t_empty (t_relation__dom v28)) ∧ (t_relation (t_relation__dom v28))))) → (∀ v29 : ι, ((t_empty v29) → ((t_empty (t_relation__rng v29)) ∧ (t_relation (t_relation__rng v29))))) → (∃ v30 : ι, ((t_relation v30) ∧ (t_function v30))) → (∃ v31 : ι, ((t_empty v31) ∧ (t_relation v31))) → (∀ v32 : ι, ((¬(t_empty v32)) → (∃ v33 : ι, ((t_element v33 (t_powerset v32)) ∧ (¬(t_empty v33)))))) → (∃ v34 : ι, (t_empty v34)) → (∃ v35 : ι, ((t_relation v35) ∧ (t_empty v35) ∧ (t_function v35))) → (∃ v36 : ι, ((¬(t_empty v36)) ∧ (t_relation v36))) → (∀ v37 : ι, (∃ v38 : ι, ((t_element v38 (t_powerset v37)) ∧ (t_empty v38)))) → (∃ v39 : ι, (¬(t_empty v39))) → (∃ v40 : ι, ((t_relation v40) ∧ (t_function v40) ∧ (t_one__to__one v40))) → (∃ v41 : ι, ((t_relation v41) ∧ (t_relation__empty__yielding v41))) → (∀ v42 v43 : ι, (t_subset v42 v42)) → (∀ v44 v45 : ι, (((t_relation v45) ∧ (t_function v45)) → (t_subset (t_relation__image v45 (t_relation__inverse__image v45 v44)) v44))) → (∀ v46 v47 : ι, ((t_in v46 v47) → (t_element v46 v47))) → (∀ v48 v49 : ι, ((t_element v48 v49) → ((t_empty v49) ∨ (t_in v48 v49)))) → (∀ v50 v51 : ι, ((t_element v50 (t_powerset v51)) ↔ (t_subset v50 v51))) → (∀ v52 v53 v54 : ι, (((t_in v52 v53) ∧ (t_element v53 (t_powerset v54))) → (t_element v52 v54))) → (∀ v55 v56 v57 : ι, (¬((t_in v55 v56) ∧ (t_element v56 (t_powerset v57)) ∧ (t_empty v57)))) → (∀ v58 : ι, ((t_empty v58) → (v58 = t_empty__set))) → (∀ v59 v60 : ι, (¬((t_in v59 v60) ∧ (t_empty v60)))) → (∀ v61 v62 : ι, (¬((t_empty v61) ∧ (¬(v61 = v62)) ∧ (t_empty v62)))) → (∀ v63 v64 : ι, (((t_relation v64) ∧ (t_function v64)) → ((t_subset v63 (t_relation__rng v64)) → ((t_relation__image v64 (t_relation__inverse__image v64 v63)) = v63)))) := by
  vampire
