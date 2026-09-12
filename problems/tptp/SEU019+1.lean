-- SEU019+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.02s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU019+1.p`, beside this file. This is its statement in Lean:
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
variable {t_identity__relation t_powerset t_relation__dom : ι → ι}
variable {t_apply : ι → ι → ι}
variable {t_empty t_function t_one__to__one t_relation t_relation__empty__yielding : ι → Prop}
variable {t_element t_in t_subset : ι → ι → Prop}

theorem T_SEU019p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_function v2))) → (∀ v3 : ι, ((t_empty v3) → (t_relation v3))) → (∀ v4 : ι, (((t_relation v4) ∧ (t_function v4)) → ((t_one__to__one v4) ↔ (∀ v5 v6 : ι, (((t_in v5 (t_relation__dom v4)) ∧ (t_in v6 (t_relation__dom v4)) ∧ ((t_apply v4 v5) = (t_apply v4 v6))) → (v5 = v6)))))) → (∀ v7 : ι, (t_relation (t_identity__relation v7))) → (∀ v8 : ι, (∃ v9 : ι, (t_element v9 v8))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (∀ v10 : ι, (¬(t_empty (t_powerset v10)))) → (t_empty t_empty__set) → (∀ v11 : ι, ((t_relation (t_identity__relation v11)) ∧ (t_function (t_identity__relation v11)))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → (∀ v12 : ι, (((¬(t_empty v12)) ∧ (t_relation v12)) → (¬(t_empty (t_relation__dom v12))))) → (∀ v13 : ι, ((t_empty v13) → ((t_empty (t_relation__dom v13)) ∧ (t_relation (t_relation__dom v13))))) → (∃ v14 : ι, ((t_relation v14) ∧ (t_function v14))) → (∃ v15 : ι, ((t_empty v15) ∧ (t_relation v15))) → (∀ v16 : ι, ((¬(t_empty v16)) → (∃ v17 : ι, ((t_element v17 (t_powerset v16)) ∧ (¬(t_empty v17)))))) → (∃ v18 : ι, (t_empty v18)) → (∃ v19 : ι, ((¬(t_empty v19)) ∧ (t_relation v19))) → (∀ v20 : ι, (∃ v21 : ι, ((t_element v21 (t_powerset v20)) ∧ (t_empty v21)))) → (∃ v22 : ι, (¬(t_empty v22))) → (∃ v23 : ι, ((t_relation v23) ∧ (t_relation__empty__yielding v23))) → (∀ v24 v25 : ι, (t_subset v24 v24)) → (∀ v26 v27 : ι, ((t_in v26 v27) → (t_element v26 v27))) → (∀ v28 v29 : ι, ((t_element v28 v29) → ((t_empty v29) ∨ (t_in v28 v29)))) → (∀ v30 v31 : ι, (((t_relation v31) ∧ (t_function v31)) → ((v31 = (t_identity__relation v30)) ↔ (((t_relation__dom v31) = v30) ∧ (∀ v32 : ι, ((t_in v32 v30) → ((t_apply v31 v32) = v32))))))) → (∀ v33 v34 : ι, ((t_element v33 (t_powerset v34)) ↔ (t_subset v33 v34))) → (∀ v35 v36 v37 : ι, (((t_in v35 v36) ∧ (t_element v36 (t_powerset v37))) → (t_element v35 v37))) → (∀ v38 v39 v40 : ι, (¬((t_in v38 v39) ∧ (t_element v39 (t_powerset v40)) ∧ (t_empty v40)))) → (∀ v41 : ι, ((t_empty v41) → (v41 = t_empty__set))) → (∀ v42 v43 : ι, (¬((t_in v42 v43) ∧ (t_empty v43)))) → (∀ v44 v45 : ι, (¬((t_empty v44) ∧ (¬(v44 = v45)) ∧ (t_empty v45)))) → (∀ v46 : ι, (t_one__to__one (t_identity__relation v46))) := by
  vampire
