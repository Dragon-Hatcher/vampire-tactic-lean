-- SEU200+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU200+1.p`, beside this file. This is its statement in Lean:
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
variable {t_powerset t_relation__dom t_relation__rng : ι → ι}
variable {t_relation__rng__restriction : ι → ι → ι}
variable {t_empty t_relation : ι → Prop}
variable {t_element t_in t_subset : ι → ι → Prop}

theorem T_SEU200p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_relation v2))) → True → True → True → True → (∀ v3 v4 : ι, ((t_relation v4) → (t_relation (t_relation__rng__restriction v3 v4)))) → True → (∀ v5 : ι, (∃ v6 : ι, (t_element v6 v5))) → (∀ v7 : ι, (¬(t_empty (t_powerset v7)))) → (t_empty t_empty__set) → ((t_empty t_empty__set) ∧ (t_relation t_empty__set)) → (∀ v8 : ι, (((¬(t_empty v8)) ∧ (t_relation v8)) → (¬(t_empty (t_relation__dom v8))))) → (∀ v9 : ι, (((¬(t_empty v9)) ∧ (t_relation v9)) → (¬(t_empty (t_relation__rng v9))))) → (∀ v10 : ι, ((t_empty v10) → ((t_empty (t_relation__dom v10)) ∧ (t_relation (t_relation__dom v10))))) → (∀ v11 : ι, ((t_empty v11) → ((t_empty (t_relation__rng v11)) ∧ (t_relation (t_relation__rng v11))))) → (∃ v12 : ι, ((t_empty v12) ∧ (t_relation v12))) → (∀ v13 : ι, ((¬(t_empty v13)) → (∃ v14 : ι, ((t_element v14 (t_powerset v13)) ∧ (¬(t_empty v14)))))) → (∃ v15 : ι, (t_empty v15)) → (∃ v16 : ι, ((¬(t_empty v16)) ∧ (t_relation v16))) → (∀ v17 : ι, (∃ v18 : ι, ((t_element v18 (t_powerset v17)) ∧ (t_empty v18)))) → (∃ v19 : ι, (¬(t_empty v19))) → (∀ v20 v21 : ι, (t_subset v20 v20)) → (∀ v22 v23 : ι, ((t_relation v23) → (t_subset (t_relation__rng__restriction v22 v23) v23))) → (∀ v24 v25 : ι, ((t_in v24 v25) → (t_element v24 v25))) → (∀ v26 : ι, ((t_relation v26) → (∀ v27 : ι, ((t_relation v27) → ((t_subset v26 v27) → ((t_subset (t_relation__dom v26) (t_relation__dom v27)) ∧ (t_subset (t_relation__rng v26) (t_relation__rng v27)))))))) → (∀ v28 v29 : ι, ((t_element v28 v29) → ((t_empty v29) ∨ (t_in v28 v29)))) → (∀ v30 v31 : ι, ((t_element v30 (t_powerset v31)) ↔ (t_subset v30 v31))) → (∀ v32 v33 v34 : ι, (((t_in v32 v33) ∧ (t_element v33 (t_powerset v34))) → (t_element v32 v34))) → (∀ v35 v36 v37 : ι, (¬((t_in v35 v36) ∧ (t_element v36 (t_powerset v37)) ∧ (t_empty v37)))) → (∀ v38 : ι, ((t_empty v38) → (v38 = t_empty__set))) → (∀ v39 v40 : ι, (¬((t_in v39 v40) ∧ (t_empty v40)))) → (∀ v41 v42 : ι, (¬((t_empty v41) ∧ (¬(v41 = v42)) ∧ (t_empty v42)))) → (∀ v43 v44 : ι, ((t_relation v44) → (t_subset (t_relation__rng (t_relation__rng__restriction v43 v44)) (t_relation__rng v44)))) := by
  vampire
