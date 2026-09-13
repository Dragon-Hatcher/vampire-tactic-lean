-- KRS076+1, from TPTP v9.3.1 (KRS).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `KRS076+1.p`, beside this file. This is its statement in Lean:
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
variable {t_i2003__11__14__17__19__06193 : ι}
variable {t_cUnsatisfiable t_cowlNothing t_cowlThing t_cp t_xsd__integer t_xsd__string : ι → Prop}
variable {t_rf t_rf1 t_rinvF t_rinvF1 t_rinvS t_rs : ι → ι → Prop}

theorem T_KRS076p1 : (∀ v0 v1 : ι, (((v0 = v1) ∧ (t_cUnsatisfiable v0)) → (t_cUnsatisfiable v1))) → (∀ v2 v3 : ι, (((v2 = v3) ∧ (t_cowlNothing v2)) → (t_cowlNothing v3))) → (∀ v4 v5 : ι, (((v4 = v5) ∧ (t_cowlThing v4)) → (t_cowlThing v5))) → (∀ v6 v7 : ι, (((v6 = v7) ∧ (t_cp v6)) → (t_cp v7))) → (∀ v8 v9 v10 : ι, (((v8 = v9) ∧ (t_rf v8 v10)) → (t_rf v9 v10))) → (∀ v11 v12 v13 : ι, (((v11 = v12) ∧ (t_rf v13 v11)) → (t_rf v13 v12))) → (∀ v14 v15 v16 : ι, (((v14 = v15) ∧ (t_rf1 v14 v16)) → (t_rf1 v15 v16))) → (∀ v17 v18 v19 : ι, (((v17 = v18) ∧ (t_rf1 v19 v17)) → (t_rf1 v19 v18))) → (∀ v20 v21 v22 : ι, (((v20 = v21) ∧ (t_rinvF v20 v22)) → (t_rinvF v21 v22))) → (∀ v23 v24 v25 : ι, (((v23 = v24) ∧ (t_rinvF v25 v23)) → (t_rinvF v25 v24))) → (∀ v26 v27 v28 : ι, (((v26 = v27) ∧ (t_rinvF1 v26 v28)) → (t_rinvF1 v27 v28))) → (∀ v29 v30 v31 : ι, (((v29 = v30) ∧ (t_rinvF1 v31 v29)) → (t_rinvF1 v31 v30))) → (∀ v32 v33 v34 : ι, (((v32 = v33) ∧ (t_rinvS v32 v34)) → (t_rinvS v33 v34))) → (∀ v35 v36 v37 : ι, (((v35 = v36) ∧ (t_rinvS v37 v35)) → (t_rinvS v37 v36))) → (∀ v38 v39 v40 : ι, (((v38 = v39) ∧ (t_rs v38 v40)) → (t_rs v39 v40))) → (∀ v41 v42 v43 : ι, (((v41 = v42) ∧ (t_rs v43 v41)) → (t_rs v43 v42))) → (∀ v44 v45 : ι, (((v44 = v45) ∧ (t_xsd__integer v44)) → (t_xsd__integer v45))) → (∀ v46 v47 : ι, (((v46 = v47) ∧ (t_xsd__string v46)) → (t_xsd__string v47))) → (∀ v48 : ι, ((t_cowlThing v48) ∧ (¬(t_cowlNothing v48)))) → (∀ v49 : ι, ((t_xsd__string v49) ↔ (¬(t_xsd__integer v49)))) → (∀ v50 : ι, ((t_cUnsatisfiable v50) ↔ ((∃ v51 : ι, ((t_rf v50 v51) ∧ (t_cp v51))) ∧ (∃ v52 : ι, ((t_rf1 v50 v52) ∧ (¬(t_cp v52)) ∧ (∀ v53 : ι, ((t_rinvF1 v52 v53) → (∃ v54 : ι, ((t_rs v53 v54) ∧ (t_cowlThing v54)))))))))) → (∀ v55 v56 v57 : ι, (((t_rf v55 v56) ∧ (t_rf v55 v57)) → (v56 = v57))) → (∀ v58 v59 v60 : ι, (((t_rf1 v58 v59) ∧ (t_rf1 v58 v60)) → (v59 = v60))) → (∀ v61 v62 : ι, ((t_rinvF v61 v62) ↔ (t_rf v62 v61))) → (∀ v63 v64 : ι, ((t_rinvF1 v63 v64) ↔ (t_rf1 v64 v63))) → (∀ v65 v66 : ι, ((t_rinvS v65 v66) ↔ (t_rs v66 v65))) → (∀ v67 v68 v69 : ι, (((t_rs v67 v68) ∧ (t_rs v67 v69)) → (v68 = v69))) → (t_cUnsatisfiable t_i2003__11__14__17__19__06193) → (∀ v70 v71 : ι, ((t_rs v70 v71) → (t_rf1 v70 v71))) → (∀ v72 v73 : ι, ((t_rs v72 v73) → (t_rf v72 v73))) → False := by
  vampire
