-- KRS104+1, from TPTP v9.3.1 (KRS).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `KRS104+1.p`, beside this file. This is its statement in Lean:
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
variable {t_i2003__11__14__17__20__50869 : ι}
variable {t_cUnsatisfiable t_cUnsatisfiablexcomp t_ca t_ca__Cx1 t_ca__Cx1xcomp t_ca__Cx6 t_ca__Cx6xcomp t_ca__Cx7 t_ca__Cx7xcomp t_ca__Cx8 t_ca__Cx8xcomp t_cb t_cbxcomp t_cc t_ccxcomp t_cowlNothing t_cowlThing t_xsd__integer t_xsd__string : ι → Prop}
variable {t_ra__Px1 t_ra__Px2 t_ra__Px3 t_ra__Px5 t_ra__Px6 t_ra__Px7 t_ra__Px8 : ι → ι → Prop}

theorem T_KRS104p1 : (∀ v0 : ι, ((t_cowlThing v0) ∧ (¬(t_cowlNothing v0)))) → (∀ v1 : ι, ((t_xsd__string v1) ↔ (¬(t_xsd__integer v1)))) → (∀ v2 : ι, ((t_cUnsatisfiable v2) ↔ (¬(∃ v3 : ι, (t_ra__Px5 v2 v3))))) → (∀ v4 : ι, ((t_cUnsatisfiablexcomp v4) ↔ ((t_ca__Cx7 v4) ∧ (t_ca__Cx8 v4) ∧ (t_ca__Cx6 v4)))) → (∀ v5 : ι, ((t_cUnsatisfiablexcomp v5) ↔ (∃ v6 : ι, (t_ra__Px5 v5 v6)))) → (∀ v7 : ι, ((t_ca v7) → (t_ca__Cx1 v7))) → (∀ v8 : ι, ((t_cb v8) ↔ (∃ v9 : ι, (t_ra__Px3 v8 v9)))) → (∀ v10 : ι, ((t_cb v10) → (t_ccxcomp v10))) → (∀ v11 : ι, ((t_cbxcomp v11) ↔ (¬(∃ v12 : ι, (t_ra__Px3 v11 v12))))) → (∀ v13 : ι, ((t_cc v13) ↔ (∃ v14 : ι, (t_ra__Px2 v13 v14)))) → (∀ v15 : ι, ((t_ccxcomp v15) ↔ (¬(∃ v16 : ι, (t_ra__Px2 v15 v16))))) → (∀ v17 : ι, ((t_ca__Cx1 v17) ↔ ((t_cbxcomp v17) ∧ (t_ccxcomp v17)))) → (∀ v18 : ι, ((t_ca__Cx1 v18) ↔ (∃ v19 : ι, (t_ra__Px1 v18 v19)))) → (∀ v20 : ι, ((t_ca__Cx1xcomp v20) ↔ (¬(∃ v21 : ι, (t_ra__Px1 v20 v21))))) → (∀ v22 : ι, ((t_ca__Cx6 v22) ↔ (¬(∃ v23 : ι, (t_ra__Px6 v22 v23))))) → (∀ v24 : ι, ((t_ca__Cx6xcomp v24) ↔ ((t_ca v24) ∧ (t_cb v24)))) → (∀ v25 : ι, ((t_ca__Cx6xcomp v25) ↔ (∃ v26 : ι, (t_ra__Px6 v25 v26)))) → (∀ v27 : ι, ((t_ca__Cx7 v27) ↔ (∃ v28 : ι, (t_ra__Px7 v27 v28)))) → (∀ v29 : ι, ((t_ca__Cx7xcomp v29) ↔ ((t_cc v29) ∧ (t_ca v29)))) → (∀ v30 : ι, ((t_ca__Cx7xcomp v30) ↔ (¬(∃ v31 : ι, (t_ra__Px7 v30 v31))))) → (∀ v32 : ι, ((t_ca__Cx8 v32) ↔ (¬(∃ v33 : ι, (t_ra__Px8 v32 v33))))) → (∀ v34 : ι, ((t_ca__Cx8xcomp v34) ↔ (∃ v35 : ι, (t_ra__Px8 v34 v35)))) → (∀ v36 : ι, ((t_ca__Cx8xcomp v36) ↔ ((t_cc v36) ∧ (t_cb v36)))) → (t_cUnsatisfiable t_i2003__11__14__17__20__50869) → False := by
  vampire
