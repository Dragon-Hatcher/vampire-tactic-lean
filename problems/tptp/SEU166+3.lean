-- SEU166+3, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.22s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU166+3.p`, beside this file. This is its statement in Lean:
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
variable {t_cartesian__product2 t_ordered__pair t_unordered__pair : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_in t_subset : ι → ι → Prop}

theorem T_SEU166p3 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_unordered__pair v2 v3) = (t_unordered__pair v3 v2))) → (∀ v4 v5 v6 : ι, ((v6 = (t_cartesian__product2 v4 v5)) ↔ (∀ v7 : ι, ((t_in v7 v6) ↔ (∃ v8 v9 : ι, ((t_in v8 v4) ∧ (t_in v9 v5) ∧ (v7 = (t_ordered__pair v8 v9)))))))) → (∀ v10 v11 : ι, ((t_subset v10 v11) ↔ (∀ v12 : ι, ((t_in v12 v10) → (t_in v12 v11))))) → (∀ v13 v14 : ι, ((t_ordered__pair v13 v14) = (t_unordered__pair (t_unordered__pair v13 v14) (t_singleton v13)))) → (∀ v15 v16 : ι, (¬(t_empty (t_ordered__pair v15 v16)))) → (∃ v17 : ι, (t_empty v17)) → (∃ v18 : ι, (¬(t_empty v18))) → (∀ v19 v20 : ι, (t_subset v19 v19)) → (∀ v21 v22 v23 : ι, ((t_subset v21 v22) → ((t_subset (t_cartesian__product2 v21 v23) (t_cartesian__product2 v22 v23)) ∧ (t_subset (t_cartesian__product2 v23 v21) (t_cartesian__product2 v23 v22))))) := by
  vampire
