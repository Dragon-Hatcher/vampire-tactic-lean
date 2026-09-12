-- SEU214+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.49s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU214+1.p`, beside this file. This is its statement in Lean:
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
variable {t_relation__dom t_singleton : ι → ι}
variable {t_apply t_ordered__pair t_relation__composition t_unordered__pair : ι → ι → ι}
variable {t_empty t_function t_relation t_relation__empty__yielding : ι → Prop}
variable {t_element t_in : ι → ι → Prop}

theorem T_SEU214p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_function v2))) → (∀ v3 : ι, ((t_empty v3) → (t_relation v3))) → (∀ v4 v5 : ι, ((t_unordered__pair v4 v5) = (t_unordered__pair v5 v4))) → (∀ v6 : ι, (((t_relation v6) ∧ (t_function v6)) → (∀ v7 v8 : ι, (((t_in v7 (t_relation__dom v6)) → ((v8 = (t_apply v6 v7)) ↔ (t_in (t_ordered__pair v7 v8) v6))) ∧ ((¬(t_in v7 (t_relation__dom v6))) → ((v8 = (t_apply v6 v7)) ↔ (v8 = t_empty__set))))))) → (∀ v9 : ι, ((t_relation v9) → (∀ v10 : ι, ((v10 = (t_relation__dom v9)) ↔ (∀ v11 : ι, ((t_in v11 v10) ↔ (∃ v12 : ι, (t_in (t_ordered__pair v11 v12) v9)))))))) → (∀ v13 v14 : ι, ((t_ordered__pair v13 v14) = (t_unordered__pair (t_unordered__pair v13 v14) (t_singleton v13)))) → (∀ v15 : ι, ((t_relation v15) → (∀ v16 : ι, ((t_relation v16) → (∀ v17 : ι, ((t_relation v17) → ((v17 = (t_relation__composition v15 v16)) ↔ (∀ v18 v19 : ι, ((t_in (t_ordered__pair v18 v19) v17) ↔ (∃ v20 : ι, ((t_in (t_ordered__pair v18 v20) v15) ∧ (t_in (t_ordered__pair v20 v19) v16)))))))))))) → True → True → True → True → True → True → (∀ v21 v22 : ι, (((t_relation v21) ∧ (t_relation v22)) → (t_relation (t_relation__composition v21 v22)))) → True → (∀ v23 : ι, (∃ v24 : ι, (t_element v24 v23))) → (∀ v25 v26 : ι, (((t_empty v25) ∧ (t_relation v26)) → ((t_empty (t_relation__composition v26 v25)) ∧ (t_relation (t_relation__composition v26 v25))))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (∀ v27 v28 : ι, (((t_relation v27) ∧ (t_function v27) ∧ (t_relation v28) ∧ (t_function v28)) → ((t_relation (t_relation__composition v27 v28)) ∧ (t_function (t_relation__composition v27 v28))))) → (t_empty t_empty__set) → (∀ v29 v30 : ι, (¬(t_empty (t_ordered__pair v29 v30)))) → (∀ v31 : ι, (¬(t_empty (t_singleton v31)))) → (∀ v32 v33 : ι, (¬(t_empty (t_unordered__pair v32 v33)))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → (∀ v34 : ι, (((¬(t_empty v34)) ∧ (t_relation v34)) → (¬(t_empty (t_relation__dom v34))))) → (∀ v35 : ι, ((t_empty v35) → ((t_empty (t_relation__dom v35)) ∧ (t_relation (t_relation__dom v35))))) → (∀ v36 v37 : ι, (((t_empty v36) ∧ (t_relation v37)) → ((t_empty (t_relation__composition v36 v37)) ∧ (t_relation (t_relation__composition v36 v37))))) → (∃ v38 : ι, ((t_relation v38) ∧ (t_function v38))) → (∃ v39 : ι, ((t_empty v39) ∧ (t_relation v39))) → (∃ v40 : ι, (t_empty v40)) → (∃ v41 : ι, ((¬(t_empty v41)) ∧ (t_relation v41))) → (∃ v42 : ι, (¬(t_empty v42))) → (∃ v43 : ι, ((t_relation v43) ∧ (t_relation__empty__yielding v43))) → (∀ v44 v45 : ι, ((t_in v44 v45) → (t_element v44 v45))) → (∀ v46 v47 : ι, ((t_element v46 v47) → ((t_empty v47) ∨ (t_in v46 v47)))) → (∀ v48 : ι, ((t_empty v48) → (v48 = t_empty__set))) → (∀ v49 v50 : ι, (¬((t_in v49 v50) ∧ (t_empty v50)))) → (∀ v51 v52 : ι, (¬((t_empty v51) ∧ (¬(v51 = v52)) ∧ (t_empty v52)))) → (∀ v53 v54 : ι, (((t_relation v54) ∧ (t_function v54)) → (∀ v55 : ι, (((t_relation v55) ∧ (t_function v55)) → ((t_in v53 (t_relation__dom (t_relation__composition v55 v54))) → ((t_apply (t_relation__composition v55 v54) v53) = (t_apply v54 (t_apply v55 v53)))))))) := by
  vampire
