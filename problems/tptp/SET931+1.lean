-- SET931+1, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET931+1.p`, beside this file. This is its statement in Lean:
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
variable {t_set__difference t_unordered__pair : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_subset : ι → ι → Prop}

theorem T_SET931p1 : (∀ v0 v1 : ι, ((t_unordered__pair v0 v1) = (t_unordered__pair v1 v0))) → (t_empty t_empty__set) → (∀ v2 v3 v4 : ι, ((t_subset v2 (t_unordered__pair v3 v4)) ↔ (¬((¬(v2 = t_empty__set)) ∧ (¬(v2 = (t_singleton v3))) ∧ (¬(v2 = (t_singleton v4))) ∧ (¬(v2 = (t_unordered__pair v3 v4))))))) → (∃ v5 : ι, (t_empty v5)) → (∃ v6 : ι, (¬(t_empty v6))) → (∀ v7 v8 : ι, (t_subset v7 v7)) → (∀ v9 v10 : ι, (((t_set__difference v9 v10) = t_empty__set) ↔ (t_subset v9 v10))) → (∀ v11 v12 v13 : ι, (((t_set__difference v11 (t_unordered__pair v12 v13)) = t_empty__set) ↔ (¬((¬(v11 = t_empty__set)) ∧ (¬(v11 = (t_singleton v12))) ∧ (¬(v11 = (t_singleton v13))) ∧ (¬(v11 = (t_unordered__pair v12 v13))))))) := by
  vampire
