-- MGT030-1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.21s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT030-1.p`, beside this file. This is its statement in Lean:
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
variable {t_efficient__producers t_first__movers t_sk4 : ι}
variable {t_sk2 t_sk3 t_sk5 : ι → ι}
variable {t_growth__rate t_sk1 : ι → ι → ι}
variable {t_environment t_stable : ι → Prop}
variable {t_greater t_greater__or__equal t_in__environment : ι → ι → Prop}
variable {t_subpopulations : ι → ι → ι → ι → Prop}

theorem T_MGT030m1 : (∀ v0 v1 : ι, ((¬(t_environment v0)) ∨ (¬(t_in__environment v0 v1)) ∨ (t_subpopulations t_first__movers t_efficient__producers v0 (t_sk1 v1 v0)) ∨ (t_in__environment v0 (t_sk2 v0)))) → (∀ v2 v3 : ι, ((¬(t_environment v2)) ∨ (¬(t_in__environment v2 v3)) ∨ (t_greater__or__equal (t_sk1 v3 v2) v3) ∨ (t_in__environment v2 (t_sk2 v2)))) → (∀ v4 v5 : ι, ((¬(t_environment v4)) ∨ (¬(t_in__environment v4 v5)) ∨ (t_subpopulations t_first__movers t_efficient__producers v4 (t_sk1 v5 v4)) ∨ (¬(t_greater (t_growth__rate t_efficient__producers (t_sk2 v4)) (t_growth__rate t_first__movers (t_sk2 v4)))))) → (∀ v6 v7 v8 : ι, ((¬(t_environment v6)) ∨ (¬(t_in__environment v6 v7)) ∨ (t_subpopulations t_first__movers t_efficient__producers v6 (t_sk1 v7 v6)) ∨ (¬(t_subpopulations t_first__movers t_efficient__producers v6 v8)) ∨ (¬(t_greater v8 (t_sk2 v6))) ∨ (t_greater (t_growth__rate t_efficient__producers v8) (t_growth__rate t_first__movers v8)))) → (∀ v9 v10 : ι, ((¬(t_environment v9)) ∨ (¬(t_in__environment v9 v10)) ∨ (t_greater__or__equal (t_sk1 v10 v9) v10) ∨ (¬(t_greater (t_growth__rate t_efficient__producers (t_sk2 v9)) (t_growth__rate t_first__movers (t_sk2 v9)))))) → (∀ v11 v12 v13 : ι, ((¬(t_environment v11)) ∨ (¬(t_in__environment v11 v12)) ∨ (t_greater__or__equal (t_sk1 v12 v11) v12) ∨ (¬(t_subpopulations t_first__movers t_efficient__producers v11 v13)) ∨ (¬(t_greater v13 (t_sk2 v11))) ∨ (t_greater (t_growth__rate t_efficient__producers v13) (t_growth__rate t_first__movers v13)))) → (∀ v14 v15 : ι, ((¬(t_environment v14)) ∨ (¬(t_in__environment v14 v15)) ∨ (¬(t_greater (t_growth__rate t_efficient__producers (t_sk1 v15 v14)) (t_growth__rate t_first__movers (t_sk1 v15 v14)))) ∨ (t_in__environment v14 (t_sk2 v14)))) → (∀ v16 v17 : ι, ((¬(t_environment v16)) ∨ (¬(t_in__environment v16 v17)) ∨ (¬(t_greater (t_growth__rate t_efficient__producers (t_sk1 v17 v16)) (t_growth__rate t_first__movers (t_sk1 v17 v16)))) ∨ (¬(t_greater (t_growth__rate t_efficient__producers (t_sk2 v16)) (t_growth__rate t_first__movers (t_sk2 v16)))))) → (∀ v18 v19 v20 : ι, ((¬(t_environment v18)) ∨ (¬(t_in__environment v18 v19)) ∨ (¬(t_greater (t_growth__rate t_efficient__producers (t_sk1 v19 v18)) (t_growth__rate t_first__movers (t_sk1 v19 v18)))) ∨ (¬(t_subpopulations t_first__movers t_efficient__producers v18 v20)) ∨ (¬(t_greater v20 (t_sk2 v18))) ∨ (t_greater (t_growth__rate t_efficient__producers v20) (t_growth__rate t_first__movers v20)))) → (∀ v21 : ι, ((¬(t_environment v21)) ∨ (¬(t_stable v21)) ∨ (t_in__environment v21 (t_sk3 v21)))) → (∀ v22 v23 : ι, ((¬(t_environment v22)) ∨ (¬(t_stable v22)) ∨ (¬(t_subpopulations t_first__movers t_efficient__producers v22 v23)) ∨ (¬(t_greater__or__equal v23 (t_sk3 v22))) ∨ (t_greater (t_growth__rate t_efficient__producers v23) (t_growth__rate t_first__movers v23)))) → (t_environment t_sk4) → (t_stable t_sk4) → (∀ v24 : ι, ((¬(t_in__environment t_sk4 v24)) ∨ (t_greater (t_growth__rate t_efficient__producers v24) (t_growth__rate t_first__movers v24)) ∨ (t_subpopulations t_first__movers t_efficient__producers t_sk4 (t_sk5 v24)))) → (∀ v25 : ι, ((¬(t_in__environment t_sk4 v25)) ∨ (t_greater (t_growth__rate t_efficient__producers v25) (t_growth__rate t_first__movers v25)) ∨ (t_greater (t_sk5 v25) v25))) → (∀ v26 : ι, ((¬(t_in__environment t_sk4 v26)) ∨ (t_greater (t_growth__rate t_efficient__producers v26) (t_growth__rate t_first__movers v26)) ∨ (¬(t_greater (t_growth__rate t_efficient__producers (t_sk5 v26)) (t_growth__rate t_first__movers (t_sk5 v26)))))) → False := by
  vampire
