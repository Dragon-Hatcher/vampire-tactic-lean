-- SET936+1, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.23s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET936+1.p`, beside this file. This is its statement in Lean:
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
variable {t_powerset : ι → ι}
variable {t_set__intersection2 : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_in t_subset : ι → ι → Prop}

theorem T_SET936p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_set__intersection2 v2 v3) = (t_set__intersection2 v3 v2))) → (∀ v4 v5 : ι, ((v5 = (t_powerset v4)) ↔ (∀ v6 : ι, ((t_in v6 v5) ↔ (t_subset v6 v4))))) → (∀ v7 v8 v9 : ι, ((v9 = (t_set__intersection2 v7 v8)) ↔ (∀ v10 : ι, ((t_in v10 v9) ↔ ((t_in v10 v7) ∧ (t_in v10 v8)))))) → (∀ v11 v12 : ι, ((t_set__intersection2 v11 v11) = v11)) → (∃ v13 : ι, (t_empty v13)) → (∃ v14 : ι, (¬(t_empty v14))) → (∀ v15 v16 : ι, (t_subset v15 v15)) → (∀ v17 v18 : ι, (t_subset (t_set__intersection2 v17 v18) v17)) → (∀ v19 v20 v21 : ι, (((t_subset v19 v20) ∧ (t_subset v19 v21)) → (t_subset v19 (t_set__intersection2 v20 v21)))) → (∀ v22 v23 v24 : ι, (((t_subset v22 v23) ∧ (t_subset v23 v24)) → (t_subset v22 v24))) → (∀ v25 v26 : ι, ((∀ v27 : ι, ((t_in v27 v25) ↔ (t_in v27 v26))) → (v25 = v26))) → (∀ v28 v29 : ι, ((t_powerset (t_set__intersection2 v28 v29)) = (t_set__intersection2 (t_powerset v28) (t_powerset v29)))) := by
  vampire
