-- RNG038-2, from TPTP v9.3.1 (RNG).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `RNG038-2.p`, beside this file. This is its statement in Lean:
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
variable {t_a t_additive__identity t_b : ι}
variable {t_additive__inverse : ι → ι}
variable {t_add t_h t_multiply : ι → ι → ι}
variable {t_equalish : ι → ι → Prop}
variable {t_product t_sum : ι → ι → ι → Prop}

theorem T_RNG038m2 : (∀ v0 v1 : ι, ((¬(t_equalish v0 v1)) ∨ (t_equalish (t_additive__inverse v0) (t_additive__inverse v1)))) → (∀ v2 v3 v4 : ι, ((¬(t_equalish v3 v4)) ∨ (t_equalish (t_add v3 v2) (t_add v4 v2)))) → (∀ v5 v6 v7 v8 : ι, ((¬(t_equalish v6 v7)) ∨ (¬(t_sum v6 v5 v8)) ∨ (t_sum v7 v5 v8))) → (∀ v9 v10 v11 v12 : ι, ((¬(t_equalish v10 v11)) ∨ (¬(t_sum v9 v10 v12)) ∨ (t_sum v9 v11 v12))) → (∀ v13 v14 v15 v16 : ι, ((¬(t_equalish v14 v15)) ∨ (¬(t_sum v13 v16 v14)) ∨ (t_sum v13 v16 v15))) → (∀ v17 v18 v19 : ι, ((¬(t_equalish v18 v19)) ∨ (t_equalish (t_multiply v18 v17) (t_multiply v19 v17)))) → (∀ v20 v21 v22 v23 : ι, ((¬(t_equalish v21 v22)) ∨ (¬(t_product v21 v20 v23)) ∨ (t_product v22 v20 v23))) → (∀ v24 v25 v26 v27 : ι, ((¬(t_equalish v25 v26)) ∨ (¬(t_product v24 v25 v27)) ∨ (t_product v24 v26 v27))) → (∀ v28 v29 v30 v31 : ι, ((¬(t_equalish v29 v30)) ∨ (¬(t_product v28 v31 v29)) ∨ (t_product v28 v31 v30))) → (∀ v32 : ι, (t_sum v32 t_additive__identity v32)) → (∀ v33 v34 : ι, (t_product v33 v34 (t_multiply v33 v34))) → (∀ v35 v36 : ι, (t_sum v35 v36 (t_add v35 v36))) → (∀ v37 : ι, (t_sum v37 (t_additive__inverse v37) t_additive__identity)) → (∀ v38 v39 v40 v41 v42 v43 : ι, ((¬(t_sum v41 v42 v38)) ∨ (¬(t_sum v42 v43 v39)) ∨ (¬(t_sum v38 v43 v40)) ∨ (t_sum v41 v39 v40))) → (∀ v44 v45 v46 v47 v48 v49 : ι, ((¬(t_sum v47 v48 v44)) ∨ (¬(t_sum v48 v49 v45)) ∨ (¬(t_sum v47 v45 v46)) ∨ (t_sum v44 v49 v46))) → (∀ v50 v51 v52 : ι, ((¬(t_sum v50 v51 v52)) ∨ (t_sum v51 v50 v52))) → (∀ v53 v54 v55 v56 v57 v58 : ι, ((¬(t_product v56 v57 v53)) ∨ (¬(t_product v57 v58 v54)) ∨ (¬(t_product v53 v58 v55)) ∨ (t_product v56 v54 v55))) → (∀ v59 v60 v61 v62 v63 v64 : ι, ((¬(t_product v62 v63 v59)) ∨ (¬(t_product v63 v64 v60)) ∨ (¬(t_product v62 v60 v61)) ∨ (t_product v59 v64 v61))) → (∀ v65 v66 v67 v68 v69 v70 v71 : ι, ((¬(t_product v69 v70 v65)) ∨ (¬(t_product v69 v71 v66)) ∨ (¬(t_sum v70 v71 v67)) ∨ (¬(t_product v69 v67 v68)) ∨ (t_sum v65 v66 v68))) → (∀ v72 v73 v74 v75 v76 v77 v78 : ι, ((¬(t_product v76 v77 v72)) ∨ (¬(t_product v76 v78 v73)) ∨ (¬(t_sum v77 v78 v74)) ∨ (¬(t_sum v72 v73 v75)) ∨ (t_product v76 v74 v75))) → (∀ v79 v80 v81 v82 v83 v84 v85 : ι, ((¬(t_product v84 v83 v79)) ∨ (¬(t_product v85 v83 v80)) ∨ (¬(t_sum v84 v85 v81)) ∨ (¬(t_product v81 v83 v82)) ∨ (t_sum v79 v80 v82))) → (∀ v86 v87 v88 v89 v90 v91 v92 : ι, ((¬(t_product v91 v90 v86)) ∨ (¬(t_product v92 v90 v87)) ∨ (¬(t_sum v91 v92 v88)) ∨ (¬(t_sum v86 v87 v89)) ∨ (t_product v88 v90 v89))) → (∀ v93 v94 v95 v96 : ι, ((¬(t_sum v95 v96 v93)) ∨ (¬(t_sum v95 v96 v94)) ∨ (t_equalish v93 v94))) → (∀ v97 v98 v99 v100 : ι, ((¬(t_product v99 v100 v97)) ∨ (¬(t_product v99 v100 v98)) ∨ (t_equalish v97 v98))) → (∀ v101 : ι, (t_product t_additive__identity v101 t_additive__identity)) → (∀ v102 : ι, (t_product v102 t_additive__identity t_additive__identity)) → (∀ v103 v104 : ι, ((¬(t_equalish v103 t_additive__identity)) ∨ (t_product v103 (t_h v103 v104) v104))) → (t_product t_a t_b t_additive__identity) → (¬(t_equalish t_a t_additive__identity)) → (¬(t_equalish t_b t_additive__identity)) → False := by
  vampire
