-- KRS098+1, from TPTP v9.3.1 (KRS).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `KRS098+1.p`, beside this file. This is its statement in Lean:
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
variable {t_i2003__11__14__17__20__25524 : ι}
variable {t_cUnsatisfiable t_ca t_cc t_cd t_ce t_cowlNothing t_cowlThing t_xsd__integer t_xsd__string : ι → Prop}
variable {t_rr t_rr1 t_rr2 t_rr3 t_rt1 t_rt2 t_rt3 t_rtt : ι → ι → Prop}

theorem T_KRS098p1 : (∀ v0 v1 : ι, (((v0 = v1) ∧ (t_cUnsatisfiable v0)) → (t_cUnsatisfiable v1))) → (∀ v2 v3 : ι, (((v2 = v3) ∧ (t_ca v2)) → (t_ca v3))) → (∀ v4 v5 : ι, (((v4 = v5) ∧ (t_cc v4)) → (t_cc v5))) → (∀ v6 v7 : ι, (((v6 = v7) ∧ (t_cd v6)) → (t_cd v7))) → (∀ v8 v9 : ι, (((v8 = v9) ∧ (t_ce v8)) → (t_ce v9))) → (∀ v10 v11 : ι, (((v10 = v11) ∧ (t_cowlNothing v10)) → (t_cowlNothing v11))) → (∀ v12 v13 : ι, (((v12 = v13) ∧ (t_cowlThing v12)) → (t_cowlThing v13))) → (∀ v14 v15 v16 : ι, (((v14 = v15) ∧ (t_rr v14 v16)) → (t_rr v15 v16))) → (∀ v17 v18 v19 : ι, (((v17 = v18) ∧ (t_rr v19 v17)) → (t_rr v19 v18))) → (∀ v20 v21 v22 : ι, (((v20 = v21) ∧ (t_rr1 v20 v22)) → (t_rr1 v21 v22))) → (∀ v23 v24 v25 : ι, (((v23 = v24) ∧ (t_rr1 v25 v23)) → (t_rr1 v25 v24))) → (∀ v26 v27 v28 : ι, (((v26 = v27) ∧ (t_rr2 v26 v28)) → (t_rr2 v27 v28))) → (∀ v29 v30 v31 : ι, (((v29 = v30) ∧ (t_rr2 v31 v29)) → (t_rr2 v31 v30))) → (∀ v32 v33 v34 : ι, (((v32 = v33) ∧ (t_rr3 v32 v34)) → (t_rr3 v33 v34))) → (∀ v35 v36 v37 : ι, (((v35 = v36) ∧ (t_rr3 v37 v35)) → (t_rr3 v37 v36))) → (∀ v38 v39 v40 : ι, (((v38 = v39) ∧ (t_rt1 v38 v40)) → (t_rt1 v39 v40))) → (∀ v41 v42 v43 : ι, (((v41 = v42) ∧ (t_rt1 v43 v41)) → (t_rt1 v43 v42))) → (∀ v44 v45 v46 : ι, (((v44 = v45) ∧ (t_rt2 v44 v46)) → (t_rt2 v45 v46))) → (∀ v47 v48 v49 : ι, (((v47 = v48) ∧ (t_rt2 v49 v47)) → (t_rt2 v49 v48))) → (∀ v50 v51 v52 : ι, (((v50 = v51) ∧ (t_rt3 v50 v52)) → (t_rt3 v51 v52))) → (∀ v53 v54 v55 : ι, (((v53 = v54) ∧ (t_rt3 v55 v53)) → (t_rt3 v55 v54))) → (∀ v56 v57 v58 : ι, (((v56 = v57) ∧ (t_rtt v56 v58)) → (t_rtt v57 v58))) → (∀ v59 v60 v61 : ι, (((v59 = v60) ∧ (t_rtt v61 v59)) → (t_rtt v61 v60))) → (∀ v62 v63 : ι, (((v62 = v63) ∧ (t_xsd__integer v62)) → (t_xsd__integer v63))) → (∀ v64 v65 : ι, (((v64 = v65) ∧ (t_xsd__string v64)) → (t_xsd__string v65))) → (∀ v66 : ι, ((t_cowlThing v66) ∧ (¬(t_cowlNothing v66)))) → (∀ v67 : ι, ((t_xsd__string v67) ↔ (¬(t_xsd__integer v67)))) → (∀ v68 : ι, ((t_cUnsatisfiable v68) ↔ ((∃ v69 : ι, ((t_rr3 v68 v69) ∧ (∃ v70 : ι, ((t_rt3 v69 v70) ∧ (t_ce v70))) ∧ (∀ v71 v72 : ι, (((t_rtt v69 v71) ∧ (t_rtt v69 v72)) → (v71 = v72))))) ∧ (∃ v73 : ι, ((t_rr2 v68 v73) ∧ (∀ v74 v75 : ι, (((t_rtt v73 v74) ∧ (t_rtt v73 v75)) → (v74 = v75))) ∧ (∃ v76 : ι, ((t_rt2 v73 v76) ∧ (t_cd v76))))) ∧ (¬(∃ v77 v78 : ι, ((t_rr v68 v77) ∧ (t_rr v68 v78) ∧ (¬(v77 = v78))))) ∧ (∃ v79 : ι, ((t_rr1 v68 v79) ∧ (∀ v80 v81 : ι, (((t_rtt v79 v80) ∧ (t_rtt v79 v81)) → (v80 = v81))) ∧ (∃ v82 : ι, ((t_rt1 v79 v82) ∧ (t_cc v82)))))))) → (∀ v83 : ι, ((t_ca v83) ↔ ((t_cc v83) ∨ (t_cd v83)))) → (t_cUnsatisfiable t_i2003__11__14__17__20__25524) → (∀ v84 : ι, (¬((t_cc v84) ∧ (t_cd v84)))) → (∀ v85 : ι, (¬((t_ce v85) ∧ (t_cc v85)))) → (∀ v86 : ι, (¬((t_ce v86) ∧ (t_cd v86)))) → (∀ v87 v88 : ι, ((t_rr1 v87 v88) → (t_rr v87 v88))) → (∀ v89 v90 : ι, ((t_rr2 v89 v90) → (t_rr v89 v90))) → (∀ v91 v92 : ι, ((t_rt1 v91 v92) → (t_rtt v91 v92))) → (∀ v93 v94 : ι, ((t_rt2 v93 v94) → (t_rtt v93 v94))) → (∀ v95 v96 : ι, ((t_rr3 v95 v96) → (t_rr v95 v96))) → (∀ v97 v98 : ι, ((t_rt3 v97 v98) → (t_rtt v97 v98))) → False := by
  vampire
