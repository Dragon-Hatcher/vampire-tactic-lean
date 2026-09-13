-- SET889+1, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET889+1.p`, beside this file. This is its statement in Lean:
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
variable {t_powerset t_singleton : ι → ι}
variable {t_unordered__pair : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_in t_subset : ι → ι → Prop}

theorem T_SET889p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_unordered__pair v2 v3) = (t_unordered__pair v3 v2))) → (∀ v4 v5 : ι, ((v5 = (t_powerset v4)) ↔ (∀ v6 : ι, ((t_in v6 v5) ↔ (t_subset v6 v4))))) → (∀ v7 v8 v9 : ι, ((v9 = (t_unordered__pair v7 v8)) ↔ (∀ v10 : ι, ((t_in v10 v9) ↔ ((v10 = v7) ∨ (v10 = v8)))))) → (t_empty t_empty__set) → (∀ v11 v12 : ι, ((t_subset v11 (t_singleton v12)) ↔ ((v11 = t_empty__set) ∨ (v11 = (t_singleton v12))))) → (∃ v13 : ι, (t_empty v13)) → (∃ v14 : ι, (¬(t_empty v14))) → (∀ v15 v16 : ι, (t_subset v15 v15)) → (∀ v17 v18 : ι, ((∀ v19 : ι, ((t_in v19 v17) ↔ (t_in v19 v18))) → (v17 = v18))) → (∀ v20 : ι, ((t_powerset (t_singleton v20)) = (t_unordered__pair t_empty__set (t_singleton v20)))) := by
  vampire
