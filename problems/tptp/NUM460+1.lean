-- NUM460+1, from TPTP v9.3.1 (NUM).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.45s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NUM460+1.p`, beside this file. This is its statement in Lean:
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
variable {t_sz00 t_sz10 t_xl t_xm t_xn : ι}
variable {t_sdtasdt0 t_sdtmndt0 t_sdtpldt0 : ι → ι → ι}
variable {t_aNaturalNumber0 : ι → Prop}
variable {t_sdtlseqdt0 : ι → ι → Prop}

theorem T_NUM460p1 : (∀ v0 : ι, ((t_aNaturalNumber0 v0) → True)) → (t_aNaturalNumber0 t_sz00) → ((t_aNaturalNumber0 t_sz10) ∧ (¬(t_sz10 = t_sz00))) → (∀ v1 v2 : ι, (((t_aNaturalNumber0 v1) ∧ (t_aNaturalNumber0 v2)) → (t_aNaturalNumber0 (t_sdtpldt0 v1 v2)))) → (∀ v3 v4 : ι, (((t_aNaturalNumber0 v3) ∧ (t_aNaturalNumber0 v4)) → (t_aNaturalNumber0 (t_sdtasdt0 v3 v4)))) → (∀ v5 v6 : ι, (((t_aNaturalNumber0 v5) ∧ (t_aNaturalNumber0 v6)) → ((t_sdtpldt0 v5 v6) = (t_sdtpldt0 v6 v5)))) → (∀ v7 v8 v9 : ι, (((t_aNaturalNumber0 v7) ∧ (t_aNaturalNumber0 v8) ∧ (t_aNaturalNumber0 v9)) → ((t_sdtpldt0 (t_sdtpldt0 v7 v8) v9) = (t_sdtpldt0 v7 (t_sdtpldt0 v8 v9))))) → (∀ v10 : ι, ((t_aNaturalNumber0 v10) → (((t_sdtpldt0 v10 t_sz00) = v10) ∧ (v10 = (t_sdtpldt0 t_sz00 v10))))) → (∀ v11 v12 : ι, (((t_aNaturalNumber0 v11) ∧ (t_aNaturalNumber0 v12)) → ((t_sdtasdt0 v11 v12) = (t_sdtasdt0 v12 v11)))) → (∀ v13 v14 v15 : ι, (((t_aNaturalNumber0 v13) ∧ (t_aNaturalNumber0 v14) ∧ (t_aNaturalNumber0 v15)) → ((t_sdtasdt0 (t_sdtasdt0 v13 v14) v15) = (t_sdtasdt0 v13 (t_sdtasdt0 v14 v15))))) → (∀ v16 : ι, ((t_aNaturalNumber0 v16) → (((t_sdtasdt0 v16 t_sz10) = v16) ∧ (v16 = (t_sdtasdt0 t_sz10 v16))))) → (∀ v17 : ι, ((t_aNaturalNumber0 v17) → (((t_sdtasdt0 v17 t_sz00) = t_sz00) ∧ (t_sz00 = (t_sdtasdt0 t_sz00 v17))))) → (∀ v18 v19 v20 : ι, (((t_aNaturalNumber0 v18) ∧ (t_aNaturalNumber0 v19) ∧ (t_aNaturalNumber0 v20)) → (((t_sdtasdt0 v18 (t_sdtpldt0 v19 v20)) = (t_sdtpldt0 (t_sdtasdt0 v18 v19) (t_sdtasdt0 v18 v20))) ∧ ((t_sdtasdt0 (t_sdtpldt0 v19 v20) v18) = (t_sdtpldt0 (t_sdtasdt0 v19 v18) (t_sdtasdt0 v20 v18)))))) → (∀ v21 v22 v23 : ι, (((t_aNaturalNumber0 v21) ∧ (t_aNaturalNumber0 v22) ∧ (t_aNaturalNumber0 v23)) → ((((t_sdtpldt0 v21 v22) = (t_sdtpldt0 v21 v23)) ∨ ((t_sdtpldt0 v22 v21) = (t_sdtpldt0 v23 v21))) → (v22 = v23)))) → (∀ v24 : ι, ((t_aNaturalNumber0 v24) → ((¬(v24 = t_sz00)) → (∀ v25 v26 : ι, (((t_aNaturalNumber0 v25) ∧ (t_aNaturalNumber0 v26)) → ((((t_sdtasdt0 v24 v25) = (t_sdtasdt0 v24 v26)) ∨ ((t_sdtasdt0 v25 v24) = (t_sdtasdt0 v26 v24))) → (v25 = v26))))))) → (∀ v27 v28 : ι, (((t_aNaturalNumber0 v27) ∧ (t_aNaturalNumber0 v28)) → (((t_sdtpldt0 v27 v28) = t_sz00) → ((v27 = t_sz00) ∧ (v28 = t_sz00))))) → (∀ v29 v30 : ι, (((t_aNaturalNumber0 v29) ∧ (t_aNaturalNumber0 v30)) → (((t_sdtasdt0 v29 v30) = t_sz00) → ((v29 = t_sz00) ∨ (v30 = t_sz00))))) → (∀ v31 v32 : ι, (((t_aNaturalNumber0 v31) ∧ (t_aNaturalNumber0 v32)) → ((t_sdtlseqdt0 v31 v32) ↔ (∃ v33 : ι, ((t_aNaturalNumber0 v33) ∧ ((t_sdtpldt0 v31 v33) = v32)))))) → (∀ v34 v35 : ι, (((t_aNaturalNumber0 v34) ∧ (t_aNaturalNumber0 v35)) → ((t_sdtlseqdt0 v34 v35) → (∀ v36 : ι, ((v36 = (t_sdtmndt0 v35 v34)) ↔ ((t_aNaturalNumber0 v36) ∧ ((t_sdtpldt0 v34 v36) = v35))))))) → (∀ v37 : ι, ((t_aNaturalNumber0 v37) → (t_sdtlseqdt0 v37 v37))) → (∀ v38 v39 : ι, (((t_aNaturalNumber0 v38) ∧ (t_aNaturalNumber0 v39)) → (((t_sdtlseqdt0 v38 v39) ∧ (t_sdtlseqdt0 v39 v38)) → (v38 = v39)))) → ((t_aNaturalNumber0 t_xm) ∧ (t_aNaturalNumber0 t_xn) ∧ (t_aNaturalNumber0 t_xl)) → (((t_sdtlseqdt0 t_xm t_xn) ∧ (t_sdtlseqdt0 t_xn t_xl)) → (t_sdtlseqdt0 t_xm t_xl)) := by
  vampire
