-- KRS087+1, from TPTP v9.3.1 (KRS).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `KRS087+1.p`, beside this file. This is its statement in Lean:
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
variable {t_i2003__11__14__17__19__46763 : ι}
variable {t_cUnsatisfiable t_cowlNothing t_cowlThing t_cp1 t_xsd__integer t_xsd__string : ι → Prop}
variable {t_rf t_rinvF t_rinvR t_rr : ι → ι → Prop}

theorem T_KRS087p1 : (∀ v0 v1 : ι, (((v0 = v1) ∧ (t_cUnsatisfiable v0)) → (t_cUnsatisfiable v1))) → (∀ v2 v3 : ι, (((v2 = v3) ∧ (t_cowlNothing v2)) → (t_cowlNothing v3))) → (∀ v4 v5 : ι, (((v4 = v5) ∧ (t_cowlThing v4)) → (t_cowlThing v5))) → (∀ v6 v7 : ι, (((v6 = v7) ∧ (t_cp1 v6)) → (t_cp1 v7))) → (∀ v8 v9 v10 : ι, (((v8 = v9) ∧ (t_rf v8 v10)) → (t_rf v9 v10))) → (∀ v11 v12 v13 : ι, (((v11 = v12) ∧ (t_rf v13 v11)) → (t_rf v13 v12))) → (∀ v14 v15 v16 : ι, (((v14 = v15) ∧ (t_rinvF v14 v16)) → (t_rinvF v15 v16))) → (∀ v17 v18 v19 : ι, (((v17 = v18) ∧ (t_rinvF v19 v17)) → (t_rinvF v19 v18))) → (∀ v20 v21 v22 : ι, (((v20 = v21) ∧ (t_rinvR v20 v22)) → (t_rinvR v21 v22))) → (∀ v23 v24 v25 : ι, (((v23 = v24) ∧ (t_rinvR v25 v23)) → (t_rinvR v25 v24))) → (∀ v26 v27 v28 : ι, (((v26 = v27) ∧ (t_rr v26 v28)) → (t_rr v27 v28))) → (∀ v29 v30 v31 : ι, (((v29 = v30) ∧ (t_rr v31 v29)) → (t_rr v31 v30))) → (∀ v32 v33 : ι, (((v32 = v33) ∧ (t_xsd__integer v32)) → (t_xsd__integer v33))) → (∀ v34 v35 : ι, (((v34 = v35) ∧ (t_xsd__string v34)) → (t_xsd__string v35))) → (∀ v36 : ι, ((t_cowlThing v36) ∧ (¬(t_cowlNothing v36)))) → (∀ v37 : ι, ((t_xsd__string v37) ↔ (¬(t_xsd__integer v37)))) → (∀ v38 : ι, ((t_cUnsatisfiable v38) ↔ ((t_cp1 v38) ∧ (∃ v39 : ι, ((t_rr v38 v39) ∧ (∃ v40 : ι, ((t_rr v39 v40) ∧ (∀ v41 : ι, ((t_rinvR v40 v41) → (¬(t_cp1 v41)))) ∧ (t_cp1 v40)))))))) → (∀ v42 v43 v44 : ι, (((t_rf v42 v43) ∧ (t_rf v42 v44)) → (v43 = v44))) → (∀ v45 v46 : ι, ((t_rinvF v45 v46) ↔ (t_rf v46 v45))) → (∀ v47 v48 : ι, ((t_rinvR v47 v48) ↔ (t_rr v48 v47))) → (∀ v49 v50 v51 : ι, (((t_rr v49 v50) ∧ (t_rr v50 v51)) → (t_rr v49 v51))) → (t_cUnsatisfiable t_i2003__11__14__17__19__46763) → False := by
  vampire
