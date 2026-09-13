-- GRP129-4.004, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.22s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP129-4.004.p`, beside this file. This is its statement in Lean:
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
variable {t_e__1 t_e__2 t_e__3 t_e__4 : ι}
variable {t_group__element : ι → Prop}
variable {t_equalish : ι → ι → Prop}
variable {t_product : ι → ι → ι → Prop}

theorem T_GRP129m4_004 : (∀ v0 v1 : ι, ((¬(t_group__element v0)) ∨ (¬(t_group__element v1)) ∨ (t_product t_e__1 v0 v1) ∨ (t_product t_e__2 v0 v1) ∨ (t_product t_e__3 v0 v1) ∨ (t_product t_e__4 v0 v1))) → (∀ v2 v3 : ι, ((¬(t_group__element v2)) ∨ (¬(t_group__element v3)) ∨ (t_product v2 t_e__1 v3) ∨ (t_product v2 t_e__2 v3) ∨ (t_product v2 t_e__3 v3) ∨ (t_product v2 t_e__4 v3))) → (∀ v4 v5 v6 v7 : ι, ((t_product v5 v4 v6) ∨ (¬(t_product v6 v5 v7)) ∨ (¬(t_product v4 v6 v7)))) → (∀ v8 v9 v10 v11 : ι, ((t_product v8 v10 v11) ∨ (¬(t_product v10 v9 v11)) ∨ (¬(t_product v9 v8 v10)))) → (t_group__element t_e__1) → (t_group__element t_e__2) → (t_group__element t_e__3) → (t_group__element t_e__4) → (¬(t_equalish t_e__1 t_e__2)) → (¬(t_equalish t_e__1 t_e__3)) → (¬(t_equalish t_e__1 t_e__4)) → (¬(t_equalish t_e__2 t_e__1)) → (¬(t_equalish t_e__2 t_e__3)) → (¬(t_equalish t_e__2 t_e__4)) → (¬(t_equalish t_e__3 t_e__1)) → (¬(t_equalish t_e__3 t_e__2)) → (¬(t_equalish t_e__3 t_e__4)) → (¬(t_equalish t_e__4 t_e__1)) → (¬(t_equalish t_e__4 t_e__2)) → (¬(t_equalish t_e__4 t_e__3)) → (∀ v12 v13 : ι, ((¬(t_group__element v12)) ∨ (¬(t_group__element v13)) ∨ (t_product v12 v13 t_e__1) ∨ (t_product v12 v13 t_e__2) ∨ (t_product v12 v13 t_e__3) ∨ (t_product v12 v13 t_e__4))) → (∀ v14 v15 v16 v17 : ι, ((¬(t_product v15 v16 v14)) ∨ (¬(t_product v15 v16 v17)) ∨ (t_equalish v14 v17))) → (∀ v18 v19 v20 v21 : ι, ((¬(t_product v19 v18 v20)) ∨ (¬(t_product v19 v21 v20)) ∨ (t_equalish v18 v21))) → (∀ v22 v23 v24 v25 : ι, ((¬(t_product v22 v24 v23)) ∨ (¬(t_product v25 v24 v23)) ∨ (t_equalish v22 v25))) → (∀ v26 v27 v28 v29 : ι, ((¬(t_product v27 v26 v28)) ∨ (¬(t_product v26 v28 v29)) ∨ (t_product v28 v27 v29))) → False := by
  vampire
