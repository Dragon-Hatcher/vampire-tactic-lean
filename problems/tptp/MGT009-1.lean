-- MGT009-1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT009-1.p`, beside this file. This is its statement in Lean:
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
variable {t_sk10 t_sk2 t_sk3 t_sk4 t_sk5 t_sk6 t_sk7 t_sk8 t_sk9 : ι}
variable {t_sk1 : ι → ι → ι}
variable {t_greater t_organization : ι → ι → Prop}
variable {t_class t_inertia t_reorganization__free t_reproducibility t_size : ι → ι → ι → Prop}

theorem T_MGT009m1 : (∀ v0 v1 : ι, ((¬(t_organization v0 v1)) ∨ (t_inertia v0 (t_sk1 v1 v0) v1))) → (∀ v2 v3 v4 v5 v6 v7 v8 v9 : ι, ((¬(t_organization v2 v3)) ∨ (¬(t_organization v4 v5)) ∨ (¬(t_reorganization__free v2 v3 v3)) ∨ (¬(t_reorganization__free v4 v5 v5)) ∨ (¬(t_reproducibility v2 v6 v3)) ∨ (¬(t_reproducibility v4 v7 v5)) ∨ (¬(t_inertia v2 v8 v3)) ∨ (¬(t_inertia v4 v9 v5)) ∨ (¬(t_greater v7 v6)) ∨ (t_greater v9 v8))) → (∀ v10 v11 v12 v13 v14 v15 v16 v17 : ι, ((¬(t_organization v10 v11)) ∨ (¬(t_organization v12 v13)) ∨ (¬(t_reorganization__free v10 v11 v11)) ∨ (¬(t_reorganization__free v12 v13 v13)) ∨ (¬(t_reproducibility v10 v14 v11)) ∨ (¬(t_reproducibility v12 v15 v13)) ∨ (¬(t_inertia v10 v16 v11)) ∨ (¬(t_inertia v12 v17 v13)) ∨ (¬(t_greater v17 v16)) ∨ (t_greater v15 v14))) → (∀ v18 v19 v20 v21 v22 v23 v24 v25 v26 : ι, ((¬(t_organization v18 v19)) ∨ (¬(t_organization v20 v21)) ∨ (¬(t_class v18 v22 v19)) ∨ (¬(t_class v20 v22 v21)) ∨ (¬(t_size v18 v23 v19)) ∨ (¬(t_size v20 v24 v21)) ∨ (¬(t_inertia v18 v25 v19)) ∨ (¬(t_inertia v20 v26 v21)) ∨ (¬(t_greater v24 v23)) ∨ (t_greater v26 v25))) → (t_organization t_sk2 t_sk9) → (t_organization t_sk3 t_sk10) → (t_reorganization__free t_sk2 t_sk9 t_sk9) → (t_reorganization__free t_sk3 t_sk10 t_sk10) → (t_class t_sk2 t_sk4 t_sk9) → (t_class t_sk3 t_sk4 t_sk10) → (t_reproducibility t_sk2 t_sk5 t_sk9) → (t_reproducibility t_sk3 t_sk6 t_sk10) → (t_size t_sk2 t_sk7 t_sk9) → (t_size t_sk3 t_sk8 t_sk10) → (t_greater t_sk8 t_sk7) → (¬(t_greater t_sk6 t_sk5)) → False := by
  vampire
