-- SYN572-1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.23s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN572-1.p`, beside this file. This is its statement in Lean:
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
variable {t_c13 t_c14 t_c15 : ι}
variable {t_f10 t_f5 t_f7 t_f8 t_f9 : ι → ι}
variable {t_f11 t_f3 : ι → ι → ι}
variable {t_p12 t_p2 t_p4 t_p6 : ι → ι → Prop}

theorem T_SYN572m1 : (∀ v0 : ι, (t_p2 v0 v0)) → (∀ v1 : ι, (t_p6 v1 v1)) → (∀ v2 : ι, (t_p4 v2 v2)) → (∀ v3 : ι, (t_p4 (t_f10 (t_f9 v3)) (t_f10 v3))) → (∀ v4 : ι, (t_p2 (t_f3 v4 (t_f5 (t_f7 (t_f8 t_c13)))) v4)) → (∀ v5 v6 : ι, ((t_p6 (t_f8 v5) (t_f8 v6)) ∨ (¬(t_p6 v5 v6)))) → (∀ v7 v8 : ι, ((t_p2 (t_f5 v7) (t_f5 v8)) ∨ (¬(t_p4 v7 v8)))) → (∀ v9 v10 : ι, ((t_p2 (t_f9 v9) (t_f9 v10)) ∨ (¬(t_p2 v9 v10)))) → (∀ v11 v12 : ι, ((t_p4 (t_f10 v11) (t_f10 v12)) ∨ (¬(t_p2 v11 v12)))) → (∀ v13 v14 : ι, ((t_p4 (t_f7 v13) (t_f7 v14)) ∨ (¬(t_p6 v13 v14)))) → (∀ v15 : ι, (t_p2 (t_f3 v15 (t_f9 v15)) (t_f5 (t_f7 (t_f8 t_c13))))) → (∀ v16 v17 v18 : ι, ((t_p2 v17 v18) ∨ (¬(t_p2 v16 v17)) ∨ (¬(t_p2 v16 v18)))) → (∀ v19 v20 v21 : ι, ((t_p6 v20 v21) ∨ (¬(t_p6 v19 v20)) ∨ (¬(t_p6 v19 v21)))) → (∀ v22 v23 v24 : ι, ((t_p4 v23 v24) ∨ (¬(t_p4 v22 v23)) ∨ (¬(t_p4 v22 v24)))) → (∀ v25 v26 : ι, (t_p12 (t_f10 (t_f3 v25 v26)) (t_f11 (t_f10 v25) (t_f10 v26)))) → (¬(t_p12 (t_f10 t_c14) (t_f11 (t_f10 (t_f3 t_c14 t_c15)) (t_f10 t_c15)))) → (∀ v27 v28 v29 : ι, (t_p2 (t_f3 v27 (t_f3 v28 v29)) (t_f3 (t_f3 v27 v28) v29))) → (∀ v30 v31 v32 v33 : ι, ((t_p12 v30 v31) ∨ (¬(t_p4 v32 v30)) ∨ (¬(t_p4 v33 v31)) ∨ (¬(t_p12 v32 v33)))) → (∀ v34 v35 v36 v37 : ι, ((t_p4 (t_f11 v34 v35) (t_f11 v36 v37)) ∨ (¬(t_p4 v34 v36)) ∨ (¬(t_p4 v35 v37)))) → (∀ v38 v39 v40 v41 : ι, ((t_p2 (t_f3 v41 v38) (t_f3 v39 v40)) ∨ (¬(t_p2 v41 v39)) ∨ (¬(t_p2 v38 v40)))) → False := by
  vampire
