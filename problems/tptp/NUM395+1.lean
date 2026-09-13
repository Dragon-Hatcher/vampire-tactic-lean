-- NUM395+1, from TPTP v9.3.1 (NUM).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NUM395+1.p`, beside this file. This is its statement in Lean:
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
variable {t_empty t_epsilon__connected t_epsilon__transitive t_function t_one__to__one t_ordinal t_relation t_relation__empty__yielding t_relation__non__empty : ι → Prop}
variable {t_element t_in : ι → ι → Prop}

theorem T_NUM395p1 : (∀ v0 : ι, (∃ v1 : ι, (t_element v1 v0))) → (∀ v2 v3 : ι, ((t_element v2 v3) → ((t_empty v3) ∨ (t_in v2 v3)))) → (∀ v4 v5 : ι, ((t_in v4 v5) → (¬(t_in v5 v4)))) → (∀ v6 v7 : ι, ((t_in v6 v7) → (t_element v6 v7))) → (∀ v8 : ι, ((t_empty v8) → (t_function v8))) → (∀ v9 : ι, (((t_relation v9) ∧ (t_empty v9) ∧ (t_function v9)) → ((t_relation v9) ∧ (t_function v9) ∧ (t_one__to__one v9)))) → (∀ v10 : ι, ((t_empty v10) → (t_relation v10))) → (∀ v11 v12 : ι, (¬((t_in v11 v12) ∧ (t_empty v12)))) → (∀ v13 v14 : ι, (¬((t_empty v13) ∧ (¬(v13 = v14)) ∧ (t_empty v14)))) → (∀ v15 : ι, ((t_ordinal v15) → ((t_epsilon__transitive v15) ∧ (t_epsilon__connected v15)))) → (∀ v16 : ι, (((t_epsilon__transitive v16) ∧ (t_epsilon__connected v16)) → (t_ordinal v16))) → (∃ v17 : ι, ((t_epsilon__transitive v17) ∧ (t_epsilon__connected v17) ∧ (t_ordinal v17))) → (∃ v18 : ι, ((t_relation v18) ∧ (t_function v18))) → (∃ v19 : ι, ((t_relation v19) ∧ (t_empty v19) ∧ (t_function v19))) → (∃ v20 : ι, ((t_relation v20) ∧ (t_function v20) ∧ (t_one__to__one v20))) → (∃ v21 : ι, ((t_relation v21) ∧ (t_relation__empty__yielding v21) ∧ (t_function v21))) → (∃ v22 : ι, ((t_relation v22) ∧ (t_relation__non__empty v22) ∧ (t_function v22))) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set) ∧ (t_relation__empty__yielding t_empty__set)) → (∃ v23 : ι, ((t_empty v23) ∧ (t_relation v23))) → (∃ v24 : ι, ((¬(t_empty v24)) ∧ (t_relation v24))) → (∃ v25 : ι, ((t_relation v25) ∧ (t_relation__empty__yielding v25))) → (t_empty t_empty__set) → (∃ v26 : ι, (t_empty v26)) → (∃ v27 : ι, (¬(t_empty v27))) → (∀ v28 : ι, ((t_empty v28) → (v28 = t_empty__set))) → (∀ v29 : ι, ((t_ordinal v29) ↔ ((t_epsilon__transitive v29) ∧ (t_epsilon__connected v29)))) → ((t_epsilon__transitive t_empty__set) ∧ (t_epsilon__connected t_empty__set)) → (t_ordinal t_empty__set) := by
  vampire
