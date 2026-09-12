-- SET935+1, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.07s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET935+1.p`, beside this file. This is its statement in Lean:
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
variable {t_set__union2 : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_in t_inclusion__comparable t_subset : ι → ι → Prop}

theorem T_SET935p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_set__union2 v2 v3) = (t_set__union2 v3 v2))) → (∀ v4 v5 : ι, ((v4 = v5) ↔ ((t_subset v4 v5) ∧ (t_subset v5 v4)))) → (∀ v6 v7 : ι, ((v7 = (t_powerset v6)) ↔ (∀ v8 : ι, ((t_in v8 v7) ↔ (t_subset v8 v6))))) → (∀ v9 v10 v11 : ι, ((v11 = (t_set__union2 v9 v10)) ↔ (∀ v12 : ι, ((t_in v12 v11) ↔ ((t_in v12 v9) ∨ (t_in v12 v10)))))) → (∀ v13 v14 : ι, ((t_inclusion__comparable v13 v14) ↔ ((t_subset v13 v14) ∨ (t_subset v14 v13)))) → (∀ v15 v16 : ι, ((¬(t_empty v15)) → (¬(t_empty (t_set__union2 v15 v16))))) → (∀ v17 v18 : ι, ((¬(t_empty v17)) → (¬(t_empty (t_set__union2 v18 v17))))) → (∀ v19 v20 : ι, ((t_set__union2 v19 v19) = v19)) → (∃ v21 : ι, (t_empty v21)) → (∃ v22 : ι, (¬(t_empty v22))) → (∀ v23 v24 : ι, (t_subset v23 v23)) → (∀ v25 v26 : ι, (t_inclusion__comparable v25 v25)) → (∀ v27 v28 : ι, ((t_inclusion__comparable v27 v28) → (t_inclusion__comparable v28 v27))) → (∀ v29 v30 : ι, (t_subset v29 (t_set__union2 v29 v30))) → (∀ v31 v32 : ι, (((t_set__union2 (t_powerset v31) (t_powerset v32)) = (t_powerset (t_set__union2 v31 v32))) → (t_inclusion__comparable v31 v32))) := by
  vampire
