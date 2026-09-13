-- MGT039-1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.16s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT039-1.p`, beside this file. This is its statement in Lean:
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
variable {t_efficient__producers t_first__movers t_sk3 : ι}
variable {t_critical__point t_end__time t_sk1 t_start__time : ι → ι}
variable {t_sk2 : ι → ι → ι}
variable {t_environment t_observational__period t_propagation__strategy t_slow__change : ι → Prop}
variable {t_greater t_greater__or__equal t_in__environment : ι → ι → Prop}
variable {t_selection__favors : ι → ι → ι → Prop}

theorem T_MGT039m1 : (∀ v0 : ι, ((¬(t_observational__period v0)) ∨ (¬(t_propagation__strategy t_first__movers)) ∨ (¬(t_propagation__strategy t_efficient__producers)) ∨ (t_environment (t_sk1 v0)) ∨ (t_selection__favors t_efficient__producers t_first__movers v0))) → (∀ v1 : ι, ((¬(t_observational__period v1)) ∨ (¬(t_propagation__strategy t_first__movers)) ∨ (¬(t_propagation__strategy t_efficient__producers)) ∨ (t_in__environment v1 (t_sk1 v1)) ∨ (t_selection__favors t_efficient__producers t_first__movers v1))) → (∀ v2 : ι, ((¬(t_observational__period v2)) ∨ (¬(t_propagation__strategy t_first__movers)) ∨ (¬(t_propagation__strategy t_efficient__producers)) ∨ (¬(t_selection__favors t_efficient__producers t_first__movers (t_end__time (t_sk1 v2)))) ∨ (t_selection__favors t_efficient__producers t_first__movers v2))) → (∀ v3 v4 : ι, ((¬(t_observational__period v3)) ∨ (¬(t_slow__change v3)) ∨ (¬(t_environment v4)) ∨ (¬(t_in__environment v3 v4)) ∨ (t_in__environment v4 (t_sk2 v4 v3)))) → (∀ v5 v6 : ι, ((¬(t_observational__period v5)) ∨ (¬(t_slow__change v5)) ∨ (¬(t_environment v6)) ∨ (¬(t_in__environment v5 v6)) ∨ (t_greater (t_sk2 v6 v5) (t_critical__point v6)))) → (t_propagation__strategy t_first__movers) → (t_propagation__strategy t_efficient__producers) → (∀ v7 v8 : ι, ((¬(t_environment v7)) ∨ (¬(t_greater__or__equal v8 (t_start__time v7))) ∨ (¬(t_greater__or__equal (t_end__time v7) v8)) ∨ (t_in__environment v7 v8))) → (∀ v9 v10 : ι, ((¬(t_environment v9)) ∨ (¬(t_in__environment v9 v10)) ∨ (t_greater__or__equal (t_end__time v9) v10))) → (∀ v11 : ι, ((¬(t_environment v11)) ∨ (t_greater__or__equal (t_critical__point v11) (t_start__time v11)))) → (∀ v12 v13 v14 : ι, ((¬(t_greater v12 v13)) ∨ (¬(t_greater v13 v14)) ∨ (t_greater v12 v14))) → (∀ v15 v16 : ι, ((¬(t_greater__or__equal v15 v16)) ∨ (t_greater v15 v16) ∨ (v15 = v16))) → (∀ v17 v18 : ι, ((¬(t_greater v17 v18)) ∨ (t_greater__or__equal v17 v18))) → (∀ v19 v20 : ι, ((¬(v19 = v20)) ∨ (t_greater__or__equal v19 v20))) → (∀ v21 v22 : ι, ((¬(t_environment v21)) ∨ (¬(t_greater v22 (t_start__time v21))) ∨ (t_greater v22 (t_end__time v21)) ∨ (t_greater__or__equal (t_end__time v21) v22))) → (∀ v23 v24 : ι, ((¬(t_environment v23)) ∨ (¬(t_in__environment v23 v24)) ∨ (¬(t_greater v24 (t_critical__point v23))) ∨ (t_selection__favors t_efficient__producers t_first__movers v24))) → (t_observational__period t_sk3) → (t_slow__change t_sk3) → (¬(t_selection__favors t_efficient__producers t_first__movers t_sk3)) → False := by
  vampire
