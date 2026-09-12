-- SYN575-1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.02s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN575-1.p`, beside this file. This is its statement in Lean:
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
variable {t_c12 t_c13 t_c14 t_c15 : ι}
variable {t_f4 t_f5 t_f6 : ι → ι}
variable {t_f8 : ι → ι → ι}
variable {t_p10 t_p11 t_p2 t_p3 t_p7 t_p9 : ι → ι → Prop}

theorem T_SYN575m1 : (∀ v0 : ι, (t_p10 v0 v0)) → (∀ v1 : ι, (t_p7 v1 v1)) → (∀ v2 : ι, (t_p3 v2 v2)) → (∀ v3 : ι, (t_p2 v3 v3)) → (t_p9 t_c12 t_c13) → (t_p11 t_c14 t_c15) → (∀ v4 : ι, (t_p3 (t_f4 (t_f5 v4)) (t_f4 v4))) → (∀ v5 : ι, (t_p3 (t_f6 (t_f5 v5)) (t_f6 v5))) → (∀ v6 : ι, ((t_p9 v6 t_c13) ∨ (¬(t_p9 v6 (t_f6 t_c14))))) → (∀ v7 : ι, ((t_p9 v7 (t_f6 t_c14)) ∨ (¬(t_p9 v7 t_c13)))) → (∀ v8 v9 : ι, ((t_p2 (t_f5 v8) (t_f5 v9)) ∨ (¬(t_p2 v8 v9)))) → (∀ v10 v11 : ι, ((t_p3 (t_f6 v10) (t_f6 v11)) ∨ (¬(t_p2 v10 v11)))) → (∀ v12 v13 : ι, ((t_p3 (t_f4 v12) (t_f4 v13)) ∨ (¬(t_p2 v12 v13)))) → (∀ v14 v15 v16 : ι, ((t_p10 v15 v16) ∨ (¬(t_p10 v14 v15)) ∨ (¬(t_p10 v14 v16)))) → (∀ v17 v18 v19 : ι, ((t_p7 v18 v19) ∨ (¬(t_p7 v17 v18)) ∨ (¬(t_p7 v17 v19)))) → (∀ v20 v21 v22 : ι, ((t_p3 v21 v22) ∨ (¬(t_p3 v20 v21)) ∨ (¬(t_p3 v20 v22)))) → (∀ v23 v24 v25 : ι, ((t_p2 v24 v25) ∨ (¬(t_p2 v23 v24)) ∨ (¬(t_p2 v23 v25)))) → (∀ v26 v27 v28 v29 : ι, ((t_p11 v26 v27) ∨ (¬(t_p11 v29 v28)) ∨ (¬(t_p2 v29 v26)) ∨ (¬(t_p10 v28 v27)))) → (∀ v30 v31 v32 v33 : ι, ((t_p9 v30 v31) ∨ (¬(t_p7 v33 v30)) ∨ (¬(t_p9 v33 v32)) ∨ (¬(t_p3 v32 v31)))) → (∀ v34 v35 v36 v37 : ι, ((t_p7 (t_f8 v34 v35) (t_f8 v36 v37)) ∨ (¬(t_p2 v35 v37)) ∨ (¬(t_p3 v34 v36)))) → (∀ v38 v39 v40 : ι, ((t_p9 (t_f8 v38 v39) v38) ∨ (t_p9 (t_f8 v38 v39) (t_f6 v39)) ∨ (¬(t_p11 v40 t_c15)) ∨ (¬(t_p9 t_c12 v38)) ∨ (¬(t_p2 v39 (t_f5 v40))))) → (∀ v41 v42 v43 : ι, ((¬(t_p11 v43 t_c15)) ∨ (¬(t_p9 t_c12 v41)) ∨ (¬(t_p2 v42 (t_f5 v43))) ∨ (¬(t_p9 (t_f8 v41 v42) v41)) ∨ (¬(t_p9 (t_f8 v41 v42) (t_f6 v42))))) → False := by
  vampire
