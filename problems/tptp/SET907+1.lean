-- SET907+1, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET907+1.p`, beside this file. This is its statement in Lean:
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

theorem T_SET907p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_unordered__pair v2 v3) = (t_unordered__pair v3 v2))) → (∀ v4 v5 : ι, ((t_set__union2 v4 v5) = (t_set__union2 v5 v4))) → (∀ v6 v7 : ι, ((¬(t_empty v6)) → (¬(t_empty (t_set__union2 v6 v7))))) → (∀ v8 v9 : ι, ((¬(t_empty v8)) → (¬(t_empty (t_set__union2 v9 v8))))) → (∀ v10 v11 : ι, ((t_set__union2 v10 v10) = v10)) → (∃ v12 : ι, (t_empty v12)) → (∃ v13 : ι, (¬(t_empty v13))) → (∀ v14 v15 : ι, (t_subset v14 v14)) → (∀ v16 v17 : ι, ((t_subset v16 v17) → ((t_set__union2 v16 v17) = v17))) → (∀ v18 v19 v20 : ι, ((t_subset (t_unordered__pair v18 v19) v20) ↔ ((t_in v18 v20) ∧ (t_in v19 v20)))) → (∀ v21 v22 v23 : ι, (((t_in v21 v22) ∧ (t_in v23 v22)) → ((t_set__union2 (t_unordered__pair v21 v23) v22) = v22))) := by
  vampire
