-- SEU012+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.08s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU012+1.p`, beside this file. This is its statement in Lean:
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
variable {t_identity__relation t_powerset t_relation__dom t_relation__rng : ι → ι}
variable {t_apply t_relation__composition : ι → ι → ι}
variable {t_empty t_function t_relation t_relation__empty__yielding : ι → Prop}
variable {t_element t_in t_subset : ι → ι → Prop}

theorem T_SEU012p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_function v2))) → (∀ v3 : ι, ((t_empty v3) → (t_relation v3))) → (∀ v4 : ι, (((t_relation v4) ∧ (t_function v4)) → (∀ v5 : ι, ((v5 = (t_relation__rng v4)) ↔ (∀ v6 : ι, ((t_in v6 v5) ↔ (∃ v7 : ι, ((t_in v7 (t_relation__dom v4)) ∧ (v6 = (t_apply v4 v7)))))))))) → (∀ v8 v9 : ι, (((t_relation v8) ∧ (t_relation v9)) → (t_relation (t_relation__composition v8 v9)))) → (∀ v10 : ι, (t_relation (t_identity__relation v10))) → (∀ v11 : ι, (∃ v12 : ι, (t_element v12 v11))) → (∀ v13 v14 : ι, (((t_empty v13) ∧ (t_relation v14)) → ((t_empty (t_relation__composition v14 v13)) ∧ (t_relation (t_relation__composition v14 v13))))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (∀ v15 v16 : ι, (((t_relation v15) ∧ (t_function v15) ∧ (t_relation v16) ∧ (t_function v16)) → ((t_relation (t_relation__composition v15 v16)) ∧ (t_function (t_relation__composition v15 v16))))) → (∀ v17 : ι, (¬(t_empty (t_powerset v17)))) → (t_empty t_empty__set) → (∀ v18 : ι, ((t_relation (t_identity__relation v18)) ∧ (t_function (t_identity__relation v18)))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → (∀ v19 : ι, (((¬(t_empty v19)) ∧ (t_relation v19)) → (¬(t_empty (t_relation__dom v19))))) → (∀ v20 : ι, (((¬(t_empty v20)) ∧ (t_relation v20)) → (¬(t_empty (t_relation__rng v20))))) → (∀ v21 : ι, ((t_empty v21) → ((t_empty (t_relation__dom v21)) ∧ (t_relation (t_relation__dom v21))))) → (∀ v22 : ι, ((t_empty v22) → ((t_empty (t_relation__rng v22)) ∧ (t_relation (t_relation__rng v22))))) → (∀ v23 v24 : ι, (((t_empty v23) ∧ (t_relation v24)) → ((t_empty (t_relation__composition v23 v24)) ∧ (t_relation (t_relation__composition v23 v24))))) → (∃ v25 : ι, ((t_relation v25) ∧ (t_function v25))) → (∃ v26 : ι, ((t_empty v26) ∧ (t_relation v26))) → (∀ v27 : ι, ((¬(t_empty v27)) → (∃ v28 : ι, ((t_element v28 (t_powerset v27)) ∧ (¬(t_empty v28)))))) → (∃ v29 : ι, (t_empty v29)) → (∃ v30 : ι, ((¬(t_empty v30)) ∧ (t_relation v30))) → (∀ v31 : ι, (∃ v32 : ι, ((t_element v32 (t_powerset v31)) ∧ (t_empty v32)))) → (∃ v33 : ι, (¬(t_empty v33))) → (∃ v34 : ι, ((t_relation v34) ∧ (t_relation__empty__yielding v34))) → (∀ v35 v36 : ι, (t_subset v35 v35)) → (∀ v37 v38 : ι, ((t_in v37 v38) → (t_element v37 v38))) → (∀ v39 v40 : ι, (((t_relation v40) ∧ (t_function v40)) → (∀ v41 : ι, (((t_relation v41) ∧ (t_function v41)) → ((t_in v39 (t_relation__dom v40)) → ((t_apply (t_relation__composition v40 v41) v39) = (t_apply v41 (t_apply v40 v39)))))))) → (∀ v42 v43 : ι, ((t_element v42 v43) → ((t_empty v43) ∨ (t_in v42 v43)))) → (∀ v44 v45 : ι, (((t_relation v45) ∧ (t_function v45)) → ((v45 = (t_identity__relation v44)) ↔ (((t_relation__dom v45) = v44) ∧ (∀ v46 : ι, ((t_in v46 v44) → ((t_apply v45 v46) = v46))))))) → (∀ v47 v48 : ι, ((t_element v47 (t_powerset v48)) ↔ (t_subset v47 v48))) → (∀ v49 v50 v51 : ι, (((t_in v49 v50) ∧ (t_element v50 (t_powerset v51))) → (t_element v49 v51))) → (∀ v52 v53 v54 : ι, (¬((t_in v52 v53) ∧ (t_element v53 (t_powerset v54)) ∧ (t_empty v54)))) → (∀ v55 : ι, ((t_empty v55) → (v55 = t_empty__set))) → (∀ v56 v57 : ι, (¬((t_in v56 v57) ∧ (t_empty v57)))) → (∀ v58 v59 : ι, (¬((t_empty v58) ∧ (¬(v58 = v59)) ∧ (t_empty v59)))) → (∀ v60 : ι, (((t_relation v60) ∧ (t_function v60)) → (∀ v61 : ι, (((t_relation v61) ∧ (t_function v61)) → ((((t_relation__rng v60) = (t_relation__dom v61)) ∧ ((t_relation__composition v60 v61) = v60)) → (v61 = (t_identity__relation (t_relation__dom v61)))))))) := by
  vampire
