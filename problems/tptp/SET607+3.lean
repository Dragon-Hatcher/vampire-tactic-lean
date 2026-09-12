-- SET607+3, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.22s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET607+3.p`, beside this file. This is its statement in Lean:
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
variable {t_difference t_union : ι → ι → ι}
variable {t_member t_subset : ι → ι → Prop}

theorem T_SET607p3 : (∀ v0 v1 v2 : ι, ((t_member v2 (t_union v0 v1)) ↔ ((t_member v2 v0) ∨ (t_member v2 v1)))) → (∀ v3 v4 v5 : ι, ((t_member v5 (t_difference v3 v4)) ↔ ((t_member v5 v3) ∧ (¬(t_member v5 v4))))) → (∀ v6 v7 : ι, ((v6 = v7) ↔ ((t_subset v6 v7) ∧ (t_subset v7 v6)))) → (∀ v8 v9 : ι, ((t_union v8 v9) = (t_union v9 v8))) → (∀ v10 v11 : ι, ((t_subset v10 v11) ↔ (∀ v12 : ι, ((t_member v12 v10) → (t_member v12 v11))))) → (∀ v13 : ι, (t_subset v13 v13)) → (∀ v14 v15 : ι, ((v14 = v15) ↔ (∀ v16 : ι, ((t_member v16 v14) ↔ (t_member v16 v15))))) → (∀ v17 v18 : ι, ((t_union v17 (t_difference v18 v17)) = (t_union v17 v18))) := by
  vampire
