-- SEU037+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU037+1.p`, beside this file. This is its statement in Lean:
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
variable {t_powerset t_relation__dom : ι → ι}
variable {t_apply t_relation__dom__restriction t_set__intersection2 : ι → ι → ι}
variable {t_empty t_function t_one__to__one t_relation t_relation__empty__yielding : ι → Prop}
variable {t_element t_in t_subset : ι → ι → Prop}

theorem T_SEU037p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_function v2))) → (∀ v3 : ι, ((t_empty v3) → (t_relation v3))) → (∀ v4 : ι, (((t_relation v4) ∧ (t_empty v4) ∧ (t_function v4)) → ((t_relation v4) ∧ (t_function v4) ∧ (t_one__to__one v4)))) → (∀ v5 v6 : ι, ((t_set__intersection2 v5 v6) = (t_set__intersection2 v6 v5))) → (∀ v7 v8 : ι, ((t_relation v7) → (t_relation (t_relation__dom__restriction v7 v8)))) → (∀ v9 : ι, (∃ v10 : ι, (t_element v10 v9))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (∀ v11 v12 : ι, (((t_relation v11) ∧ (t_relation__empty__yielding v11)) → ((t_relation (t_relation__dom__restriction v11 v12)) ∧ (t_relation__empty__yielding (t_relation__dom__restriction v11 v12))))) → (∀ v13 v14 : ι, (((t_relation v13) ∧ (t_relation v14)) → (t_relation (t_set__intersection2 v13 v14)))) → (∀ v15 : ι, (¬(t_empty (t_powerset v15)))) → (t_empty t_empty__set) → (∀ v16 v17 : ι, (((t_relation v16) ∧ (t_function v16)) → ((t_relation (t_relation__dom__restriction v16 v17)) ∧ (t_function (t_relation__dom__restriction v16 v17))))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → (∀ v18 : ι, (((¬(t_empty v18)) ∧ (t_relation v18)) → (¬(t_empty (t_relation__dom v18))))) → (∀ v19 : ι, ((t_empty v19) → ((t_empty (t_relation__dom v19)) ∧ (t_relation (t_relation__dom v19))))) → (∀ v20 v21 : ι, ((t_set__intersection2 v20 v20) = v20)) → (∃ v22 : ι, ((t_relation v22) ∧ (t_function v22))) → (∃ v23 : ι, ((t_empty v23) ∧ (t_relation v23))) → (∀ v24 : ι, ((¬(t_empty v24)) → (∃ v25 : ι, ((t_element v25 (t_powerset v24)) ∧ (¬(t_empty v25)))))) → (∃ v26 : ι, (t_empty v26)) → (∃ v27 : ι, ((t_relation v27) ∧ (t_empty v27) ∧ (t_function v27))) → (∃ v28 : ι, ((¬(t_empty v28)) ∧ (t_relation v28))) → (∀ v29 : ι, (∃ v30 : ι, ((t_element v30 (t_powerset v29)) ∧ (t_empty v30)))) → (∃ v31 : ι, (¬(t_empty v31))) → (∃ v32 : ι, ((t_relation v32) ∧ (t_function v32) ∧ (t_one__to__one v32))) → (∃ v33 : ι, ((t_relation v33) ∧ (t_relation__empty__yielding v33))) → (∀ v34 v35 : ι, (t_subset v34 v34)) → (∀ v36 v37 : ι, ((t_in v36 v37) → (t_element v36 v37))) → (∀ v38 : ι, ((t_set__intersection2 v38 t_empty__set) = t_empty__set)) → (∀ v39 v40 : ι, ((t_element v39 v40) → ((t_empty v40) ∨ (t_in v39 v40)))) → (∀ v41 v42 : ι, ((t_element v41 (t_powerset v42)) ↔ (t_subset v41 v42))) → (∀ v43 v44 v45 : ι, (((t_in v43 v44) ∧ (t_element v44 (t_powerset v45))) → (t_element v43 v45))) → (∀ v46 v47 v48 : ι, (¬((t_in v46 v47) ∧ (t_element v47 (t_powerset v48)) ∧ (t_empty v48)))) → (∀ v49 v50 : ι, (((t_relation v50) ∧ (t_function v50)) → (∀ v51 : ι, (((t_relation v51) ∧ (t_function v51)) → ((v50 = (t_relation__dom__restriction v51 v49)) ↔ (((t_relation__dom v50) = (t_set__intersection2 (t_relation__dom v51) v49)) ∧ (∀ v52 : ι, ((t_in v52 (t_relation__dom v50)) → ((t_apply v50 v52) = (t_apply v51 v52)))))))))) → (∀ v53 : ι, ((t_empty v53) → (v53 = t_empty__set))) → (∀ v54 v55 : ι, (¬((t_in v54 v55) ∧ (t_empty v55)))) → (∀ v56 v57 : ι, (¬((t_empty v56) ∧ (¬(v56 = v57)) ∧ (t_empty v57)))) → (∀ v58 v59 v60 : ι, (((t_relation v60) ∧ (t_function v60)) → ((t_in v59 (t_set__intersection2 (t_relation__dom v60) v58)) → ((t_apply (t_relation__dom__restriction v60 v58) v59) = (t_apply v60 v59))))) := by
  vampire
