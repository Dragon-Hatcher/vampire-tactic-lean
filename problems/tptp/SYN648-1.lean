-- SYN648-1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN648-1.p`, beside this file. This is its statement in Lean:
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
variable {t_c27 t_c28 t_c29 t_c30 t_c31 t_c32 t_c33 t_c34 : ι}
variable {t_f11 t_f13 t_f15 t_f17 t_f19 t_f21 t_f23 t_f4 t_f6 t_f9 : ι → ι → ι}
variable {t_p10 t_p12 t_p14 t_p16 t_p18 t_p2 t_p20 t_p22 t_p24 t_p25 t_p26 t_p3 t_p5 t_p7 t_p8 : ι → ι → Prop}

theorem T_SYN648m1 : (∀ v0 : ι, (t_p10 v0 v0)) → (∀ v1 : ι, (t_p8 v1 v1)) → (∀ v2 : ι, (t_p7 v2 v2)) → (∀ v3 : ι, (t_p5 v3 v3)) → (∀ v4 : ι, (t_p3 v4 v4)) → (∀ v5 : ι, (t_p25 v5 v5)) → (∀ v6 : ι, (t_p22 v6 v6)) → (∀ v7 : ι, (t_p20 v7 v7)) → (∀ v8 : ι, (t_p2 v8 v8)) → (∀ v9 : ι, (t_p18 v9 v9)) → (∀ v10 : ι, (t_p16 v10 v10)) → (∀ v11 : ι, (t_p14 v11 v11)) → (∀ v12 : ι, (t_p12 v12 v12)) → (t_p2 t_c27 t_c30) → (t_p26 t_c31 t_c30) → (¬(t_p24 (t_f4 t_c27 t_c28) t_c29)) → (∀ v13 v14 v15 : ι, ((t_p10 v14 v15) ∨ (¬(t_p10 v13 v14)) ∨ (¬(t_p10 v13 v15)))) → (∀ v16 v17 v18 : ι, ((t_p8 v17 v18) ∨ (¬(t_p8 v16 v17)) ∨ (¬(t_p8 v16 v18)))) → (∀ v19 v20 v21 : ι, ((t_p7 v20 v21) ∨ (¬(t_p7 v19 v20)) ∨ (¬(t_p7 v19 v21)))) → (∀ v22 v23 v24 : ι, ((t_p5 v23 v24) ∨ (¬(t_p5 v22 v23)) ∨ (¬(t_p5 v22 v24)))) → (∀ v25 v26 v27 : ι, ((t_p3 v26 v27) ∨ (¬(t_p3 v25 v26)) ∨ (¬(t_p3 v25 v27)))) → (∀ v28 v29 v30 : ι, ((t_p25 v29 v30) ∨ (¬(t_p25 v28 v29)) ∨ (¬(t_p25 v28 v30)))) → (∀ v31 v32 v33 : ι, ((t_p22 v32 v33) ∨ (¬(t_p22 v31 v32)) ∨ (¬(t_p22 v31 v33)))) → (∀ v34 v35 v36 : ι, ((t_p20 v35 v36) ∨ (¬(t_p20 v34 v35)) ∨ (¬(t_p20 v34 v36)))) → (∀ v37 v38 v39 : ι, ((t_p2 v38 v39) ∨ (¬(t_p2 v37 v38)) ∨ (¬(t_p2 v37 v39)))) → (∀ v40 v41 v42 : ι, ((t_p18 v41 v42) ∨ (¬(t_p18 v40 v41)) ∨ (¬(t_p18 v40 v42)))) → (∀ v43 v44 v45 : ι, ((t_p16 v44 v45) ∨ (¬(t_p16 v43 v44)) ∨ (¬(t_p16 v43 v45)))) → (∀ v46 v47 v48 : ι, ((t_p14 v47 v48) ∨ (¬(t_p14 v46 v47)) ∨ (¬(t_p14 v46 v48)))) → (∀ v49 v50 v51 : ι, ((t_p12 v50 v51) ∨ (¬(t_p12 v49 v50)) ∨ (¬(t_p12 v49 v51)))) → (∀ v52 v53 : ι, ((t_p24 (t_f4 t_c30 v52) v53) ∨ (¬(t_p24 (t_f4 (t_f6 t_c32 t_c30) v52) v53)))) → (∀ v54 v55 v56 v57 : ι, ((t_p24 v54 v55) ∨ (¬(t_p3 v56 v54)) ∨ (¬(t_p8 v57 v55)) ∨ (¬(t_p24 v56 v57)))) → (∀ v58 v59 v60 v61 : ι, ((t_p26 v58 v59) ∨ (¬(t_p25 v61 v58)) ∨ (¬(t_p26 v61 v60)) ∨ (¬(t_p2 v60 v59)))) → (∀ v62 v63 v64 v65 : ι, ((t_p8 (t_f9 v62 v63) (t_f9 v64 v65)) ∨ (¬(t_p2 v63 v65)) ∨ (¬(t_p7 v62 v64)))) → (∀ v66 v67 v68 v69 : ι, ((t_p10 (t_f13 v66 v67) (t_f13 v68 v69)) ∨ (¬(t_p12 v66 v68)) ∨ (¬(t_p3 v67 v69)))) → (∀ v70 v71 v72 v73 : ι, ((t_p12 (t_f15 v70 v71) (t_f15 v72 v73)) ∨ (¬(t_p14 v70 v72)) ∨ (¬(t_p3 v71 v73)))) → (∀ v74 v75 v76 v77 : ι, ((t_p16 (t_f19 v74 v75) (t_f19 v76 v77)) ∨ (¬(t_p18 v74 v76)) ∨ (¬(t_p2 v75 v77)))) → (∀ v78 v79 v80 v81 : ι, ((t_p18 (t_f21 v78 v79) (t_f21 v80 v81)) ∨ (¬(t_p20 v78 v80)) ∨ (¬(t_p3 v79 v81)))) → (∀ v82 v83 v84 v85 : ι, ((t_p2 (t_f6 v82 v83) (t_f6 v84 v85)) ∨ (¬(t_p2 v83 v85)) ∨ (¬(t_p5 v82 v84)))) → (∀ v86 v87 v88 v89 : ι, ((t_p20 (t_f23 v86 v87) (t_f23 v88 v89)) ∨ (¬(t_p22 v86 v88)) ∨ (¬(t_p3 v87 v89)))) → (∀ v90 v91 v92 v93 : ι, ((t_p3 (t_f17 v90 v91) (t_f17 v92 v93)) ∨ (¬(t_p16 v90 v92)) ∨ (¬(t_p2 v91 v93)))) → (∀ v94 v95 v96 v97 : ι, ((t_p3 (t_f4 v94 v95) (t_f4 v96 v97)) ∨ (¬(t_p2 v94 v96)) ∨ (¬(t_p3 v95 v97)))) → (∀ v98 v99 v100 v101 : ι, ((t_p7 (t_f11 v98 v99) (t_f11 v100 v101)) ∨ (¬(t_p10 v98 v100)) ∨ (¬(t_p2 v99 v101)))) → (∀ v102 v103 v104 v105 : ι, ((t_p24 v102 t_c29) ∨ (¬(t_p3 v102 v104)) ∨ (¬(t_p2 v105 v103)) ∨ (¬(t_p26 t_c31 v103)) ∨ (¬(t_p3 v104 (t_f4 v105 t_c28))) ∨ (¬(t_p24 (t_f4 v103 (t_f17 (t_f19 (t_f21 (t_f23 t_c33 v102) v104) v105) v103)) (t_f9 (t_f11 (t_f13 (t_f15 t_c34 v102) v104) v105) v103))))) → (∀ v106 v107 v108 v109 : ι, ((t_p24 v106 t_c29) ∨ (t_p24 (t_f4 (t_f6 t_c32 v107) (t_f17 (t_f19 (t_f21 (t_f23 t_c33 v106) v108) v109) v107)) (t_f9 (t_f11 (t_f13 (t_f15 t_c34 v106) v108) v109) v107)) ∨ (¬(t_p3 v106 v108)) ∨ (¬(t_p2 v109 v107)) ∨ (¬(t_p26 t_c31 v107)) ∨ (¬(t_p3 v108 (t_f4 v109 t_c28))))) → False := by
  vampire
