-- SEU132+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.02s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU132+1.p`, beside this file. This is its statement in Lean:
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
variable {t_set__difference : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_in t_subset : ι → ι → Prop}

theorem T_SEU132p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_subset v2 v3) ↔ (∀ v4 : ι, ((t_in v4 v2) → (t_in v4 v3))))) → (∀ v5 v6 v7 : ι, ((v7 = (t_set__difference v5 v6)) ↔ (∀ v8 : ι, ((t_in v8 v7) ↔ ((t_in v8 v5) ∧ (¬(t_in v8 v6))))))) → True → True → (t_empty t_empty__set) → (∃ v9 : ι, (t_empty v9)) → (∃ v10 : ι, (¬(t_empty v10))) → (∀ v11 v12 : ι, (t_subset v11 v11)) → (∀ v13 : ι, ((t_set__difference v13 t_empty__set) = v13)) → (∀ v14 : ι, ((t_set__difference t_empty__set v14) = t_empty__set)) → (∀ v15 : ι, ((t_empty v15) → (v15 = t_empty__set))) → (∀ v16 v17 : ι, (¬((t_in v16 v17) ∧ (t_empty v17)))) → (∀ v18 v19 : ι, (¬((t_empty v18) ∧ (¬(v18 = v19)) ∧ (t_empty v19)))) → (∀ v20 v21 v22 : ι, ((t_subset v20 v21) → (t_subset (t_set__difference v20 v22) (t_set__difference v21 v22)))) := by
  vampire
