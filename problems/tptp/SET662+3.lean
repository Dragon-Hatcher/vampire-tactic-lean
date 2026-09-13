-- SET662+3, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET662+3.p`, beside this file. This is its statement in Lean:
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
variable {t_empty__set t_set__type : ι}
variable {t_member__type t_power__set t_subset__type : ι → ι}
variable {t_cross__product t_ordered__pair t_relation__type : ι → ι → ι}
variable {t_empty t_relation__like : ι → Prop}
variable {t_ilf__type t_member t_subset t_type : ι → ι → Prop}

theorem T_SET662p3 : (∀ v0 : ι, ((t_ilf__type v0 t_set__type) → (∀ v1 : ι, ((t_ilf__type v1 t_set__type) → (t_subset t_empty__set (t_cross__product v0 v1)))))) → (∀ v2 : ι, ((t_ilf__type v2 t_set__type) → (∀ v3 : ι, ((t_ilf__type v3 t_set__type) → ((∀ v4 : ι, ((t_ilf__type v4 (t_subset__type (t_cross__product v2 v3))) → (t_ilf__type v4 (t_relation__type v2 v3)))) ∧ (∀ v5 : ι, ((t_ilf__type v5 (t_relation__type v2 v3)) → (t_ilf__type v5 (t_subset__type (t_cross__product v2 v3)))))))))) → (∀ v6 : ι, ((t_ilf__type v6 t_set__type) → (∀ v7 : ι, ((t_ilf__type v7 t_set__type) → (∃ v8 : ι, (t_ilf__type v8 (t_relation__type v7 v6))))))) → (∀ v9 : ι, ((t_ilf__type v9 t_set__type) → (¬(t_member v9 t_empty__set)))) → (t_empty t_empty__set) → (t_type t_empty__set t_set__type) → (∀ v10 : ι, ((t_ilf__type v10 t_set__type) → (∀ v11 : ι, ((t_ilf__type v11 t_set__type) → (t_ilf__type (t_cross__product v10 v11) t_set__type))))) → (∀ v12 : ι, ((t_ilf__type v12 t_set__type) → (∀ v13 : ι, ((t_ilf__type v13 t_set__type) → ((t_ilf__type v13 (t_subset__type v12)) ↔ (t_ilf__type v13 (t_member__type (t_power__set v12)))))))) → (∀ v14 : ι, ((t_ilf__type v14 t_set__type) → (∃ v15 : ι, (t_ilf__type v15 (t_subset__type v14))))) → (∀ v16 : ι, ((t_ilf__type v16 t_set__type) → (∀ v17 : ι, ((t_ilf__type v17 t_set__type) → ((t_subset v16 v17) ↔ (∀ v18 : ι, ((t_ilf__type v18 t_set__type) → ((t_member v18 v16) → (t_member v18 v17))))))))) → (∀ v19 : ι, ((t_ilf__type v19 t_set__type) → (t_subset v19 v19))) → (∀ v20 : ι, ((t_ilf__type v20 t_set__type) → ((t_empty v20) ↔ (∀ v21 : ι, ((t_ilf__type v21 t_set__type) → (¬(t_member v21 v20))))))) → (∀ v22 : ι, ((t_ilf__type v22 t_set__type) → (∀ v23 : ι, ((t_ilf__type v23 t_set__type) → ((t_member v22 (t_power__set v23)) ↔ (∀ v24 : ι, ((t_ilf__type v24 t_set__type) → ((t_member v24 v22) → (t_member v24 v23))))))))) → (∀ v25 : ι, ((t_ilf__type v25 t_set__type) → ((¬(t_empty (t_power__set v25))) ∧ (t_ilf__type (t_power__set v25) t_set__type)))) → (∀ v26 : ι, ((t_ilf__type v26 t_set__type) → (∀ v27 : ι, (((¬(t_empty v27)) ∧ (t_ilf__type v27 t_set__type)) → ((t_ilf__type v26 (t_member__type v27)) ↔ (t_member v26 v27)))))) → (∀ v28 : ι, (((¬(t_empty v28)) ∧ (t_ilf__type v28 t_set__type)) → (∃ v29 : ι, (t_ilf__type v29 (t_member__type v28))))) → (∀ v30 : ι, ((t_ilf__type v30 t_set__type) → ((t_relation__like v30) ↔ (∀ v31 : ι, ((t_ilf__type v31 t_set__type) → ((t_member v31 v30) → (∃ v32 : ι, ((t_ilf__type v32 t_set__type) ∧ (∃ v33 : ι, ((t_ilf__type v33 t_set__type) ∧ (v31 = (t_ordered__pair v32 v33)))))))))))) → (∀ v34 : ι, (((t_empty v34) ∧ (t_ilf__type v34 t_set__type)) → (t_relation__like v34))) → (∀ v35 : ι, ((t_ilf__type v35 t_set__type) → (∀ v36 : ι, ((t_ilf__type v36 t_set__type) → (∀ v37 : ι, ((t_ilf__type v37 (t_subset__type (t_cross__product v35 v36))) → (t_relation__like v37))))))) → (∀ v38 : ι, ((t_ilf__type v38 t_set__type) → (∀ v39 : ι, ((t_ilf__type v39 t_set__type) → (t_ilf__type (t_ordered__pair v38 v39) t_set__type))))) → (∀ v40 : ι, (t_ilf__type v40 t_set__type)) → (∀ v41 : ι, ((t_ilf__type v41 t_set__type) → (∀ v42 : ι, ((t_ilf__type v42 t_set__type) → (t_ilf__type t_empty__set (t_relation__type v41 v42)))))) := by
  vampire
