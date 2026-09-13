-- SWV237+1, from TPTP v9.3.1 (SWV).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.11s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV237+1.p`, beside this file. This is its statement in Lean:
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
variable {t_a t_k t_kk t_lp t_pp t_t1 t_t2 t_tc t_tmk t_w t_wk t_zcmk : ι}
variable {t_i : ι → ι}
variable {t_enc : ι → ι → ι}
variable {t_p : ι → Prop}

theorem T_SWV237p1 : (∀ v0 v1 : ι, ((t_enc (t_i v0) (t_enc v0 v1)) = v1)) → (∀ v2 v3 : ι, ((t_enc v2 (t_enc (t_i v2) v3)) = v3)) → (∀ v4 : ι, ((t_i (t_i v4)) = v4)) → (∀ v5 : ι, ((t_p v5) → (t_p (t_i v5)))) → (∀ v6 v7 v8 : ι, (((t_p v6) ∧ (t_p v7) ∧ (t_p v8)) → (t_p (t_enc t_tmk (t_enc (t_i (t_enc (t_i t_zcmk) v7)) v6))))) → (∀ v9 v10 v11 : ι, (((t_p v9) ∧ (t_p v10) ∧ (t_p v11)) → (t_p (t_enc (t_i (t_enc (t_i t_zcmk) v10)) (t_enc (t_i t_tmk) v9))))) → (∀ v12 v13 v14 : ι, (((t_p v12) ∧ (t_p v13) ∧ (t_p v14)) → (t_p (t_enc t_wk (t_enc (t_i t_tmk) v12))))) → (∀ v15 v16 v17 : ι, (((t_p v15) ∧ (t_p v16) ∧ (t_p v17)) → (t_p (t_enc (t_enc (t_i t_tmk) v16) (t_enc (t_i t_tmk) v15))))) → (∀ v18 v19 v20 : ι, (((t_p v18) ∧ (t_p v19) ∧ (t_p v20)) → (t_p (t_enc (t_enc (t_i t_tmk) v19) (t_enc (t_i t_tc) v18))))) → (∀ v21 v22 v23 : ι, (((t_p v21) ∧ (t_p v22) ∧ (t_p v23)) → (t_p (t_enc t_tc v21)))) → (∀ v24 v25 v26 : ι, (((t_p v24) ∧ (t_p v25) ∧ (t_p v26)) → (t_p (t_enc (t_enc (t_i t_tc) v24) v25)))) → (∀ v27 v28 v29 : ι, (((t_p v27) ∧ (t_p v28) ∧ (t_p v29)) → (t_p (t_enc (t_i (t_enc (t_i t_tc) v27)) v28)))) → (∀ v30 v31 v32 : ι, (((t_p v30) ∧ (t_p v31) ∧ (t_p v32)) → (t_p (t_enc (t_enc (t_i t_wk) v32) (t_enc (t_i (t_enc (t_i t_tmk) v31)) v30))))) → (∀ v33 v34 v35 : ι, (((t_p v33) ∧ (t_p v34) ∧ (t_p v35)) → (t_p (t_enc (t_enc (t_i t_wk) v35) (t_enc (t_i (t_enc (t_i t_wk) v34)) v33))))) → (∀ v36 v37 v38 : ι, (((t_p v36) ∧ (t_p v37) ∧ (t_p v38)) → (t_p (t_enc (t_enc (t_i t_wk) v37) (t_enc (t_i t_lp) v36))))) → (∀ v39 v40 v41 : ι, (((t_p v39) ∧ (t_p v40) ∧ (t_p v41)) → (t_p (t_enc v39 v40)))) → (t_p (t_enc t_tmk t_pp)) → (t_p (t_enc t_wk t_w)) → (t_p (t_enc t_w t_t1)) → (t_p (t_enc t_lp t_t2)) → (t_p (t_enc t_tc t_k)) → (t_p t_kk) → (t_p (t_i t_kk)) → (t_p t_a) → (t_p (t_enc t_pp t_a)) := by
  vampire
