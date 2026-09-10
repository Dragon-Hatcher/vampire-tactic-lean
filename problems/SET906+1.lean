-- SET906+1, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET906+1.p`, beside this file. This is its statement in Lean:
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
variable {t_set__union2 t_unordered__pair : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_in t_subset : ι → ι → Prop}

theorem T_SET906p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_unordered__pair v2 v3) = (t_unordered__pair v3 v2))) → (∀ v4 v5 : ι, ((t_set__union2 v4 v5) = (t_set__union2 v5 v4))) → (∀ v6 v7 v8 : ι, ((v8 = (t_unordered__pair v6 v7)) ↔ (∀ v9 : ι, ((t_in v9 v8) ↔ ((v9 = v6) ∨ (v9 = v7)))))) → (∀ v10 v11 v12 : ι, ((v12 = (t_set__union2 v10 v11)) ↔ (∀ v13 : ι, ((t_in v13 v12) ↔ ((t_in v13 v10) ∨ (t_in v13 v11)))))) → (∀ v14 v15 : ι, ((t_subset v14 v15) ↔ (∀ v16 : ι, ((t_in v16 v14) → (t_in v16 v15))))) → (∀ v17 v18 : ι, ((¬(t_empty v17)) → (¬(t_empty (t_set__union2 v17 v18))))) → (∀ v19 v20 : ι, ((¬(t_empty v19)) → (¬(t_empty (t_set__union2 v20 v19))))) → (∀ v21 v22 : ι, ((t_set__union2 v21 v21) = v21)) → (∃ v23 : ι, (t_empty v23)) → (∃ v24 : ι, (¬(t_empty v24))) → (∀ v25 v26 : ι, (t_subset v25 v25)) → (∀ v27 v28 v29 : ι, ((t_subset (t_set__union2 (t_unordered__pair v27 v28) v29) v29) → (t_in v27 v29))) := by
  vampire
