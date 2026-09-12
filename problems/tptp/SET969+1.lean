-- SET969+1, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.26s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET969+1.p`, beside this file. This is its statement in Lean:
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
variable {t_cartesian__product2 t_ordered__pair t_set__intersection2 t_unordered__pair : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_in t_subset : ι → ι → Prop}

theorem T_SET969p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_unordered__pair v2 v3) = (t_unordered__pair v3 v2))) → (∀ v4 v5 : ι, ((t_set__intersection2 v4 v5) = (t_set__intersection2 v5 v4))) → (∀ v6 v7 v8 : ι, ((v8 = (t_set__intersection2 v6 v7)) ↔ (∀ v9 : ι, ((t_in v9 v8) ↔ ((t_in v9 v6) ∧ (t_in v9 v7)))))) → (∀ v10 v11 : ι, ((t_ordered__pair v10 v11) = (t_unordered__pair (t_unordered__pair v10 v11) (t_singleton v10)))) → (∀ v12 v13 : ι, (¬(t_empty (t_ordered__pair v12 v13)))) → (∀ v14 v15 : ι, ((t_set__intersection2 v14 v14) = v14)) → (∀ v16 v17 v18 v19 : ι, ((t_in (t_ordered__pair v16 v17) (t_cartesian__product2 v18 v19)) ↔ ((t_in v16 v18) ∧ (t_in v17 v19)))) → (∃ v20 : ι, (t_empty v20)) → (∃ v21 : ι, (¬(t_empty v21))) → (∀ v22 v23 : ι, (t_subset v22 v22)) → (∀ v24 v25 v26 v27 : ι, ((t_in (t_ordered__pair v24 v25) (t_cartesian__product2 v26 v27)) → (t_in (t_ordered__pair v25 v24) (t_cartesian__product2 v27 v26)))) → (∀ v28 v29 v30 v31 v32 v33 : ι, (((t_subset v28 (t_cartesian__product2 v29 v30)) ∧ (t_subset v31 (t_cartesian__product2 v32 v33)) ∧ (∀ v34 v35 : ι, ((t_in (t_ordered__pair v34 v35) v28) ↔ (t_in (t_ordered__pair v34 v35) v31)))) → (v28 = v31))) → (∀ v36 v37 : ι, (t_subset (t_set__intersection2 v36 v37) v36)) → (∀ v38 v39 v40 : ι, (((t_cartesian__product2 (t_set__intersection2 v38 v39) v40) = (t_set__intersection2 (t_cartesian__product2 v38 v40) (t_cartesian__product2 v39 v40))) ∧ ((t_cartesian__product2 v40 (t_set__intersection2 v38 v39)) = (t_set__intersection2 (t_cartesian__product2 v40 v38) (t_cartesian__product2 v40 v39))))) := by
  vampire
