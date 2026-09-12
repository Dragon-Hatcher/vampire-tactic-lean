-- SEU184+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.33s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU184+1.p`, beside this file. This is its statement in Lean:
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
variable {t_powerset t_relation__dom t_relation__rng t_singleton : ι → ι}
variable {t_ordered__pair t_relation__composition t_unordered__pair : ι → ι → ι}
variable {t_empty t_relation : ι → Prop}
variable {t_element t_in t_subset : ι → ι → Prop}

theorem T_SEU184p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_unordered__pair v2 v3) = (t_unordered__pair v3 v2))) → (∀ v4 v5 : ι, ((v4 = v5) ↔ ((t_subset v4 v5) ∧ (t_subset v5 v4)))) → (∀ v6 v7 : ι, ((t_subset v6 v7) ↔ (∀ v8 : ι, ((t_in v8 v6) → (t_in v8 v7))))) → (∀ v9 : ι, ((t_relation v9) → (∀ v10 : ι, ((v10 = (t_relation__dom v9)) ↔ (∀ v11 : ι, ((t_in v11 v10) ↔ (∃ v12 : ι, (t_in (t_ordered__pair v11 v12) v9)))))))) → (∀ v13 : ι, ((t_relation v13) → (∀ v14 : ι, ((v14 = (t_relation__rng v13)) ↔ (∀ v15 : ι, ((t_in v15 v14) ↔ (∃ v16 : ι, (t_in (t_ordered__pair v16 v15) v13)))))))) → (∀ v17 v18 : ι, ((t_ordered__pair v17 v18) = (t_unordered__pair (t_unordered__pair v17 v18) (t_singleton v17)))) → (∀ v19 : ι, ((t_relation v19) → (∀ v20 : ι, ((t_relation v20) → (∀ v21 : ι, ((t_relation v21) → ((v21 = (t_relation__composition v19 v20)) ↔ (∀ v22 v23 : ι, ((t_in (t_ordered__pair v22 v23) v21) ↔ (∃ v24 : ι, ((t_in (t_ordered__pair v22 v24) v19) ∧ (t_in (t_ordered__pair v24 v23) v20)))))))))))) → True → True → True → True → True → True → True → (∀ v25 v26 : ι, (((t_relation v25) ∧ (t_relation v26)) → (t_relation (t_relation__composition v25 v26)))) → True → (∀ v27 : ι, (∃ v28 : ι, (t_element v28 v27))) → (∀ v29 : ι, (¬(t_empty (t_powerset v29)))) → (t_empty t_empty__set) → (∀ v30 v31 : ι, (¬(t_empty (t_ordered__pair v30 v31)))) → (∀ v32 : ι, (¬(t_empty (t_singleton v32)))) → (∀ v33 v34 : ι, (¬(t_empty (t_unordered__pair v33 v34)))) → (∃ v35 : ι, ((t_empty v35) ∧ (t_relation v35))) → (∀ v36 : ι, ((¬(t_empty v36)) → (∃ v37 : ι, ((t_element v37 (t_powerset v36)) ∧ (¬(t_empty v37)))))) → (∃ v38 : ι, (t_empty v38)) → (∀ v39 : ι, (∃ v40 : ι, ((t_element v40 (t_powerset v39)) ∧ (t_empty v40)))) → (∃ v41 : ι, (¬(t_empty v41))) → (∀ v42 v43 : ι, (t_subset v42 v42)) → (∀ v44 v45 : ι, ((t_in v44 v45) → (t_element v44 v45))) → (∀ v46 v47 : ι, ((t_element v46 v47) → ((t_empty v47) ∨ (t_in v46 v47)))) → (∀ v48 v49 : ι, ((t_element v48 (t_powerset v49)) ↔ (t_subset v48 v49))) → (∀ v50 : ι, ((t_relation v50) → (∀ v51 : ι, ((t_relation v51) → (t_subset (t_relation__dom (t_relation__composition v50 v51)) (t_relation__dom v50)))))) → (∀ v52 v53 v54 : ι, (((t_in v52 v53) ∧ (t_element v53 (t_powerset v54))) → (t_element v52 v54))) → (∀ v55 v56 v57 : ι, (¬((t_in v55 v56) ∧ (t_element v56 (t_powerset v57)) ∧ (t_empty v57)))) → (∀ v58 : ι, ((t_empty v58) → (v58 = t_empty__set))) → (∀ v59 v60 : ι, (¬((t_in v59 v60) ∧ (t_empty v60)))) → (∀ v61 v62 : ι, (¬((t_empty v61) ∧ (¬(v61 = v62)) ∧ (t_empty v62)))) → (∀ v63 : ι, ((t_relation v63) → (∀ v64 : ι, ((t_relation v64) → ((t_subset (t_relation__rng v63) (t_relation__dom v64)) → ((t_relation__dom (t_relation__composition v63 v64)) = (t_relation__dom v63))))))) := by
  vampire
