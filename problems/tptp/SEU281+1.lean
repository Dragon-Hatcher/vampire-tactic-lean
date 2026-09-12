-- SEU281+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.02s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU281+1.p`, beside this file. This is its statement in Lean:
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
variable {t_singleton : ι → ι}
variable {t_cartesian__product2 t_ordered__pair : ι → ι → ι}
variable {t_empty t_epsilon__connected t_epsilon__transitive t_function t_ordinal : ι → Prop}
variable {t_in : ι → ι → Prop}

theorem T_SEU281p1 : (∀ v0 : ι, ((t_ordinal v0) → ((t_epsilon__transitive v0) ∧ (t_epsilon__connected v0)))) → (∀ v1 : ι, (((t_epsilon__transitive v1) ∧ (t_epsilon__connected v1)) → (t_ordinal v1))) → (∃ v2 : ι, ((t_epsilon__transitive v2) ∧ (t_epsilon__connected v2) ∧ (t_ordinal v2))) → (∃ v3 : ι, ((¬(t_empty v3)) ∧ (t_epsilon__transitive v3) ∧ (t_epsilon__connected v3) ∧ (t_ordinal v3))) → (∀ v4 : ι, ((t_empty v4) → (t_function v4))) → (∀ v5 : ι, ((t_empty v5) → ((t_epsilon__transitive v5) ∧ (t_epsilon__connected v5) ∧ (t_ordinal v5)))) → (∃ v6 : ι, (t_empty v6)) → (∃ v7 : ι, (¬(t_empty v7))) → (∀ v8 v9 : ι, ((t_in v8 v9) → (¬(t_in v9 v8)))) → True → True → True → (∀ v10 v11 : ι, (¬(t_empty (t_ordered__pair v10 v11)))) → (∀ v12 v13 : ι, ((∀ v14 v15 v16 : ι, (((v14 = v15) ∧ (∃ v17 v18 : ι, (((t_ordered__pair v17 v18) = v15) ∧ (t_in v17 v12) ∧ (v18 = (t_singleton v17)))) ∧ (v14 = v16) ∧ (∃ v19 v20 : ι, (((t_ordered__pair v19 v20) = v16) ∧ (t_in v19 v12) ∧ (v20 = (t_singleton v19))))) → (v15 = v16))) → (∃ v21 : ι, (∀ v22 : ι, ((t_in v22 v21) ↔ (∃ v23 : ι, ((t_in v23 (t_cartesian__product2 v12 v13)) ∧ (v23 = v22) ∧ (∃ v24 v25 : ι, (((t_ordered__pair v24 v25) = v22) ∧ (t_in v24 v12) ∧ (v25 = (t_singleton v24))))))))))) → (∀ v26 v27 : ι, (∃ v28 : ι, (∀ v29 : ι, ((t_in v29 v28) ↔ ((t_in v29 (t_cartesian__product2 v26 v27)) ∧ (∃ v30 v31 : ι, (((t_ordered__pair v30 v31) = v29) ∧ (t_in v30 v26) ∧ (v31 = (t_singleton v30))))))))) := by
  vampire
