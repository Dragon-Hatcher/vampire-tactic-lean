-- SEU363+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.22s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU363+1.p`, beside this file. This is its statement in Lean:
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
variable {t_powerset t_the__InternalRel t_the__carrier : ι → ι}
variable {t_cartesian__product2 t_ordered__pair t_relation__restriction t_relation__restriction__as__relation__of : ι → ι → ι}
variable {t_empty t_finite t_one__sorted__str t_rel__str t_relation : ι → Prop}
variable {t_element t_full__subrelstr t_in t_subrelstr t_subset : ι → ι → Prop}
variable {t_related t_relation__of2 t_relation__of2__as__subset : ι → ι → ι → Prop}

theorem T_SEU363p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_empty v2) → (t_finite v2))) → (∀ v3 v4 v5 : ι, ((t_element v5 (t_powerset (t_cartesian__product2 v3 v4))) → (t_relation v5))) → (∀ v6 : ι, ((t_finite v6) → (∀ v7 : ι, ((t_element v7 (t_powerset v6)) → (t_finite v7))))) → (∀ v8 : ι, ((t_rel__str v8) → (∀ v9 : ι, ((t_subrelstr v9 v8) → ((t_full__subrelstr v9 v8) ↔ ((t_the__InternalRel v9) = (t_relation__restriction__as__relation__of (t_the__InternalRel v8) (t_the__carrier v9)))))))) → (∀ v10 : ι, ((t_rel__str v10) → (∀ v11 : ι, ((t_element v11 (t_the__carrier v10)) → (∀ v12 : ι, ((t_element v12 (t_the__carrier v10)) → ((t_related v10 v11 v12) ↔ (t_in (t_ordered__pair v11 v12) (t_the__InternalRel v10))))))))) → (∀ v13 v14 : ι, ((t_relation v13) → (t_relation__of2__as__subset (t_relation__restriction__as__relation__of v13 v14) v14 v14))) → True → True → (∀ v15 v16 : ι, ((t_relation v15) → (t_relation (t_relation__restriction v15 v16)))) → True → True → (∀ v17 : ι, ((t_rel__str v17) → (t_one__sorted__str v17))) → True → True → True → (∀ v18 : ι, ((t_rel__str v18) → (∀ v19 : ι, ((t_subrelstr v19 v18) → (t_rel__str v19))))) → (∀ v20 v21 v22 : ι, ((t_relation__of2__as__subset v22 v20 v21) → (t_element v22 (t_powerset (t_cartesian__product2 v20 v21))))) → (∀ v23 : ι, ((t_rel__str v23) → (t_relation__of2__as__subset (t_the__InternalRel v23) (t_the__carrier v23) (t_the__carrier v23)))) → True → (∃ v24 : ι, (t_rel__str v24)) → (∃ v25 : ι, (t_one__sorted__str v25)) → (∀ v26 v27 : ι, (∃ v28 : ι, (t_relation__of2 v28 v26 v27))) → (∀ v29 : ι, (∃ v30 : ι, (t_element v30 v29))) → (∀ v31 : ι, ((t_rel__str v31) → (∃ v32 : ι, (t_subrelstr v32 v31)))) → (∀ v33 v34 : ι, (∃ v35 : ι, (t_relation__of2__as__subset v35 v33 v34))) → (∀ v36 v37 : ι, (((t_finite v36) ∧ (t_finite v37)) → (t_finite (t_cartesian__product2 v36 v37)))) → (t_empty t_empty__set) → (∃ v38 : ι, ((¬(t_empty v38)) ∧ (t_finite v38))) → (∃ v39 : ι, (t_empty v39)) → (∃ v40 : ι, (¬(t_empty v40))) → (∀ v41 : ι, ((¬(t_empty v41)) → (∃ v42 : ι, ((t_element v42 (t_powerset v41)) ∧ (¬(t_empty v42)) ∧ (t_finite v42))))) → (∀ v43 : ι, ((¬(t_empty v43)) → (∃ v44 : ι, ((t_element v44 (t_powerset v43)) ∧ (¬(t_empty v44)) ∧ (t_finite v44))))) → (∀ v45 v46 : ι, ((t_relation v45) → ((t_relation__restriction__as__relation__of v45 v46) = (t_relation__restriction v45 v46)))) → (∀ v47 v48 v49 : ι, ((t_relation__of2__as__subset v49 v47 v48) ↔ (t_relation__of2 v49 v47 v48))) → (∀ v50 v51 : ι, (t_subset v50 v50)) → (∀ v52 v53 v54 v55 : ι, ((t_in (t_ordered__pair v52 v53) (t_cartesian__product2 v54 v55)) ↔ ((t_in v52 v54) ∧ (t_in v53 v55)))) → (∀ v56 v57 v58 : ι, ((t_relation v58) → ((t_in v56 (t_relation__restriction v58 v57)) ↔ ((t_in v56 v58) ∧ (t_in v56 (t_cartesian__product2 v57 v57)))))) → (∀ v59 v60 : ι, ((t_in v59 v60) → (t_element v59 v60))) → (∀ v61 v62 : ι, ((t_element v61 v62) → ((t_empty v62) ∨ (t_in v61 v62)))) → (∀ v63 v64 : ι, ((t_element v63 (t_powerset v64)) ↔ (t_subset v63 v64))) → (∀ v65 v66 v67 : ι, (((t_in v65 v66) ∧ (t_element v66 (t_powerset v67))) → (t_element v65 v67))) → (∀ v68 v69 v70 : ι, (¬((t_in v68 v69) ∧ (t_element v69 (t_powerset v70)) ∧ (t_empty v70)))) → (∀ v71 : ι, ((t_empty v71) → (v71 = t_empty__set))) → (∀ v72 v73 : ι, (¬((t_in v72 v73) ∧ (t_empty v73)))) → (∀ v74 v75 : ι, (¬((t_empty v74) ∧ (¬(v74 = v75)) ∧ (t_empty v75)))) → (∀ v76 : ι, ((t_rel__str v76) → (∀ v77 : ι, (((t_full__subrelstr v77 v76) ∧ (t_subrelstr v77 v76)) → (∀ v78 : ι, ((t_element v78 (t_the__carrier v76)) → (∀ v79 : ι, ((t_element v79 (t_the__carrier v76)) → (∀ v80 : ι, ((t_element v80 (t_the__carrier v77)) → (∀ v81 : ι, ((t_element v81 (t_the__carrier v77)) → (((v80 = v78) ∧ (v81 = v79) ∧ (t_related v76 v78 v79) ∧ (t_in v80 (t_the__carrier v77)) ∧ (t_in v81 (t_the__carrier v77))) → (t_related v77 v80 v81)))))))))))))) := by
  vampire
