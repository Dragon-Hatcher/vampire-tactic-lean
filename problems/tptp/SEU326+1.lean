-- SEU326+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU326+1.p`, beside this file. This is its statement in Lean:
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
variable {t_powerset : ι → ι}
variable {t_complements__of__subsets : ι → ι → ι}
variable {t_empty t_natural t_v1__int__1 t_v1__membered t_v1__rat__1 t_v1__xcmplx__0 t_v1__xreal__0 t_v2__membered t_v3__membered t_v4__membered t_v5__membered : ι → Prop}
variable {t_element t_in t_subset : ι → ι → Prop}

theorem T_SEU326p1 : (∀ v0 v1 : ι, ((t_in v0 v1) → (¬(t_in v1 v0)))) → (∀ v2 : ι, ((t_v1__membered v2) → (∀ v3 : ι, ((t_element v3 v2) → (t_v1__xcmplx__0 v3))))) → (∀ v4 : ι, ((t_v2__membered v4) → (∀ v5 : ι, ((t_element v5 v4) → ((t_v1__xcmplx__0 v5) ∧ (t_v1__xreal__0 v5)))))) → (∀ v6 : ι, ((t_v3__membered v6) → (∀ v7 : ι, ((t_element v7 v6) → ((t_v1__xcmplx__0 v7) ∧ (t_v1__xreal__0 v7) ∧ (t_v1__rat__1 v7)))))) → (∀ v8 : ι, ((t_v4__membered v8) → (∀ v9 : ι, ((t_element v9 v8) → ((t_v1__xcmplx__0 v9) ∧ (t_v1__xreal__0 v9) ∧ (t_v1__int__1 v9) ∧ (t_v1__rat__1 v9)))))) → (∀ v10 : ι, ((t_v5__membered v10) → (∀ v11 : ι, ((t_element v11 v10) → ((t_v1__xcmplx__0 v11) ∧ (t_natural v11) ∧ (t_v1__xreal__0 v11) ∧ (t_v1__int__1 v11) ∧ (t_v1__rat__1 v11)))))) → (∀ v12 : ι, ((t_empty v12) → ((t_v1__membered v12) ∧ (t_v2__membered v12) ∧ (t_v3__membered v12) ∧ (t_v4__membered v12) ∧ (t_v5__membered v12)))) → (∀ v13 : ι, ((t_v1__membered v13) → (∀ v14 : ι, ((t_element v14 (t_powerset v13)) → (t_v1__membered v14))))) → (∀ v15 : ι, ((t_v2__membered v15) → (∀ v16 : ι, ((t_element v16 (t_powerset v15)) → ((t_v1__membered v16) ∧ (t_v2__membered v16)))))) → (∀ v17 : ι, ((t_v3__membered v17) → (∀ v18 : ι, ((t_element v18 (t_powerset v17)) → ((t_v1__membered v18) ∧ (t_v2__membered v18) ∧ (t_v3__membered v18)))))) → (∀ v19 : ι, ((t_v4__membered v19) → (∀ v20 : ι, ((t_element v20 (t_powerset v19)) → ((t_v1__membered v20) ∧ (t_v2__membered v20) ∧ (t_v3__membered v20) ∧ (t_v4__membered v20)))))) → (∀ v21 : ι, ((t_v5__membered v21) → (t_v4__membered v21))) → (∀ v22 : ι, ((t_v5__membered v22) → (∀ v23 : ι, ((t_element v23 (t_powerset v22)) → ((t_v1__membered v23) ∧ (t_v2__membered v23) ∧ (t_v3__membered v23) ∧ (t_v4__membered v23) ∧ (t_v5__membered v23)))))) → (∀ v24 : ι, ((t_v4__membered v24) → (t_v3__membered v24))) → (∀ v25 : ι, ((t_v3__membered v25) → (t_v2__membered v25))) → (∀ v26 : ι, ((t_v2__membered v26) → (t_v1__membered v26))) → True → True → (∀ v27 v28 : ι, ((t_element v28 (t_powerset (t_powerset v27))) → (t_element (t_complements__of__subsets v27 v28) (t_powerset (t_powerset v27))))) → True → (∀ v29 : ι, (∃ v30 : ι, (t_element v30 v29))) → (∀ v31 : ι, (¬(t_empty (t_powerset v31)))) → ((t_empty t_empty__set) ∧ (t_v1__membered t_empty__set) ∧ (t_v2__membered t_empty__set) ∧ (t_v3__membered t_empty__set) ∧ (t_v4__membered t_empty__set) ∧ (t_v5__membered t_empty__set)) → (∀ v32 v33 : ι, ((t_element v33 (t_powerset (t_powerset v32))) → ((t_complements__of__subsets v32 (t_complements__of__subsets v32 v33)) = v33))) → (∃ v34 : ι, ((¬(t_empty v34)) ∧ (t_v1__membered v34) ∧ (t_v2__membered v34) ∧ (t_v3__membered v34) ∧ (t_v4__membered v34) ∧ (t_v5__membered v34))) → (∀ v35 : ι, ((¬(t_empty v35)) → (∃ v36 : ι, ((t_element v36 (t_powerset v35)) ∧ (¬(t_empty v36)))))) → (∀ v37 : ι, (∃ v38 : ι, ((t_element v38 (t_powerset v37)) ∧ (t_empty v38)))) → (∀ v39 v40 : ι, (t_subset v39 v39)) → (∀ v41 v42 : ι, ((t_in v41 v42) → (t_element v41 v42))) → (∀ v43 v44 : ι, ((t_element v43 v44) → ((t_empty v44) ∨ (t_in v43 v44)))) → (∀ v45 v46 : ι, ((t_element v45 (t_powerset v46)) ↔ (t_subset v45 v46))) → (∀ v47 v48 : ι, ((t_element v48 (t_powerset (t_powerset v47))) → (¬((¬(v48 = t_empty__set)) ∧ ((t_complements__of__subsets v47 v48) = t_empty__set))))) → (∀ v49 v50 v51 : ι, (((t_in v49 v50) ∧ (t_element v50 (t_powerset v51))) → (t_element v49 v51))) → (∀ v52 v53 v54 : ι, (¬((t_in v52 v53) ∧ (t_element v53 (t_powerset v54)) ∧ (t_empty v54)))) → (∀ v55 : ι, ((t_empty v55) → (v55 = t_empty__set))) → (∀ v56 v57 : ι, (¬((t_in v56 v57) ∧ (t_empty v57)))) → (∀ v58 v59 : ι, (¬((t_empty v58) ∧ (¬(v58 = v59)) ∧ (t_empty v59)))) → (∀ v60 v61 : ι, ((t_element v61 (t_powerset (t_powerset v60))) → ((¬((¬(v61 = t_empty__set)) ∧ ((t_complements__of__subsets v60 v61) = t_empty__set))) ∧ (¬((¬((t_complements__of__subsets v60 v61) = t_empty__set)) ∧ (v61 = t_empty__set)))))) := by
  vampire
