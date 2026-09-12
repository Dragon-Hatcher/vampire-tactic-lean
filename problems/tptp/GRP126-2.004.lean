-- GRP126-2.004, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.21s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP126-2.004.p`, beside this file. This is its statement in Lean:
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
variable {t_equalish t_greater t_next : ι → ι → Prop}
variable {t_product : ι → ι → ι → Prop}

theorem T_GRP126m2_004 : (t_next t_e__1 t_e__2) → (t_next t_e__2 t_e__3) → (t_next t_e__3 t_e__4) → (t_greater t_e__2 t_e__1) → (t_greater t_e__3 t_e__1) → (t_greater t_e__4 t_e__1) → (t_greater t_e__3 t_e__2) → (t_greater t_e__4 t_e__2) → (t_greater t_e__4 t_e__3) → (∀ v0 v1 v2 : ι, ((¬(t_product v0 t_e__1 v2)) ∨ (¬(t_next v0 v1)) ∨ (¬(t_greater v2 v1)))) → (t_group__element t_e__1) → (t_group__element t_e__2) → (t_group__element t_e__3) → (t_group__element t_e__4) → (¬(t_equalish t_e__1 t_e__2)) → (¬(t_equalish t_e__1 t_e__3)) → (¬(t_equalish t_e__1 t_e__4)) → (¬(t_equalish t_e__2 t_e__1)) → (¬(t_equalish t_e__2 t_e__3)) → (¬(t_equalish t_e__2 t_e__4)) → (¬(t_equalish t_e__3 t_e__1)) → (¬(t_equalish t_e__3 t_e__2)) → (¬(t_equalish t_e__3 t_e__4)) → (¬(t_equalish t_e__4 t_e__1)) → (¬(t_equalish t_e__4 t_e__2)) → (¬(t_equalish t_e__4 t_e__3)) → (∀ v3 v4 : ι, ((¬(t_group__element v3)) ∨ (¬(t_group__element v4)) ∨ (t_product v3 v4 t_e__1) ∨ (t_product v3 v4 t_e__2) ∨ (t_product v3 v4 t_e__3) ∨ (t_product v3 v4 t_e__4))) → (∀ v5 v6 v7 v8 : ι, ((¬(t_product v6 v7 v5)) ∨ (¬(t_product v6 v7 v8)) ∨ (t_equalish v5 v8))) → (∀ v9 v10 v11 v12 : ι, ((¬(t_product v10 v9 v11)) ∨ (¬(t_product v10 v12 v11)) ∨ (t_equalish v9 v12))) → (∀ v13 v14 v15 v16 : ι, ((¬(t_product v13 v15 v14)) ∨ (¬(t_product v16 v15 v14)) ∨ (t_equalish v13 v16))) → (∀ v17 : ι, (t_product v17 v17 v17)) → (∀ v18 v19 v20 v21 : ι, ((¬(t_product v18 v19 v20)) ∨ (¬(t_product v19 v18 v21)) ∨ (t_product v20 v21 v19))) → False := by
  vampire
