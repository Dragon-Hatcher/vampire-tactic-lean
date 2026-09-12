-- NUM858+1, from TPTP v9.3.1 (NUM).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.14s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NUM858+1.p`, beside this file. This is its statement in Lean:
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
variable {t_summation : ι → ι}
variable {t_max t_sum : ι → ι → ι}
variable {t_lesseq : ι → ι → Prop}
variable {t_minsol__model__max t_minsol__model__ub t_model__max t_model__ub t_ub : ι → ι → ι → Prop}

theorem T_NUM858p1 : (∀ v0 : ι, (t_lesseq v0 v0)) → (∀ v1 v2 v3 : ι, (((t_lesseq v1 v2) ∧ (t_lesseq v2 v3)) → (t_lesseq v1 v3))) → (∀ v4 v5 : ι, (((t_lesseq v4 v5) ∧ (t_lesseq v5 v4)) → (v4 = v5))) → (∀ v6 v7 : ι, ((t_lesseq v6 v7) ∨ (t_lesseq v7 v6))) → (∀ v8 v9 v10 : ι, ((t_lesseq v8 v9) ↔ (t_lesseq (t_sum v10 v8) (t_sum v10 v9)))) → (∀ v11 v12 : ι, ((t_lesseq v11 v12) ↔ (t_lesseq (t_summation v11) (t_summation v12)))) → (∀ v13 v14 : ι, (((t_max v13 v14) = v13) ∨ (¬(t_lesseq v14 v13)))) → (∀ v15 v16 : ι, (((t_max v15 v16) = v16) ∨ (¬(t_lesseq v15 v16)))) → (∀ v17 v18 v19 : ι, ((t_ub v17 v18 v19) ↔ ((t_lesseq v17 v19) ∧ (t_lesseq v18 v19)))) → (∀ v20 v21 v22 : ι, ((t_model__max v20 v21 v22) ↔ (v22 = (t_max v20 v21)))) → (∀ v23 v24 v25 : ι, ((t_model__ub v23 v24 v25) ↔ (t_ub v23 v24 v25))) → (∀ v26 v27 v28 : ι, ((t_minsol__model__max v26 v27 v28) ↔ ((t_model__max v26 v27 v28) ∧ (∀ v29 : ι, ((t_model__max v26 v27 v29) → (t_lesseq v28 v29)))))) → (∀ v30 v31 v32 : ι, ((t_minsol__model__ub v30 v31 v32) ↔ ((t_model__ub v30 v31 v32) ∧ (∀ v33 : ι, ((t_model__ub v30 v31 v33) → (t_lesseq v32 v33)))))) → (∀ v34 v35 v36 : ι, ((t_minsol__model__ub v34 v35 v36) ↔ (t_minsol__model__max v34 v35 v36))) := by
  vampire
