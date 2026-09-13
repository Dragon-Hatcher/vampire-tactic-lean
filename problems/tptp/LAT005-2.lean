-- LAT005-2, from TPTP v9.3.1 (LAT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.25s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LAT005-2.p`, beside this file. This is its statement in Lean:
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
variable {t_a t_a2 t_b t_b2 t_c t_c2 t_d t_e t_n0 t_n1 t_r1 t_r2 : ι}
variable {t_join t_meet : ι → ι → ι → Prop}

theorem T_LAT005m2 : (∀ v0 : ι, (t_join t_n1 v0 t_n1)) → (∀ v1 : ι, (t_join v1 t_n1 t_n1)) → (∀ v2 : ι, (t_join v2 v2 v2)) → (∀ v3 : ι, (t_join t_n0 v3 v3)) → (∀ v4 : ι, (t_join v4 t_n0 v4)) → (∀ v5 : ι, (t_meet t_n0 v5 t_n0)) → (∀ v6 : ι, (t_meet v6 t_n0 t_n0)) → (∀ v7 : ι, (t_meet v7 v7 v7)) → (∀ v8 : ι, (t_meet t_n1 v8 v8)) → (∀ v9 : ι, (t_meet v9 t_n1 v9)) → (∀ v10 v11 v12 : ι, ((¬(t_meet v10 v11 v12)) ∨ (t_meet v11 v10 v12))) → (∀ v13 v14 v15 : ι, ((¬(t_join v13 v14 v15)) ∨ (t_join v14 v13 v15))) → (∀ v16 v17 v18 : ι, ((¬(t_meet v16 v17 v18)) ∨ (t_join v16 v18 v16))) → (∀ v19 v20 v21 : ι, ((¬(t_join v19 v20 v21)) ∨ (t_meet v19 v21 v19))) → (∀ v22 v23 v24 v25 v26 v27 : ι, ((¬(t_meet v22 v25 v23)) ∨ (¬(t_meet v25 v27 v26)) ∨ (¬(t_meet v22 v26 v24)) ∨ (t_meet v23 v27 v24))) → (∀ v28 v29 v30 v31 v32 v33 : ι, ((¬(t_meet v28 v31 v29)) ∨ (¬(t_meet v31 v33 v32)) ∨ (¬(t_meet v29 v33 v30)) ∨ (t_meet v28 v32 v30))) → (∀ v34 v35 v36 v37 v38 v39 : ι, ((¬(t_join v34 v37 v35)) ∨ (¬(t_join v37 v39 v38)) ∨ (¬(t_join v34 v38 v36)) ∨ (t_join v35 v39 v36))) → (∀ v40 v41 v42 v43 v44 v45 : ι, ((¬(t_join v40 v43 v41)) ∨ (¬(t_join v43 v45 v44)) ∨ (¬(t_join v41 v45 v42)) ∨ (t_join v40 v44 v42))) → (∀ v46 v47 v48 v49 v50 v51 : ι, ((¬(t_meet v46 v50 v46)) ∨ (¬(t_join v46 v48 v47)) ∨ (¬(t_meet v48 v50 v49)) ∨ (¬(t_meet v50 v47 v51)) ∨ (t_join v46 v49 v51))) → (∀ v52 v53 v54 v55 v56 v57 : ι, ((¬(t_meet v52 v56 v52)) ∨ (¬(t_join v52 v54 v53)) ∨ (¬(t_meet v54 v56 v55)) ∨ (¬(t_join v52 v55 v57)) ∨ (t_meet v56 v53 v57))) → (¬(t_meet t_a2 t_b2 t_r1)) → (t_meet t_a t_b t_c) → (t_join t_c t_r2 t_n1) → (t_meet t_c t_r2 t_n0) → (t_meet t_r2 t_b t_e) → (t_join t_a t_b t_c2) → (t_join t_c2 t_r1 t_n1) → (t_meet t_c2 t_r1 t_n0) → (t_meet t_r2 t_a t_d) → (t_join t_r1 t_e t_a2) → (t_join t_r1 t_d t_b2) → False := by
  vampire
