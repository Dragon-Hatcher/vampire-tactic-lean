-- SYN620-1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN620-1.p`, beside this file. This is its statement in Lean:
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
variable {t_c22 t_c23 t_c24 t_c25 t_c26 t_c27 : ι}
variable {t_f12 t_f14 t_f15 t_f4 t_f6 t_f7 t_f8 t_f9 : ι → ι}
variable {t_f13 t_f16 t_f17 : ι → ι → ι}
variable {t_p18 : ι → Prop}
variable {t_p10 t_p11 t_p19 t_p2 t_p20 t_p21 t_p3 t_p5 : ι → ι → Prop}

theorem T_SYN620m1 : (∀ v0 : ι, (t_p10 v0 v0)) → (∀ v1 : ι, (t_p5 v1 v1)) → (∀ v2 : ι, (t_p3 v2 v2)) → (∀ v3 : ι, (t_p2 v3 v3)) → (∀ v4 : ι, (t_p11 v4 v4)) → (¬(t_p18 (t_f6 t_c24))) → (¬(t_p18 (t_f6 t_c22))) → (t_p3 (t_f4 t_c22) t_c23) → (t_p19 (t_f7 (t_f8 (t_f9 t_c25))) t_c23) → (∀ v5 v6 : ι, ((t_p18 v5) ∨ (¬(t_p18 v6)) ∨ (¬(t_p5 v6 v5)))) → (∀ v7 v8 : ι, ((t_p10 (t_f14 v7) (t_f14 v8)) ∨ (¬(t_p11 v7 v8)))) → (∀ v9 v10 : ι, ((t_p5 (t_f6 v9) (t_f6 v10)) ∨ (¬(t_p2 v9 v10)))) → (∀ v11 v12 : ι, ((t_p3 (t_f9 v11) (t_f9 v12)) ∨ (¬(t_p3 v11 v12)))) → (∀ v13 v14 : ι, ((t_p3 (t_f8 v13) (t_f8 v14)) ∨ (¬(t_p3 v13 v14)))) → (∀ v15 v16 : ι, ((t_p3 (t_f7 v15) (t_f7 v16)) ∨ (¬(t_p3 v15 v16)))) → (∀ v17 v18 : ι, ((t_p3 (t_f4 v17) (t_f4 v18)) ∨ (¬(t_p2 v17 v18)))) → (∀ v19 v20 : ι, ((t_p11 (t_f15 v19) (t_f15 v20)) ∨ (¬(t_p3 v19 v20)))) → (∀ v21 v22 : ι, ((t_p11 (t_f12 v21) (t_f12 v22)) ∨ (¬(t_p10 v21 v22)))) → (∀ v23 v24 v25 : ι, ((t_p10 v24 v25) ∨ (¬(t_p10 v23 v24)) ∨ (¬(t_p10 v23 v25)))) → (∀ v26 v27 v28 : ι, ((t_p5 v27 v28) ∨ (¬(t_p5 v26 v27)) ∨ (¬(t_p5 v26 v28)))) → (∀ v29 v30 v31 : ι, ((t_p3 v30 v31) ∨ (¬(t_p3 v29 v30)) ∨ (¬(t_p3 v29 v31)))) → (∀ v32 v33 v34 : ι, ((t_p2 v33 v34) ∨ (¬(t_p2 v32 v33)) ∨ (¬(t_p2 v32 v34)))) → (∀ v35 v36 v37 : ι, ((t_p11 v36 v37) ∨ (¬(t_p11 v35 v36)) ∨ (¬(t_p11 v35 v37)))) → (∀ v38 : ι, (t_p10 (t_f13 (t_f6 t_c22) v38) (t_f13 (t_f6 t_c24) (t_f16 t_c26 v38)))) → (¬(t_p10 (t_f13 (t_f6 t_c22) (t_f14 (t_f15 (t_f7 t_c25)))) (t_f14 (t_f15 (t_f7 t_c25))))) → (∀ v39 v40 v41 v42 : ι, ((t_p21 v39 v40) ∨ (¬(t_p3 v41 v39)) ∨ (¬(t_p3 v42 v40)) ∨ (¬(t_p21 v41 v42)))) → (∀ v43 v44 v45 v46 : ι, ((t_p19 v43 v44) ∨ (¬(t_p3 v45 v43)) ∨ (¬(t_p3 v46 v44)) ∨ (¬(t_p19 v45 v46)))) → (∀ v47 v48 v49 v50 : ι, ((t_p20 v47 v48) ∨ (¬(t_p11 v50 v48)) ∨ (¬(t_p20 v49 v50)) ∨ (¬(t_p11 v49 v47)))) → (∀ v51 v52 v53 v54 : ι, ((t_p10 (t_f13 v51 v52) (t_f13 v53 v54)) ∨ (¬(t_p10 v52 v54)) ∨ (¬(t_p5 v51 v53)))) → (∀ v55 v56 v57 v58 : ι, ((t_p10 (t_f17 v55 v56) (t_f17 v57 v58)) ∨ (¬(t_p2 v56 v58)) ∨ (¬(t_p3 v55 v57)))) → (∀ v59 v60 v61 v62 : ι, ((t_p10 (t_f16 v59 v60) (t_f16 v61 v62)) ∨ (¬(t_p10 v59 v61)) ∨ (¬(t_p10 v60 v62)))) → (∀ v63 : ι, (t_p20 (t_f12 (t_f13 (t_f6 t_c22) (t_f14 (t_f15 (t_f7 t_c25))))) (t_f12 (t_f13 (t_f6 t_c24) v63)))) → (¬(t_p20 (t_f12 (t_f13 (t_f6 t_c22) (t_f14 (t_f15 (t_f7 t_c25))))) (t_f12 (t_f13 (t_f6 t_c22) t_c27)))) → (∀ v64 v65 : ι, ((t_p18 (t_f6 v64)) ∨ (t_p10 (t_f13 (t_f6 v64) (t_f17 v65 v64)) (t_f14 (t_f15 (t_f7 t_c25)))) ∨ (¬(t_p21 v65 t_c23)) ∨ (¬(t_p3 (t_f4 v64) v65)))) → False := by
  vampire
