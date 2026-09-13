-- SEU223+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU223+1.p`, beside this file. This is its statement in Lean:
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
variable {t_relation__dom : ι → ι}
variable {t_apply t_relation__dom__restriction t_set__intersection2 : ι → ι → ι}
variable {t_empty t_function t_one__to__one t_relation t_relation__empty__yielding : ι → Prop}
variable {t_element t_in : ι → ι → Prop}

theorem T_SEU223p1 : (∃ v0 : ι, ((t_relation v0) ∧ (t_relation__empty__yielding v0))) → (∀ v1 v2 : ι, (((t_relation v1) ∧ (t_relation__empty__yielding v1)) → ((t_relation (t_relation__dom__restriction v1 v2)) ∧ (t_relation__empty__yielding (t_relation__dom__restriction v1 v2))))) → True → (∃ v3 : ι, ((t_relation v3) ∧ (t_function v3) ∧ (t_one__to__one v3))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (t_empty t_empty__set) → (∀ v4 : ι, ((t_set__intersection2 v4 t_empty__set) = t_empty__set)) → (∀ v5 : ι, (∃ v6 : ι, (t_element v6 v5))) → True → (∀ v7 : ι, ((t_empty v7) → (t_function v7))) → (∃ v8 : ι, ((t_relation v8) ∧ (t_empty v8) ∧ (t_function v8))) → (∀ v9 : ι, (((t_relation v9) ∧ (t_empty v9) ∧ (t_function v9)) → ((t_relation v9) ∧ (t_function v9) ∧ (t_one__to__one v9)))) → (∃ v10 : ι, ((t_empty v10) ∧ (t_relation v10))) → (∀ v11 : ι, ((t_empty v11) → (t_relation v11))) → (∃ v12 : ι, ((¬(t_empty v12)) ∧ (t_relation v12))) → (∀ v13 : ι, (((¬(t_empty v13)) ∧ (t_relation v13)) → (¬(t_empty (t_relation__dom v13))))) → (∀ v14 : ι, ((t_empty v14) → ((t_empty (t_relation__dom v14)) ∧ (t_relation (t_relation__dom v14))))) → (∃ v15 : ι, (t_empty v15)) → (∃ v16 : ι, (¬(t_empty v16))) → (∀ v17 v18 : ι, ((t_element v17 v18) → ((t_empty v18) ∨ (t_in v17 v18)))) → (∀ v19 : ι, ((t_empty v19) → (v19 = t_empty__set))) → (∀ v20 v21 : ι, (¬((t_empty v20) ∧ (¬(v20 = v21)) ∧ (t_empty v21)))) → (∀ v22 v23 : ι, ((t_set__intersection2 v22 v23) = (t_set__intersection2 v23 v22))) → (∀ v24 v25 : ι, ((t_set__intersection2 v24 v24) = v24)) → (∀ v26 v27 : ι, ((t_in v26 v27) → (¬(t_in v27 v26)))) → True → True → True → (∀ v28 v29 : ι, ((t_relation v28) → (t_relation (t_relation__dom__restriction v28 v29)))) → (∃ v30 : ι, ((t_relation v30) ∧ (t_function v30))) → (∀ v31 v32 : ι, (((t_relation v31) ∧ (t_function v31)) → ((t_relation (t_relation__dom__restriction v31 v32)) ∧ (t_function (t_relation__dom__restriction v31 v32))))) → (∀ v33 v34 : ι, (((t_relation v33) ∧ (t_relation v34)) → (t_relation (t_set__intersection2 v33 v34)))) → (∀ v35 v36 : ι, ((t_in v35 v36) → (t_element v35 v36))) → (∀ v37 v38 : ι, (¬((t_in v37 v38) ∧ (t_empty v38)))) → (∀ v39 v40 : ι, (((t_relation v40) ∧ (t_function v40)) → (∀ v41 : ι, (((t_relation v41) ∧ (t_function v41)) → ((v40 = (t_relation__dom__restriction v41 v39)) ↔ (((t_relation__dom v40) = (t_set__intersection2 (t_relation__dom v41) v39)) ∧ (∀ v42 : ι, ((t_in v42 (t_relation__dom v40)) → ((t_apply v40 v42) = (t_apply v41 v42)))))))))) → (∀ v43 v44 v45 : ι, (((t_relation v45) ∧ (t_function v45)) → ((t_in v44 (t_relation__dom (t_relation__dom__restriction v45 v43))) → ((t_apply (t_relation__dom__restriction v45 v43) v44) = (t_apply v45 v44))))) := by
  vampire
