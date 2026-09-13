-- SYN595-1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.02s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN595-1.p`, beside this file. This is its statement in Lean:
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
variable {t_c16 t_c17 t_c18 t_c19 t_c20 t_c21 t_c22 : ι}
variable {t_f11 t_f12 t_f3 t_f4 t_f5 : ι → ι}
variable {t_f10 t_f13 t_f6 t_f8 t_f9 : ι → ι → ι}
variable {t_p14 t_p15 t_p2 t_p7 : ι → ι → Prop}

theorem T_SYN595m1 : (∀ v0 : ι, (t_p2 v0 v0)) → (∀ v1 : ι, (t_p7 v1 v1)) → (t_p2 t_c21 (t_f3 t_c17)) → (¬(t_p2 t_c16 (t_f3 t_c17))) → (t_p14 t_c18 (t_f3 (t_f4 (t_f5 t_c17)))) → (∀ v2 v3 : ι, ((t_p15 v2 v3) ∨ (¬(t_p14 v2 v3)))) → (∀ v4 v5 : ι, ((¬(t_p14 v4 v5)) ∨ (¬(t_p2 v4 v5)))) → (t_p14 t_c19 (t_f6 (t_f3 (t_f4 (t_f5 t_c17))) t_c16)) → (∀ v6 v7 : ι, ((t_p7 (t_f12 v6) (t_f12 v7)) ∨ (¬(t_p7 v6 v7)))) → (∀ v8 v9 : ι, ((t_p2 (t_f3 v8) (t_f3 v9)) ∨ (¬(t_p2 v8 v9)))) → (∀ v10 v11 : ι, ((t_p2 (t_f4 v10) (t_f4 v11)) ∨ (¬(t_p2 v10 v11)))) → (∀ v12 v13 : ι, ((t_p2 (t_f5 v12) (t_f5 v13)) ∨ (¬(t_p2 v12 v13)))) → (∀ v14 v15 : ι, ((t_p7 (t_f11 v14) (t_f11 v15)) ∨ (¬(t_p2 v14 v15)))) → (∀ v16 v17 : ι, ((t_p14 v16 v17) ∨ (t_p2 v16 v17) ∨ (¬(t_p15 v16 v17)))) → (∀ v18 v19 v20 : ι, ((t_p7 v19 v20) ∨ (¬(t_p7 v18 v19)) ∨ (¬(t_p7 v18 v20)))) → (∀ v21 v22 v23 : ι, ((t_p2 v22 v23) ∨ (¬(t_p2 v21 v22)) ∨ (¬(t_p2 v21 v23)))) → (t_p2 t_c19 (t_f6 (t_f3 (t_f4 (t_f5 t_c17))) (t_f13 t_c16 (t_f3 (t_f5 t_c17))))) → (∀ v24 v25 v26 v27 : ι, ((t_p14 v24 v25) ∨ (¬(t_p2 v26 v24)) ∨ (¬(t_p2 v27 v25)) ∨ (¬(t_p14 v26 v27)))) → (∀ v28 v29 v30 v31 : ι, ((t_p15 v28 v29) ∨ (¬(t_p2 v30 v28)) ∨ (¬(t_p2 v31 v29)) ∨ (¬(t_p15 v30 v31)))) → (∀ v32 v33 v34 v35 : ι, ((t_p2 (t_f13 v32 v33) (t_f13 v34 v35)) ∨ (¬(t_p2 v32 v34)) ∨ (¬(t_p2 v33 v35)))) → (∀ v36 v37 v38 v39 : ι, ((t_p7 (t_f9 v36 v37) (t_f9 v38 v39)) ∨ (¬(t_p7 v36 v38)) ∨ (¬(t_p7 v37 v39)))) → (∀ v40 v41 v42 v43 : ι, ((t_p7 (t_f8 v40 v41) (t_f8 v42 v43)) ∨ (¬(t_p7 v40 v42)) ∨ (¬(t_p7 v41 v43)))) → (∀ v44 v45 v46 v47 : ι, ((t_p7 (t_f10 v44 v45) (t_f10 v46 v47)) ∨ (¬(t_p2 v45 v47)) ∨ (¬(t_p7 v44 v46)))) → (∀ v48 v49 v50 v51 : ι, ((t_p2 (t_f6 v48 v49) (t_f6 v50 v51)) ∨ (¬(t_p2 v48 v50)) ∨ (¬(t_p2 v49 v51)))) → (t_p7 t_c20 (t_f8 (t_f10 (t_f12 (t_f11 (t_f3 (t_f5 t_c17)))) t_c18) (t_f8 (t_f10 (t_f11 (t_f3 (t_f4 (t_f5 t_c17)))) t_c21) (t_f9 (t_f11 t_c19) (t_f10 (t_f11 (t_f3 (t_f4 (t_f5 t_c17)))) t_c22))))) → (∀ v52 v53 v54 : ι, ((¬(t_p2 v54 (t_f3 t_c17))) ∨ (¬(t_p14 v52 (t_f3 (t_f4 (t_f5 t_c17))))) ∨ (¬(t_p15 v53 (t_f6 (t_f3 (t_f4 (t_f5 t_c17))) t_c16))) ∨ (¬(t_p7 (t_f8 (t_f10 (t_f12 (t_f11 (t_f3 (t_f5 t_c17)))) t_c18) (t_f8 (t_f10 (t_f11 (t_f3 (t_f4 (t_f5 t_c17)))) (t_f3 t_c17)) (t_f9 (t_f11 (t_f6 (t_f3 (t_f4 (t_f5 t_c17))) (t_f13 t_c16 (t_f3 (t_f5 t_c17))))) (t_f10 (t_f11 (t_f3 (t_f4 (t_f5 t_c17)))) t_c22)))) (t_f8 (t_f10 (t_f12 (t_f11 (t_f3 (t_f5 t_c17)))) v52) (t_f8 (t_f10 (t_f11 (t_f3 (t_f4 (t_f5 t_c17)))) v54) (t_f9 (t_f11 v53) (t_f10 (t_f11 (t_f3 (t_f4 (t_f5 t_c17)))) t_c22)))))))) → (∀ v55 v56 v57 : ι, ((¬(t_p14 v55 (t_f3 (t_f4 (t_f5 t_c17))))) ∨ (¬(t_p15 v56 (t_f6 (t_f3 (t_f4 (t_f5 t_c17))) t_c16))) ∨ (¬(t_p14 (t_f6 (t_f3 (t_f4 (t_f5 t_c17))) (t_f13 t_c16 (t_f3 (t_f5 t_c17)))) v56)) ∨ (¬(t_p7 (t_f8 (t_f10 (t_f12 (t_f11 (t_f3 (t_f5 t_c17)))) t_c18) (t_f8 (t_f10 (t_f11 (t_f3 (t_f4 (t_f5 t_c17)))) (t_f3 t_c17)) (t_f9 (t_f11 (t_f6 (t_f3 (t_f4 (t_f5 t_c17))) (t_f13 t_c16 (t_f3 (t_f5 t_c17))))) (t_f10 (t_f11 (t_f3 (t_f4 (t_f5 t_c17)))) t_c22)))) (t_f8 (t_f10 (t_f12 (t_f11 (t_f3 (t_f5 t_c17)))) v55) (t_f8 (t_f10 (t_f11 (t_f3 (t_f4 (t_f5 t_c17)))) v57) (t_f9 (t_f11 v56) (t_f10 (t_f11 (t_f3 (t_f4 (t_f5 t_c17)))) t_c22)))))))) → False := by
  vampire
