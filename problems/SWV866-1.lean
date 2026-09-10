-- SWV866-1, from TPTP v9.3.1 (SWV).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.00s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV866-1.p`, beside this file. This is its statement in Lean:
-- one type variable for TPTP's single sort, functors as functions into it, predicates
-- as functions into `Prop`, and the whole problem as `axiom₁ → … → axiomₙ → goal`.
-- `False` as the goal means the problem states no conjecture and asks for a refutation.
--
-- Nothing is imported, so this file typechecks on its own.
set_option maxHeartbeats 0
set_option maxRecDepth 100000000
set_option linter.all false
universe u
variable {ι : Type u}
variable [inst : Inhabited ι]
variable {t_c__Com__Ocom__OSKIP t_v__Z t_v__c t_v__s__H t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____1 t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____2 t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____raw____1 t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____raw____2 : ι}
variable {t_v__sko____Hoare____Mirabelle____Xsingle____stateE____1 : ι → ι}
variable {t_c__Com__Ocom__OSemi : ι → ι → ι}
variable {t_c__Natural__Osko____Natural____Xeval____eq____1____1 t_c__Natural__Osko____Natural____Xevalc____evaln____1____1 : ι → ι → ι → ι}
variable {t_c__Natural__Osko____Natural____Xevalc____elim____cases____4____1 : ι → ι → ι → ι → ι}
variable {t_c__Natural__Osko____Natural____Xevaln____elim____cases____4____1 : ι → ι → ι → ι → ι → ι}
variable {t_c__Hoare____Mirabelle__Ostate____not____singleton : Prop}
variable {t_c__Natural__Oevalc : ι → ι → ι → Prop}
variable {t_c__Natural__Oevaln : ι → ι → ι → ι → Prop}

theorem T_SWV866m1 : (∀ v0 v1 v2 : ι, ((v2 = v1) ∨ (¬(t_c__Natural__Oevaln t_c__Com__Ocom__OSKIP v1 v0 v2)))) → (∀ v3 v4 v5 v6 : ι, ((t_c__Natural__Oevalc v4 (t_c__Natural__Osko____Natural____Xevalc____elim____cases____4____1 v3 v4 v5 v6) v6) ∨ (¬(t_c__Natural__Oevalc (t_c__Com__Ocom__OSemi v3 v4) v5 v6)))) → (∀ v7 v8 v9 v10 : ι, ((t_c__Natural__Oevalc v7 v9 (t_c__Natural__Osko____Natural____Xevalc____elim____cases____4____1 v7 v8 v9 v10)) ∨ (¬(t_c__Natural__Oevalc (t_c__Com__Ocom__OSemi v7 v8) v9 v10)))) → (∀ v11 v12 v13 v14 v15 v16 : ι, ((t_c__Natural__Oevaln (t_c__Com__Ocom__OSemi v11 v12) v14 v13 v16) ∨ (¬(t_c__Natural__Oevaln v12 v15 v13 v16)) ∨ (¬(t_c__Natural__Oevaln v11 v14 v13 v15)))) → (∀ v17 v18 v19 : ι, ((t_c__Natural__Oevaln v17 v18 (t_c__Natural__Osko____Natural____Xeval____eq____1____1 v17 v18 v19) v19) ∨ (¬(t_c__Natural__Oevalc v17 v18 v19)))) → (∀ v20 v21 v22 v23 : ι, ((¬((t_c__Com__Ocom__OSemi v20 v22) = (t_c__Com__Ocom__OSemi v21 v23))) ∨ (v22 = v23))) → (∀ v24 v25 v26 v27 : ι, ((¬((t_c__Com__Ocom__OSemi v24 v26) = (t_c__Com__Ocom__OSemi v25 v27))) ∨ (v24 = v25))) → (∀ v28 v29 v30 v31 v32 : ι, ((t_c__Natural__Oevaln v29 (t_c__Natural__Osko____Natural____Xevaln____elim____cases____4____1 v28 v29 v30 v31 v32) v30 v32) ∨ (¬(t_c__Natural__Oevaln (t_c__Com__Ocom__OSemi v28 v29) v31 v30 v32)))) → (∀ v33 v34 v35 v36 v37 : ι, ((t_c__Natural__Oevaln v33 v36 v35 (t_c__Natural__Osko____Natural____Xevaln____elim____cases____4____1 v33 v34 v35 v36 v37)) ∨ (¬(t_c__Natural__Oevaln (t_c__Com__Ocom__OSemi v33 v34) v36 v35 v37)))) → (∀ v38 v39 : ι, (t_c__Natural__Oevaln t_c__Com__Ocom__OSKIP v39 v38 v39)) → (∀ v40 v41 : ι, (¬((t_c__Com__Ocom__OSemi v40 v41) = t_c__Com__Ocom__OSKIP))) → (∀ v42 v43 v44 : ι, ((t_c__Natural__Oevaln v42 v43 (t_c__Natural__Osko____Natural____Xevalc____evaln____1____1 v42 v43 v44) v44) ∨ (¬(t_c__Natural__Oevalc v42 v43 v44)))) → (∀ v45 v46 : ι, (¬(t_c__Com__Ocom__OSKIP = (t_c__Com__Ocom__OSemi v45 v46)))) → (∀ v47 v48 v49 v50 : ι, ((v50 = v49) ∨ (¬(t_c__Natural__Oevalc v47 v48 v50)) ∨ (¬(t_c__Natural__Oevalc v47 v48 v49)))) → (∀ v51 : ι, (t_c__Natural__Oevalc t_c__Com__Ocom__OSKIP v51 v51)) → ((¬(t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____raw____1 = t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____raw____2)) ∨ (¬t_c__Hoare____Mirabelle__Ostate____not____singleton)) → (∀ v52 v53 : ι, (t_c__Hoare____Mirabelle__Ostate____not____singleton ∨ (v52 = v53))) → (∀ v54 : ι, ((¬((t_v__sko____Hoare____Mirabelle____Xsingle____stateE____1 v54) = v54)) ∨ (¬t_c__Hoare____Mirabelle__Ostate____not____singleton))) → (∀ v55 v56 v57 v58 v59 : ι, ((t_c__Natural__Oevalc (t_c__Com__Ocom__OSemi v55 v56) v57 v59) ∨ (¬(t_c__Natural__Oevalc v56 v58 v59)) ∨ (¬(t_c__Natural__Oevalc v55 v57 v58)))) → ((¬(t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____1 = t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____2)) ∨ (¬t_c__Hoare____Mirabelle__Ostate____not____singleton)) → (∀ v60 v61 : ι, ((v61 = v60) ∨ (¬(t_c__Natural__Oevalc t_c__Com__Ocom__OSKIP v60 v61)))) → (∀ v62 v63 v64 v65 : ι, ((t_c__Natural__Oevalc v62 v64 v65) ∨ (¬(t_c__Natural__Oevaln v62 v64 v63 v65)))) → (∀ v66 v67 v68 v69 : ι, ((t_c__Natural__Oevalc v66 v67 v68) ∨ (¬(t_c__Natural__Oevaln v66 v67 v69 v68)))) → t_c__Hoare____Mirabelle__Ostate____not____singleton → (∀ v70 : ι, (v70 = t_v__s__H)) → (∀ v71 : ι, (¬(t_c__Natural__Oevalc t_v__c t_v__Z v71))) → False := by
  sorry
