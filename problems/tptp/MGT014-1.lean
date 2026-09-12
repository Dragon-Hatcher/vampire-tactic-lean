-- MGT014-1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT014-1.p`, beside this file. This is its statement in Lean:
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
variable {t_sk1 t_sk2 t_sk3 t_sk4 t_sk5 t_sk6 t_sk7 : ι}
variable {t_time : ι → Prop}
variable {t_greater t_organization : ι → ι → Prop}
variable {t_complexity t_reorganization__free t_size : ι → ι → ι → Prop}

theorem T_MGT014m1 : (∀ v0 v1 : ι, ((¬(t_greater v0 v1)) ∨ (¬(v0 = v1)))) → (∀ v2 v3 : ι, ((¬(t_greater v2 v3)) ∨ (¬(t_greater v3 v2)))) → (∀ v4 v5 : ι, ((¬(t_organization v4 v5)) ∨ (t_time v5))) → (∀ v6 v7 : ι, ((¬(t_time v6)) ∨ (¬(t_time v7)) ∨ (t_greater v6 v7) ∨ (v6 = v7) ∨ (t_greater v7 v6))) → (∀ v8 v9 v10 : ι, ((¬(t_reorganization__free v8 v9 v10)) ∨ (t_reorganization__free v8 v10 v9))) → (∀ v11 v12 v13 v14 v15 : ι, ((¬(t_organization v11 v12)) ∨ (¬(t_organization v11 v13)) ∨ (¬(t_size v11 v14 v12)) ∨ (¬(t_size v11 v15 v13)) ∨ (¬(v12 = v13)) ∨ (v14 = v15))) → (∀ v16 v17 v18 v19 v20 : ι, ((¬(t_organization v16 v17)) ∨ (¬(t_organization v16 v18)) ∨ (¬(t_reorganization__free v16 v17 v18)) ∨ (¬(t_size v16 v19 v17)) ∨ (¬(t_size v16 v20 v18)) ∨ (¬(t_greater v18 v17)) ∨ (¬(t_greater v19 v20)))) → (∀ v21 v22 v23 v24 v25 : ι, ((¬(t_organization v21 v22)) ∨ (¬(t_organization v21 v23)) ∨ (¬(t_reorganization__free v21 v22 v23)) ∨ (¬(t_complexity v21 v24 v22)) ∨ (¬(t_complexity v21 v25 v23)) ∨ (¬(t_greater v23 v22)) ∨ (¬(t_greater v24 v25)))) → (t_organization t_sk1 t_sk6) → (t_organization t_sk1 t_sk7) → (t_reorganization__free t_sk1 t_sk6 t_sk7) → (t_complexity t_sk1 t_sk2 t_sk6) → (t_complexity t_sk1 t_sk3 t_sk7) → (t_size t_sk1 t_sk4 t_sk6) → (t_size t_sk1 t_sk5 t_sk7) → (t_greater t_sk5 t_sk4) → (t_greater t_sk2 t_sk3) → False := by
  vampire
