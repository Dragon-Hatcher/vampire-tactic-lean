-- GRP131-1.002, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP131-1.002.p`, beside this file. This is its statement in Lean:
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
variable {t_e__1 t_e__2 : ι}
variable {t_group__element : ι → Prop}
variable {t_equalish : ι → ι → Prop}
variable {t_product : ι → ι → ι → Prop}

theorem T_GRP131m1_002 : (t_group__element t_e__1) → (t_group__element t_e__2) → (¬(t_equalish t_e__1 t_e__2)) → (¬(t_equalish t_e__2 t_e__1)) → (∀ v0 v1 : ι, ((¬(t_group__element v0)) ∨ (¬(t_group__element v1)) ∨ (t_product v0 v1 t_e__1) ∨ (t_product v0 v1 t_e__2))) → (∀ v2 v3 v4 v5 : ι, ((¬(t_product v3 v4 v2)) ∨ (¬(t_product v3 v4 v5)) ∨ (t_equalish v2 v5))) → (∀ v6 v7 v8 v9 : ι, ((¬(t_product v7 v6 v8)) ∨ (¬(t_product v7 v9 v8)) ∨ (t_equalish v6 v9))) → (∀ v10 v11 v12 v13 : ι, ((¬(t_product v10 v12 v11)) ∨ (¬(t_product v13 v12 v11)) ∨ (t_equalish v10 v13))) → (∀ v14 v15 v16 v17 v18 v19 : ι, ((¬(t_product v14 v16 v18)) ∨ (¬(t_product v15 v17 v18)) ∨ (¬(t_product v19 v16 v14)) ∨ (¬(t_product v19 v17 v15)) ∨ (t_equalish v14 v15))) → (∀ v20 v21 v22 v23 v24 v25 : ι, ((¬(t_product v20 v22 v24)) ∨ (¬(t_product v21 v23 v24)) ∨ (¬(t_product v25 v22 v20)) ∨ (¬(t_product v25 v23 v21)) ∨ (t_equalish v22 v23))) → False := by
  vampire
