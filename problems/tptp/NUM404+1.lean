-- NUM404+1, from TPTP v9.3.1 (NUM).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.02s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NUM404+1.p`, beside this file. This is its statement in Lean:
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
variable {t_empty t_epsilon__connected t_epsilon__transitive t_function t_one__to__one t_ordinal t_relation t_relation__empty__yielding t_relation__non__empty : ι → Prop}
variable {t_element t_in t_subset : ι → ι → Prop}

theorem T_NUM404p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_function v2))) → (∀ v3 : ι, ((t_ordinal v3) → ((t_epsilon__transitive v3) ∧ (t_epsilon__connected v3)))) → (∀ v4 : ι, ((t_empty v4) → (t_relation v4))) → (∀ v5 : ι, (((t_relation v5) ∧ (t_empty v5) ∧ (t_function v5)) → ((t_relation v5) ∧ (t_function v5) ∧ (t_one__to__one v5)))) → (∀ v6 : ι, (((t_epsilon__transitive v6) ∧ (t_epsilon__connected v6)) → (t_ordinal v6))) → (∀ v7 : ι, ((t_empty v7) → ((t_epsilon__transitive v7) ∧ (t_epsilon__connected v7) ∧ (t_ordinal v7)))) → (∀ v8 : ι, ((t_epsilon__transitive v8) ↔ (∀ v9 : ι, ((t_in v9 v8) → (t_subset v9 v8))))) → (∀ v10 : ι, ((t_epsilon__connected v10) ↔ (∀ v11 v12 : ι, (¬((t_in v11 v10) ∧ (t_in v12 v10) ∧ (¬(t_in v11 v12)) ∧ (¬(v11 = v12)) ∧ (¬(t_in v12 v11))))))) → (∀ v13 v14 : ι, ((t_subset v13 v14) ↔ (∀ v15 : ι, ((t_in v15 v13) → (t_in v15 v14))))) → (∀ v16 : ι, ((t_ordinal v16) ↔ ((t_epsilon__transitive v16) ∧ (t_epsilon__connected v16)))) → (∀ v17 : ι, (∃ v18 : ι, (t_element v18 v17))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (t_empty t_empty__set) → ((t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set) ∧ (t_function t_empty__set) ∧ (t_one__to__one t_empty__set) ∧ (t_empty t_empty__set) ∧ (t_epsilon__transitive t_empty__set) ∧ (t_epsilon__connected t_empty__set) ∧ (t_ordinal t_empty__set)) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → (∃ v19 : ι, ((t_relation v19) ∧ (t_function v19))) → (∃ v20 : ι, ((t_epsilon__transitive v20) ∧ (t_epsilon__connected v20) ∧ (t_ordinal v20))) → (∃ v21 : ι, ((t_empty v21) ∧ (t_relation v21))) → (∃ v22 : ι, (t_empty v22)) → (∃ v23 : ι, ((t_relation v23) ∧ (t_empty v23) ∧ (t_function v23))) → (∃ v24 : ι, ((t_relation v24) ∧ (t_function v24) ∧ (t_one__to__one v24) ∧ (t_empty v24) ∧ (t_epsilon__transitive v24) ∧ (t_epsilon__connected v24) ∧ (t_ordinal v24))) → (∃ v25 : ι, ((¬(t_empty v25)) ∧ (t_relation v25))) → (∃ v26 : ι, (¬(t_empty v26))) → (∃ v27 : ι, ((t_relation v27) ∧ (t_function v27) ∧ (t_one__to__one v27))) → (∃ v28 : ι, ((¬(t_empty v28)) ∧ (t_epsilon__transitive v28) ∧ (t_epsilon__connected v28) ∧ (t_ordinal v28))) → (∃ v29 : ι, ((t_relation v29) ∧ (t_relation__empty__yielding v29))) → (∃ v30 : ι, ((t_relation v30) ∧ (t_relation__empty__yielding v30) ∧ (t_function v30))) → (∃ v31 : ι, ((t_relation v31) ∧ (t_relation__non__empty v31) ∧ (t_function v31))) → (∀ v32 v33 : ι, (t_subset v32 v32)) → (∀ v34 v35 : ι, ((t_in v34 v35) → (t_element v34 v35))) → (∀ v36 v37 : ι, ((t_ordinal v37) → ((t_in v36 v37) → (t_ordinal v36)))) → (∀ v38 : ι, ((t_ordinal v38) → (∀ v39 : ι, ((t_ordinal v39) → (¬((¬(t_in v38 v39)) ∧ (¬(v38 = v39)) ∧ (¬(t_in v39 v38)))))))) → (∀ v40 v41 : ι, ((t_element v40 v41) → ((t_empty v41) ∨ (t_in v40 v41)))) → (∀ v42 v43 : ι, ((t_element v42 (t_powerset v43)) ↔ (t_subset v42 v43))) → (∀ v44 v45 v46 : ι, (((t_in v44 v45) ∧ (t_element v45 (t_powerset v46))) → (t_element v44 v46))) → (∀ v47 v48 v49 : ι, (¬((t_in v47 v48) ∧ (t_element v48 (t_powerset v49)) ∧ (t_empty v49)))) → (∀ v50 : ι, ((t_empty v50) → (v50 = t_empty__set))) → (∀ v51 v52 : ι, (¬((t_in v51 v52) ∧ (t_empty v52)))) → (∀ v53 v54 : ι, (¬((t_empty v53) ∧ (¬(v53 = v54)) ∧ (t_empty v54)))) → (∀ v55 : ι, (¬(∀ v56 : ι, ((t_in v56 v55) ↔ (t_ordinal v56))))) := by
  vampire
