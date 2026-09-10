-- SEV515+1, from TPTP v9.3.1 (SEV).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEV515+1.p`, beside this file. This is its statement in Lean:
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
variable {t_g__both t_g__false t_g__false__only t_g__true t_g__true__only : ι → ι → Prop}

theorem T_SEV515p1 : (∀ v0 v1 : ι, ((t_g__true__only v0 v1) ↔ ((t_g__true v0 v1) ∧ (¬(t_g__false v0 v1))))) → (∀ v2 v3 : ι, ((t_g__both v2 v3) ↔ ((t_g__true v2 v3) ∧ (t_g__false v2 v3)))) → (∀ v4 v5 : ι, ((t_g__false__only v4 v5) ↔ ((t_g__false v4 v5) ∧ (¬(t_g__true v4 v5))))) → (∀ v6 v7 : ι, ((t_g__true__only v6 v7) ∨ (t_g__both v6 v7) ∨ (t_g__false__only v6 v7))) → ((∀ v8 : ι, (∃ v9 : ι, (((t_g__true__only v9 v8) ∧ ((t_g__both v9 v9) ∨ (t_g__true__only v9 v9))) ∨ ((t_g__both v9 v8) ∧ ((t_g__false__only v9 v9) ∨ (t_g__true__only v9 v9))) ∨ ((t_g__false__only v9 v8) ∧ ((t_g__false__only v9 v9) ∨ (t_g__both v9 v9)))))) ∨ ((∃ v10 : ι, ((∃ v11 : ι, ((t_g__both v11 v10) ∧ (t_g__both v11 v11))) ∧ (¬(∃ v12 : ι, (((t_g__true__only v12 v10) ∧ ((t_g__both v12 v12) ∨ (t_g__true__only v12 v12))) ∨ ((t_g__both v12 v10) ∧ ((t_g__false__only v12 v12) ∨ (t_g__true__only v12 v12))) ∨ ((t_g__false__only v12 v10) ∧ ((t_g__false__only v12 v12) ∨ (t_g__both v12 v12)))))))) ∧ (¬(∃ v13 : ι, (∀ v14 : ι, (((t_g__true__only v14 v13) ∧ (t_g__false__only v14 v14)) ∨ ((t_g__false__only v14 v13) ∧ (t_g__true__only v14 v14)))))))) := by
  vampire
