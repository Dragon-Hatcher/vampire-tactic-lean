-- SET902+1, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET902+1.p`, beside this file. This is its statement in Lean:
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
variable {t_singleton : ι → ι}
variable {t_set__union2 : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_subset : ι → ι → Prop}

theorem T_SET902p1 : (∀ v0 v1 : ι, ((t_set__union2 v0 v1) = (t_set__union2 v1 v0))) → (t_empty t_empty__set) → (∀ v2 v3 : ι, ((¬(t_empty v2)) → (¬(t_empty (t_set__union2 v2 v3))))) → (∀ v4 v5 : ι, ((¬(t_empty v4)) → (¬(t_empty (t_set__union2 v5 v4))))) → (∀ v6 v7 : ι, ((t_set__union2 v6 v6) = v6)) → (∀ v8 : ι, (¬((t_singleton v8) = t_empty__set))) → (∀ v9 v10 : ι, ((t_subset v9 (t_singleton v10)) ↔ ((v9 = t_empty__set) ∨ (v9 = (t_singleton v10))))) → (∃ v11 : ι, (t_empty v11)) → (∃ v12 : ι, (¬(t_empty v12))) → (∀ v13 v14 : ι, (t_subset v13 v13)) → (∀ v15 v16 : ι, (t_subset v15 (t_set__union2 v15 v16))) → (∀ v17 v18 v19 : ι, (¬(((t_singleton v17) = (t_set__union2 v18 v19)) ∧ (¬((v18 = (t_singleton v17)) ∧ (v19 = (t_singleton v17)))) ∧ (¬((v18 = t_empty__set) ∧ (v19 = (t_singleton v17)))) ∧ (¬((v18 = (t_singleton v17)) ∧ (v19 = t_empty__set)))))) := by
  vampire
