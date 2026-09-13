-- SYN586-1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN586-1.p`, beside this file. This is its statement in Lean:
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
variable {t_c16 t_c17 t_c18 t_c19 t_c20 t_c21 : ι}
variable {t_f10 t_f11 t_f13 t_f7 t_f8 t_f9 : ι → ι}
variable {t_f14 t_f4 t_f6 : ι → ι → ι}
variable {t_p12 t_p15 t_p2 t_p3 t_p5 : ι → ι → Prop}

theorem T_SYN586m1 : (∀ v0 : ι, (t_p12 v0 v0)) → (∀ v1 : ι, (t_p5 v1 v1)) → (∀ v2 : ι, (t_p3 v2 v2)) → (∀ v3 : ι, (t_p2 v3 v3)) → (t_p3 t_c21 t_c19) → (¬(t_p12 (t_f13 t_c20) (t_f13 t_c18))) → (∀ v4 v5 : ι, ((t_p12 (t_f13 v4) (t_f13 v5)) ∨ (¬(t_p2 v4 v5)))) → (∀ v6 v7 : ι, ((t_p5 (t_f7 v6) (t_f7 v7)) ∨ (¬(t_p3 v6 v7)))) → (∀ v8 v9 : ι, ((t_p5 (t_f10 v8) (t_f10 v9)) ∨ (¬(t_p5 v8 v9)))) → (∀ v10 v11 : ι, ((t_p3 (t_f9 v10) (t_f9 v11)) ∨ (¬(t_p3 v10 v11)))) → (∀ v12 v13 : ι, ((t_p3 (t_f8 v12) (t_f8 v13)) ∨ (¬(t_p3 v12 v13)))) → (∀ v14 v15 : ι, ((t_p3 (t_f11 v14) (t_f11 v15)) ∨ (¬(t_p3 v14 v15)))) → (∀ v16 v17 v18 : ι, ((t_p12 v17 v18) ∨ (¬(t_p12 v16 v17)) ∨ (¬(t_p12 v16 v18)))) → (∀ v19 v20 v21 : ι, ((t_p5 v20 v21) ∨ (¬(t_p5 v19 v20)) ∨ (¬(t_p5 v19 v21)))) → (∀ v22 v23 v24 : ι, ((t_p3 v23 v24) ∨ (¬(t_p3 v22 v23)) ∨ (¬(t_p3 v22 v24)))) → (∀ v25 v26 v27 : ι, ((t_p2 v26 v27) ∨ (¬(t_p2 v25 v26)) ∨ (¬(t_p2 v25 v27)))) → (∀ v28 v29 v30 v31 : ι, ((t_p15 v31 v28) ∨ (¬(t_p2 v29 v31)) ∨ (¬(t_p2 v30 v28)) ∨ (¬(t_p15 v29 v30)))) → (t_p15 (t_f4 (t_f6 (t_f10 t_c16) (t_f6 (t_f7 (t_f8 (t_f9 t_c17))) t_c18)) t_c19) t_c20) → (∀ v32 v33 v34 v35 : ι, ((t_p3 (t_f14 v32 v33) (t_f14 v34 v35)) ∨ (¬(t_p2 v32 v34)) ∨ (¬(t_p5 v33 v35)))) → (∀ v36 v37 v38 v39 : ι, ((t_p2 (t_f4 v36 v37) (t_f4 v38 v39)) ∨ (¬(t_p2 v36 v38)) ∨ (¬(t_p3 v37 v39)))) → (∀ v40 v41 v42 v43 : ι, ((t_p2 (t_f6 v40 v41) (t_f6 v42 v43)) ∨ (¬(t_p2 v41 v43)) ∨ (¬(t_p5 v40 v42)))) → (t_p15 (t_f4 (t_f6 (t_f10 t_c16) (t_f6 (t_f7 (t_f8 (t_f9 t_c17))) t_c18)) (t_f11 t_c21)) t_c20) → (¬(t_p15 (t_f4 (t_f6 (t_f10 t_c16) (t_f6 (t_f7 (t_f8 (t_f9 t_c17))) t_c18)) (t_f11 t_c19)) t_c20)) → (∀ v44 v45 : ι, ((t_p12 (t_f13 v44) (t_f13 t_c18)) ∨ (t_p15 (t_f4 (t_f6 (t_f10 v45) (t_f6 (t_f7 (t_f8 (t_f9 t_c17))) t_c18)) (t_f14 v44 v45)) v44))) → (∀ v46 v47 : ι, ((t_p12 (t_f13 v46) (t_f13 t_c18)) ∨ (¬(t_p15 (t_f4 (t_f6 (t_f10 v47) (t_f6 (t_f7 (t_f8 (t_f9 t_c17))) t_c18)) (t_f11 (t_f14 v46 v47))) v46)))) → (∀ v48 v49 v50 v51 : ι, ((t_p3 v50 v51) ∨ (t_p12 (t_f13 v48) (t_f13 t_c18)) ∨ (t_p15 (t_f4 (t_f6 (t_f10 v49) (t_f6 (t_f7 (t_f8 (t_f9 t_c17))) t_c18)) (t_f11 v51)) v48) ∨ (t_p15 (t_f4 (t_f6 (t_f10 v49) (t_f6 (t_f7 (t_f8 (t_f9 t_c17))) t_c18)) (t_f11 v50)) v48) ∨ (¬(t_p15 (t_f4 (t_f6 (t_f10 v49) (t_f6 (t_f7 (t_f8 (t_f9 t_c17))) t_c18)) v50) v48)) ∨ (¬(t_p15 (t_f4 (t_f6 (t_f10 v49) (t_f6 (t_f7 (t_f8 (t_f9 t_c17))) t_c18)) v51) v48)))) → False := by
  vampire
