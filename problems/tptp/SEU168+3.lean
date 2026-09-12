-- SEU168+3, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.61s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU168+3.p`, beside this file. This is its statement in Lean:
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
variable {t_empty : ι → Prop}
variable {t_are__equipotent t_in t_subset : ι → ι → Prop}

theorem T_SEU168p3 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((v3 = (t_powerset v2)) ↔ (∀ v4 : ι, ((t_in v4 v3) ↔ (t_subset v4 v2))))) → (∀ v5 v6 : ι, ((t_subset v5 v6) ↔ (∀ v7 : ι, ((t_in v7 v5) → (t_in v7 v6))))) → (∃ v8 : ι, (t_empty v8)) → (∃ v9 : ι, (¬(t_empty v9))) → (∀ v10 v11 : ι, (t_subset v10 v10)) → (∀ v12 : ι, (∃ v13 : ι, ((t_in v12 v13) ∧ (∀ v14 v15 : ι, (((t_in v14 v13) ∧ (t_subset v15 v14)) → (t_in v15 v13))) ∧ (∀ v16 : ι, (¬((t_in v16 v13) ∧ (∀ v17 : ι, (¬((t_in v17 v13) ∧ (∀ v18 : ι, ((t_subset v18 v16) → (t_in v18 v17))))))))) ∧ (∀ v19 : ι, (¬((t_subset v19 v13) ∧ (¬(t_are__equipotent v19 v13)) ∧ (¬(t_in v19 v13)))))))) → (∀ v20 : ι, (∃ v21 : ι, ((t_in v20 v21) ∧ (∀ v22 v23 : ι, (((t_in v22 v21) ∧ (t_subset v23 v22)) → (t_in v23 v21))) ∧ (∀ v24 : ι, ((t_in v24 v21) → (t_in (t_powerset v24) v21))) ∧ (∀ v25 : ι, (¬((t_subset v25 v21) ∧ (¬(t_are__equipotent v25 v21)) ∧ (¬(t_in v25 v21)))))))) := by
  vampire
