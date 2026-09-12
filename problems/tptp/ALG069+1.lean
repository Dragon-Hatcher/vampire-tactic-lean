-- ALG069+1, from TPTP v9.3.1 (ALG).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.06s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `ALG069+1.p`, beside this file. This is its statement in Lean:
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
variable {t_h t_j : ι → ι}
variable {t_op1 t_op2 : ι → ι → ι}
variable {t_sorti1 t_sorti2 : ι → Prop}

theorem T_ALG069p1 : (∀ v0 : ι, ((t_sorti1 v0) → (∀ v1 : ι, ((t_sorti1 v1) → (t_sorti1 (t_op1 v0 v1)))))) → (∀ v2 : ι, ((t_sorti2 v2) → (∀ v3 : ι, ((t_sorti2 v3) → (t_sorti2 (t_op2 v2 v3)))))) → (∀ v4 : ι, ((t_sorti1 v4) → (∃ v5 : ι, ((t_sorti1 v5) ∧ ((t_op1 v5 v5) = v4))))) → (¬(∀ v6 : ι, ((t_sorti2 v6) → (∃ v7 : ι, ((t_sorti2 v7) ∧ ((t_op2 v7 v7) = v6)))))) → (((∀ v8 : ι, ((t_sorti1 v8) → (t_sorti2 (t_h v8)))) ∧ (∀ v9 : ι, ((t_sorti2 v9) → (t_sorti1 (t_j v9))))) → (¬((∀ v10 : ι, ((t_sorti1 v10) → (∀ v11 : ι, ((t_sorti1 v11) → ((t_h (t_op1 v10 v11)) = (t_op2 (t_h v10) (t_h v11))))))) ∧ (∀ v12 : ι, ((t_sorti2 v12) → (∀ v13 : ι, ((t_sorti2 v13) → ((t_j (t_op2 v12 v13)) = (t_op1 (t_j v12) (t_j v13))))))) ∧ (∀ v14 : ι, ((t_sorti2 v14) → ((t_h (t_j v14)) = v14))) ∧ (∀ v15 : ι, ((t_sorti1 v15) → ((t_j (t_h v15)) = v15)))))) := by
  vampire
