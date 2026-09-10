-- NUM431+1, from TPTP v9.3.1 (NUM).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.46s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NUM431+1.p`, beside this file. This is its statement in Lean:
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
variable {t_sz00 t_sz10 t_xa t_xb t_xc t_xm t_xn t_xq : ι}
variable {t_smndt0 : ι → ι}
variable {t_sdtasdt0 t_sdtpldt0 : ι → ι → ι}
variable {t_aInteger0 : ι → Prop}
variable {t_aDivisorOf0 : ι → ι → Prop}
variable {t_sdteqdtlpzmzozddtrp0 : ι → ι → ι → Prop}

theorem T_NUM431p1 : (∀ v0 : ι, ((t_aInteger0 v0) → True)) → (t_aInteger0 t_sz00) → (t_aInteger0 t_sz10) → (∀ v1 : ι, ((t_aInteger0 v1) → (t_aInteger0 (t_smndt0 v1)))) → (∀ v2 v3 : ι, (((t_aInteger0 v2) ∧ (t_aInteger0 v3)) → (t_aInteger0 (t_sdtpldt0 v2 v3)))) → (∀ v4 v5 : ι, (((t_aInteger0 v4) ∧ (t_aInteger0 v5)) → (t_aInteger0 (t_sdtasdt0 v4 v5)))) → (∀ v6 v7 v8 : ι, (((t_aInteger0 v6) ∧ (t_aInteger0 v7) ∧ (t_aInteger0 v8)) → ((t_sdtpldt0 v6 (t_sdtpldt0 v7 v8)) = (t_sdtpldt0 (t_sdtpldt0 v6 v7) v8)))) → (∀ v9 v10 : ι, (((t_aInteger0 v9) ∧ (t_aInteger0 v10)) → ((t_sdtpldt0 v9 v10) = (t_sdtpldt0 v10 v9)))) → (∀ v11 : ι, ((t_aInteger0 v11) → (((t_sdtpldt0 v11 t_sz00) = v11) ∧ (v11 = (t_sdtpldt0 t_sz00 v11))))) → (∀ v12 : ι, ((t_aInteger0 v12) → (((t_sdtpldt0 v12 (t_smndt0 v12)) = t_sz00) ∧ (t_sz00 = (t_sdtpldt0 (t_smndt0 v12) v12))))) → (∀ v13 v14 v15 : ι, (((t_aInteger0 v13) ∧ (t_aInteger0 v14) ∧ (t_aInteger0 v15)) → ((t_sdtasdt0 v13 (t_sdtasdt0 v14 v15)) = (t_sdtasdt0 (t_sdtasdt0 v13 v14) v15)))) → (∀ v16 v17 : ι, (((t_aInteger0 v16) ∧ (t_aInteger0 v17)) → ((t_sdtasdt0 v16 v17) = (t_sdtasdt0 v17 v16)))) → (∀ v18 : ι, ((t_aInteger0 v18) → (((t_sdtasdt0 v18 t_sz10) = v18) ∧ (v18 = (t_sdtasdt0 t_sz10 v18))))) → (∀ v19 v20 v21 : ι, (((t_aInteger0 v19) ∧ (t_aInteger0 v20) ∧ (t_aInteger0 v21)) → (((t_sdtasdt0 v19 (t_sdtpldt0 v20 v21)) = (t_sdtpldt0 (t_sdtasdt0 v19 v20) (t_sdtasdt0 v19 v21))) ∧ ((t_sdtasdt0 (t_sdtpldt0 v19 v20) v21) = (t_sdtpldt0 (t_sdtasdt0 v19 v21) (t_sdtasdt0 v20 v21)))))) → (∀ v22 : ι, ((t_aInteger0 v22) → (((t_sdtasdt0 v22 t_sz00) = t_sz00) ∧ (t_sz00 = (t_sdtasdt0 t_sz00 v22))))) → (∀ v23 : ι, ((t_aInteger0 v23) → (((t_sdtasdt0 (t_smndt0 t_sz10) v23) = (t_smndt0 v23)) ∧ ((t_smndt0 v23) = (t_sdtasdt0 v23 (t_smndt0 t_sz10)))))) → (∀ v24 v25 : ι, (((t_aInteger0 v24) ∧ (t_aInteger0 v25)) → (((t_sdtasdt0 v24 v25) = t_sz00) → ((v24 = t_sz00) ∨ (v25 = t_sz00))))) → (∀ v26 : ι, ((t_aInteger0 v26) → (∀ v27 : ι, ((t_aDivisorOf0 v27 v26) ↔ ((t_aInteger0 v27) ∧ (¬(v27 = t_sz00)) ∧ (∃ v28 : ι, ((t_aInteger0 v28) ∧ ((t_sdtasdt0 v27 v28) = v26)))))))) → (∀ v29 v30 v31 : ι, (((t_aInteger0 v29) ∧ (t_aInteger0 v30) ∧ (t_aInteger0 v31) ∧ (¬(v31 = t_sz00))) → ((t_sdteqdtlpzmzozddtrp0 v29 v30 v31) ↔ (t_aDivisorOf0 v31 (t_sdtpldt0 v29 (t_smndt0 v30)))))) → (∀ v32 v33 : ι, (((t_aInteger0 v32) ∧ (t_aInteger0 v33) ∧ (¬(v33 = t_sz00))) → (t_sdteqdtlpzmzozddtrp0 v32 v32 v33))) → (∀ v34 v35 v36 : ι, (((t_aInteger0 v34) ∧ (t_aInteger0 v35) ∧ (t_aInteger0 v36) ∧ (¬(v36 = t_sz00))) → ((t_sdteqdtlpzmzozddtrp0 v34 v35 v36) → (t_sdteqdtlpzmzozddtrp0 v35 v34 v36)))) → ((t_aInteger0 t_xa) ∧ (t_aInteger0 t_xb) ∧ (t_aInteger0 t_xq) ∧ (¬(t_xq = t_sz00)) ∧ (t_aInteger0 t_xc)) → ((t_sdteqdtlpzmzozddtrp0 t_xa t_xb t_xq) ∧ (t_sdteqdtlpzmzozddtrp0 t_xb t_xc t_xq)) → ((t_aInteger0 t_xn) ∧ ((t_sdtasdt0 t_xq t_xn) = (t_sdtpldt0 t_xa (t_smndt0 t_xb)))) → ((t_aInteger0 t_xm) ∧ ((t_sdtasdt0 t_xq t_xm) = (t_sdtpldt0 t_xb (t_smndt0 t_xc)))) → ((t_sdtasdt0 t_xq (t_sdtpldt0 t_xn t_xm)) = (t_sdtpldt0 t_xa (t_smndt0 t_xc))) := by
  vampire
