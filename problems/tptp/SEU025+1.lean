-- SEU025+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.02s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU025+1.p`, beside this file. This is its statement in Lean:
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
variable {t_function__inverse t_powerset t_relation__dom t_relation__rng : ι → ι}
variable {t_relation__composition : ι → ι → ι}
variable {t_empty t_function t_one__to__one t_relation t_relation__empty__yielding : ι → Prop}
variable {t_element t_in t_subset : ι → ι → Prop}

theorem T_SEU025p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_function v2))) → (∀ v3 : ι, ((t_empty v3) → (t_relation v3))) → (∀ v4 : ι, (((t_relation v4) ∧ (t_empty v4) ∧ (t_function v4)) → ((t_relation v4) ∧ (t_function v4) ∧ (t_one__to__one v4)))) → (∀ v5 : ι, (((t_relation v5) ∧ (t_function v5)) → ((t_relation (t_function__inverse v5)) ∧ (t_function (t_function__inverse v5))))) → (∀ v6 v7 : ι, (((t_relation v6) ∧ (t_relation v7)) → (t_relation (t_relation__composition v6 v7)))) → (∀ v8 : ι, (∃ v9 : ι, (t_element v9 v8))) → (∀ v10 v11 : ι, (((t_empty v10) ∧ (t_relation v11)) → ((t_empty (t_relation__composition v11 v10)) ∧ (t_relation (t_relation__composition v11 v10))))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (∀ v12 v13 : ι, (((t_relation v12) ∧ (t_function v12) ∧ (t_relation v13) ∧ (t_function v13)) → ((t_relation (t_relation__composition v12 v13)) ∧ (t_function (t_relation__composition v12 v13))))) → (∀ v14 : ι, (¬(t_empty (t_powerset v14)))) → (t_empty t_empty__set) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → (∀ v15 : ι, (((¬(t_empty v15)) ∧ (t_relation v15)) → (¬(t_empty (t_relation__dom v15))))) → (∀ v16 : ι, (((¬(t_empty v16)) ∧ (t_relation v16)) → (¬(t_empty (t_relation__rng v16))))) → (∀ v17 : ι, ((t_empty v17) → ((t_empty (t_relation__dom v17)) ∧ (t_relation (t_relation__dom v17))))) → (∀ v18 : ι, ((t_empty v18) → ((t_empty (t_relation__rng v18)) ∧ (t_relation (t_relation__rng v18))))) → (∀ v19 v20 : ι, (((t_empty v19) ∧ (t_relation v20)) → ((t_empty (t_relation__composition v19 v20)) ∧ (t_relation (t_relation__composition v19 v20))))) → (∃ v21 : ι, ((t_relation v21) ∧ (t_function v21))) → (∃ v22 : ι, ((t_empty v22) ∧ (t_relation v22))) → (∀ v23 : ι, ((¬(t_empty v23)) → (∃ v24 : ι, ((t_element v24 (t_powerset v23)) ∧ (¬(t_empty v24)))))) → (∃ v25 : ι, (t_empty v25)) → (∃ v26 : ι, ((t_relation v26) ∧ (t_empty v26) ∧ (t_function v26))) → (∃ v27 : ι, ((¬(t_empty v27)) ∧ (t_relation v27))) → (∀ v28 : ι, (∃ v29 : ι, ((t_element v29 (t_powerset v28)) ∧ (t_empty v29)))) → (∃ v30 : ι, (¬(t_empty v30))) → (∃ v31 : ι, ((t_relation v31) ∧ (t_function v31) ∧ (t_one__to__one v31))) → (∃ v32 : ι, ((t_relation v32) ∧ (t_relation__empty__yielding v32))) → (∀ v33 v34 : ι, (t_subset v33 v33)) → (∀ v35 v36 : ι, ((t_in v35 v36) → (t_element v35 v36))) → (∀ v37 v38 : ι, ((t_element v37 v38) → ((t_empty v38) ∨ (t_in v37 v38)))) → (∀ v39 v40 : ι, ((t_element v39 (t_powerset v40)) ↔ (t_subset v39 v40))) → (∀ v41 : ι, ((t_relation v41) → (∀ v42 : ι, ((t_relation v42) → ((t_subset (t_relation__rng v41) (t_relation__dom v42)) → ((t_relation__dom (t_relation__composition v41 v42)) = (t_relation__dom v41))))))) → (∀ v43 : ι, ((t_relation v43) → (∀ v44 : ι, ((t_relation v44) → ((t_subset (t_relation__dom v43) (t_relation__rng v44)) → ((t_relation__rng (t_relation__composition v44 v43)) = (t_relation__rng v43))))))) → (∀ v45 v46 v47 : ι, (((t_in v45 v46) ∧ (t_element v46 (t_powerset v47))) → (t_element v45 v47))) → (∀ v48 : ι, (((t_relation v48) ∧ (t_function v48)) → ((t_one__to__one v48) → (((t_relation__rng v48) = (t_relation__dom (t_function__inverse v48))) ∧ ((t_relation__dom v48) = (t_relation__rng (t_function__inverse v48))))))) → (∀ v49 v50 v51 : ι, (¬((t_in v49 v50) ∧ (t_element v50 (t_powerset v51)) ∧ (t_empty v51)))) → (∀ v52 : ι, ((t_empty v52) → (v52 = t_empty__set))) → (∀ v53 v54 : ι, (¬((t_in v53 v54) ∧ (t_empty v54)))) → (∀ v55 v56 : ι, (¬((t_empty v55) ∧ (¬(v55 = v56)) ∧ (t_empty v56)))) → (∀ v57 : ι, (((t_relation v57) ∧ (t_function v57)) → ((t_one__to__one v57) → (((t_relation__dom (t_relation__composition v57 (t_function__inverse v57))) = (t_relation__dom v57)) ∧ ((t_relation__rng (t_relation__composition v57 (t_function__inverse v57))) = (t_relation__dom v57)))))) := by
  vampire
