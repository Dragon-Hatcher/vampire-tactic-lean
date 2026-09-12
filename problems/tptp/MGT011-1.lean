-- MGT011-1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT011-1.p`, beside this file. This is its statement in Lean:
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
variable {t_sk3 t_sk4 t_sk5 t_sk6 t_sk7 : ι}
variable {t_sk1 t_sk2 : ι → ι → ι}
variable {t_greater t_organization : ι → ι → Prop}
variable {t_class t_inertia t_reorganization__free t_size : ι → ι → ι → Prop}

theorem T_MGT011m1 : (∀ v0 v1 : ι, ((¬(t_organization v0 v1)) ∨ (t_inertia v0 (t_sk1 v1 v0) v1))) → (∀ v2 v3 : ι, ((¬(t_greater v2 v3)) ∨ (¬(v2 = v3)))) → (∀ v4 v5 : ι, ((¬(t_greater v4 v5)) ∨ (¬(t_greater v5 v4)))) → (∀ v6 v7 : ι, ((¬(t_organization v6 v7)) ∨ (t_class v6 (t_sk2 v7 v6) v7))) → (∀ v8 v9 v10 v11 v12 : ι, ((¬(t_organization v8 v9)) ∨ (¬(t_organization v8 v10)) ∨ (¬(t_reorganization__free v8 v9 v10)) ∨ (¬(t_class v8 v11 v9)) ∨ (¬(t_class v8 v12 v10)) ∨ (v11 = v12))) → (∀ v13 v14 v15 v16 v17 v18 v19 v20 v21 : ι, ((¬(t_organization v13 v14)) ∨ (¬(t_organization v15 v16)) ∨ (¬(t_class v13 v17 v14)) ∨ (¬(t_class v15 v17 v16)) ∨ (¬(t_size v13 v18 v14)) ∨ (¬(t_size v15 v19 v16)) ∨ (¬(t_inertia v13 v20 v14)) ∨ (¬(t_inertia v15 v21 v16)) ∨ (¬(t_greater v19 v18)) ∨ (t_greater v21 v20))) → (∀ v22 v23 v24 v25 v26 : ι, ((¬(t_organization v22 v23)) ∨ (¬(t_organization v22 v24)) ∨ (¬(t_reorganization__free v22 v23 v24)) ∨ (¬(t_inertia v22 v25 v23)) ∨ (¬(t_inertia v22 v26 v24)) ∨ (¬(t_greater v24 v23)) ∨ (t_greater v26 v25))) → (t_organization t_sk3 t_sk6) → (t_organization t_sk3 t_sk7) → (t_reorganization__free t_sk3 t_sk6 t_sk7) → (t_size t_sk3 t_sk4 t_sk6) → (t_size t_sk3 t_sk5 t_sk7) → (t_greater t_sk7 t_sk6) → (t_greater t_sk4 t_sk5) → False := by
  vampire
