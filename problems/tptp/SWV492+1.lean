-- SWV492+1, from TPTP v9.3.1 (SWV).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.14s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV492+1.p`, beside this file. This is its statement in Lean:
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
variable {t_int__one t_int__zero t_n t_real__one t_real__zero : ι}
variable {t_a t_plus t_qr : ι → ι → ι}
variable {t_int__leq t_int__less : ι → ι → Prop}

theorem T_SWV492p1 : (∀ v0 v1 : ι, ((t_int__leq v0 v1) ↔ ((t_int__less v0 v1) ∨ (v0 = v1)))) → (∀ v2 v3 v4 : ι, (((t_int__less v2 v3) ∧ (t_int__less v3 v4)) → (t_int__less v2 v4))) → (∀ v5 v6 : ι, ((t_int__less v5 v6) → (¬(v5 = v6)))) → (∀ v7 v8 : ι, ((t_int__less v7 v8) ∨ (t_int__leq v8 v7))) → (t_int__less t_int__zero t_int__one) → (∀ v9 v10 : ι, ((t_plus v9 v10) = (t_plus v10 v9))) → (∀ v11 : ι, ((t_plus v11 t_int__zero) = v11)) → (∀ v12 v13 v14 v15 : ι, (((t_int__less v12 v13) ∧ (t_int__leq v14 v15)) → (t_int__leq (t_plus v12 v14) (t_plus v13 v15)))) → (∀ v16 v17 : ι, ((t_int__less v16 v17) ↔ (∃ v18 : ι, (((t_plus v16 v18) = v17) ∧ (t_int__less t_int__zero v18))))) → (∀ v19 : ι, ((t_int__less t_int__zero v19) ↔ (t_int__leq t_int__one v19))) → (¬(t_real__zero = t_real__one)) → (∀ v20 v21 : ι, (((t_int__leq t_int__one v20) ∧ (t_int__leq v20 t_n) ∧ (t_int__leq t_int__one v21) ∧ (t_int__leq v21 t_n)) → ((∀ v22 : ι, (((t_int__less t_int__zero v22) ∧ (v20 = (t_plus v21 v22))) → (∀ v23 : ι, (((t_int__leq t_int__one v23) ∧ (t_int__leq v23 v21)) → ((t_a (t_plus v23 v22) v23) = (t_qr (t_plus v23 v22) v23)))))) ∧ (∀ v24 : ι, (((t_int__leq t_int__one v24) ∧ (t_int__leq v24 v21)) → ((t_a v24 v24) = t_real__one))) ∧ (∀ v25 : ι, (((t_int__less t_int__zero v25) ∧ (v21 = (t_plus v20 v25))) → (∀ v26 : ι, (((t_int__leq t_int__one v26) ∧ (t_int__leq v26 v20)) → ((t_a v26 (t_plus v26 v25)) = t_real__zero)))))))) → ((∀ v27 v28 : ι, (((t_int__leq t_int__one v27) ∧ (t_int__less v27 v28) ∧ (t_int__leq v28 t_n)) → ((t_a v27 v28) = t_real__zero))) ∧ (∀ v29 v30 : ι, (((t_int__leq t_int__one v29) ∧ (t_int__leq v30 t_n) ∧ (v29 = v30)) → (¬((t_a v29 v30) = t_real__zero))))) := by
  vampire
