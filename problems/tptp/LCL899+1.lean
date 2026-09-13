-- LCL899+1, from TPTP v9.3.1 (LCL).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.22s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LCL899+1.p`, beside this file. This is its statement in Lean:
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
variable {t_0 t_1 : ι}
variable {t__x2B t__x3D_x3D_x3E : ι → ι → ι}
variable {t__x3E_x3D : ι → ι → Prop}

theorem T_LCL899p1 : (∀ v0 v1 v2 : ι, ((t__x2B (t__x2B v0 v1) v2) = (t__x2B v0 (t__x2B v1 v2)))) → (∀ v3 v4 : ι, ((t__x2B v3 v4) = (t__x2B v4 v3))) → (∀ v5 : ι, ((t__x2B v5 t_0) = v5)) → (∀ v6 : ι, (t__x3E_x3D v6 v6)) → (∀ v7 v8 v9 : ι, (((t__x3E_x3D v7 v8) ∧ (t__x3E_x3D v8 v9)) → (t__x3E_x3D v7 v9))) → (∀ v10 v11 : ι, (((t__x3E_x3D v10 v11) ∧ (t__x3E_x3D v11 v10)) → (v10 = v11))) → (∀ v12 v13 v14 : ι, ((t__x3E_x3D (t__x2B v12 v13) v14) ↔ (t__x3E_x3D v13 (t__x3D_x3D_x3E v12 v14)))) → (∀ v15 : ι, (t__x3E_x3D v15 t_0)) → (∀ v16 v17 v18 : ι, ((t__x3E_x3D v16 v17) → (t__x3E_x3D (t__x2B v16 v18) (t__x2B v17 v18)))) → (∀ v19 v20 v21 : ι, ((t__x3E_x3D v19 v20) → (t__x3E_x3D (t__x3D_x3D_x3E v20 v21) (t__x3D_x3D_x3E v19 v21)))) → (∀ v22 v23 v24 : ι, ((t__x3E_x3D v22 v23) → (t__x3E_x3D (t__x3D_x3D_x3E v24 v22) (t__x3D_x3D_x3E v24 v23)))) → (∀ v25 : ι, ((t__x2B v25 t_1) = t_1)) → (∀ v26 v27 : ι, ((t__x3D_x3D_x3E (t__x3D_x3D_x3E v26 v27) v27) = (t__x3D_x3D_x3E (t__x3D_x3D_x3E v27 v26) v26))) → (∀ v28 : ι, ((t__x3D_x3D_x3E (t__x3D_x3D_x3E v28 t_1) t_1) = v28)) := by
  vampire
