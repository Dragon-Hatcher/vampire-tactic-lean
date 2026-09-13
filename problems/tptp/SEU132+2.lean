-- SEU132+2, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.15s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU132+2.p`, beside this file. This is its statement in Lean:
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
variable {t_empty__set : ι}
variable {t_set__difference t_set__intersection2 t_set__union2 : ι → ι → ι}
variable {t_empty : ι → Prop}
variable {t_disjoint t_in t_subset : ι → ι → Prop}

theorem T_SEU132p2 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 v3 : ι, ((t_set__union2 v2 v3) = (t_set__union2 v3 v2))) → (∀ v4 v5 : ι, ((t_set__intersection2 v4 v5) = (t_set__intersection2 v5 v4))) → (∀ v6 v7 : ι, ((v6 = v7) ↔ ((t_subset v6 v7) ∧ (t_subset v7 v6)))) → (∀ v8 : ι, ((v8 = t_empty__set) ↔ (∀ v9 : ι, (¬(t_in v9 v8))))) → (∀ v10 v11 v12 : ι, ((v12 = (t_set__union2 v10 v11)) ↔ (∀ v13 : ι, ((t_in v13 v12) ↔ ((t_in v13 v10) ∨ (t_in v13 v11)))))) → (∀ v14 v15 : ι, ((t_subset v14 v15) ↔ (∀ v16 : ι, ((t_in v16 v14) → (t_in v16 v15))))) → (∀ v17 v18 v19 : ι, ((v19 = (t_set__intersection2 v17 v18)) ↔ (∀ v20 : ι, ((t_in v20 v19) ↔ ((t_in v20 v17) ∧ (t_in v20 v18)))))) → (∀ v21 v22 v23 : ι, ((v23 = (t_set__difference v21 v22)) ↔ (∀ v24 : ι, ((t_in v24 v23) ↔ ((t_in v24 v21) ∧ (¬(t_in v24 v22))))))) → (∀ v25 v26 : ι, ((t_disjoint v25 v26) ↔ ((t_set__intersection2 v25 v26) = t_empty__set))) → True → True → True → True → (t_empty t_empty__set) → (∀ v27 v28 : ι, ((¬(t_empty v27)) → (¬(t_empty (t_set__union2 v27 v28))))) → (∀ v29 v30 : ι, ((¬(t_empty v29)) → (¬(t_empty (t_set__union2 v30 v29))))) → (∀ v31 v32 : ι, ((t_set__union2 v31 v31) = v31)) → (∀ v33 v34 : ι, ((t_set__intersection2 v33 v33) = v33)) → (∀ v35 v36 : ι, (((t_set__difference v35 v36) = t_empty__set) ↔ (t_subset v35 v36))) → (∃ v37 : ι, (t_empty v37)) → (∃ v38 : ι, (¬(t_empty v38))) → (∀ v39 v40 : ι, (t_subset v39 v39)) → (∀ v41 v42 : ι, ((t_disjoint v41 v42) → (t_disjoint v42 v41))) → (∀ v43 v44 : ι, ((t_subset v43 v44) → ((t_set__union2 v43 v44) = v44))) → (∀ v45 v46 : ι, (t_subset (t_set__intersection2 v45 v46) v45)) → (∀ v47 v48 v49 : ι, (((t_subset v47 v48) ∧ (t_subset v47 v49)) → (t_subset v47 (t_set__intersection2 v48 v49)))) → (∀ v50 : ι, ((t_set__union2 v50 t_empty__set) = v50)) → (∀ v51 v52 v53 : ι, (((t_subset v51 v52) ∧ (t_subset v52 v53)) → (t_subset v51 v53))) → (∀ v54 v55 v56 : ι, ((t_subset v54 v55) → (t_subset (t_set__intersection2 v54 v56) (t_set__intersection2 v55 v56)))) → (∀ v57 v58 : ι, ((t_subset v57 v58) → ((t_set__intersection2 v57 v58) = v57))) → (∀ v59 : ι, ((t_set__intersection2 v59 t_empty__set) = t_empty__set)) → (∀ v60 v61 : ι, ((∀ v62 : ι, ((t_in v62 v60) ↔ (t_in v62 v61))) → (v60 = v61))) → (∀ v63 : ι, (t_subset t_empty__set v63)) → (∀ v64 : ι, ((t_set__difference v64 t_empty__set) = v64)) → (∀ v65 v66 : ι, ((¬((¬(t_disjoint v65 v66)) ∧ (∀ v67 : ι, (¬((t_in v67 v65) ∧ (t_in v67 v66)))))) ∧ (¬((∃ v68 : ι, ((t_in v68 v65) ∧ (t_in v68 v66))) ∧ (t_disjoint v65 v66))))) → (∀ v69 : ι, ((t_subset v69 t_empty__set) → (v69 = t_empty__set))) → (∀ v70 : ι, ((t_set__difference t_empty__set v70) = t_empty__set)) → (∀ v71 v72 : ι, ((¬((¬(t_disjoint v71 v72)) ∧ (∀ v73 : ι, (¬(t_in v73 (t_set__intersection2 v71 v72)))))) ∧ (¬((∃ v74 : ι, (t_in v74 (t_set__intersection2 v71 v72))) ∧ (t_disjoint v71 v72))))) → (∀ v75 : ι, ((t_empty v75) → (v75 = t_empty__set))) → (∀ v76 v77 : ι, (¬((t_in v76 v77) ∧ (t_empty v77)))) → (∀ v78 v79 : ι, (t_subset v78 (t_set__union2 v78 v79))) → (∀ v80 v81 : ι, (¬((t_empty v80) ∧ (¬(v80 = v81)) ∧ (t_empty v81)))) → (∀ v82 v83 v84 : ι, (((t_subset v82 v83) ∧ (t_subset v84 v83)) → (t_subset (t_set__union2 v82 v84) v83))) → (∀ v85 v86 v87 : ι, ((t_subset v85 v86) → (t_subset (t_set__difference v85 v87) (t_set__difference v86 v87)))) := by
  vampire
