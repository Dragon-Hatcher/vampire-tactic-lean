-- MGT018-1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT018-1.p`, beside this file. This is its statement in Lean:
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
variable {t_class t_inertia t_reorganization t_reorganization__type t_size : ι → ι → ι → Prop}

theorem T_MGT018m1 : (∀ v0 v1 : ι, ((¬(t_organization v0 v1)) ∨ (t_inertia v0 (t_sk1 v1 v0) v1))) → (∀ v2 v3 v4 v5 v6 v7 v8 v9 v10 : ι, ((¬(t_organization v2 v3)) ∨ (¬(t_organization v4 v5)) ∨ (¬(t_class v2 v6 v3)) ∨ (¬(t_class v4 v6 v5)) ∨ (¬(t_size v2 v7 v3)) ∨ (¬(t_size v4 v8 v5)) ∨ (¬(t_inertia v2 v9 v3)) ∨ (¬(t_inertia v4 v10 v5)) ∨ (¬(t_greater v8 v7)) ∨ (t_greater v10 v9))) → (∀ v11 v12 v13 v14 v15 v16 v17 v18 v19 : ι, ((¬(t_organization v11 v12)) ∨ (¬(t_organization v13 v12)) ∨ (t_organization v13 v14) ∨ (¬(t_class v11 v15 v12)) ∨ (¬(t_class v13 v15 v12)) ∨ (¬(t_reorganization v11 v12 v16)) ∨ (¬(t_reorganization v13 v12 v14)) ∨ (¬(t_reorganization__type v11 v17 v12)) ∨ (¬(t_reorganization__type v13 v17 v12)) ∨ (¬(t_inertia v11 v18 v12)) ∨ (¬(t_inertia v13 v19 v12)) ∨ (¬(t_greater v19 v18)) ∨ (t_greater v16 v14))) → (t_organization t_sk2 t_sk8) → (t_organization t_sk3 t_sk8) → (¬(t_organization t_sk3 t_sk10)) → (t_class t_sk2 t_sk5 t_sk8) → (t_class t_sk3 t_sk5 t_sk8) → (t_reorganization t_sk2 t_sk8 t_sk9) → (t_reorganization t_sk3 t_sk8 t_sk10) → (t_reorganization__type t_sk2 t_sk4 t_sk8) → (t_reorganization__type t_sk3 t_sk4 t_sk8) → (t_size t_sk2 t_sk6 t_sk8) → (t_size t_sk3 t_sk7 t_sk8) → (t_greater t_sk7 t_sk6) → (¬(t_greater t_sk9 t_sk10)) → False := by
  vampire
