-- COL090-3, from TPTP v9.3.1 (COL).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `COL090-3.p`, beside this file. This is its statement in Lean:
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
variable {t_comb t_combK t_combS t_contract t_r : ι}
variable {t_comb__app t_pair : ι → ι → ι}
variable {t_ap__contractE__sk1p t_ap__contractE__sk1q t_ap__contractE__sk2q t_ap__contractE__sk3q : ι → ι → ι → ι}
variable {t_member : ι → ι → Prop}
variable {t_ap__contractE__c1 t_ap__contractE__c2 t_ap__contractE__c3 t_ap__contractE__c4 : ι → ι → ι → Prop}

theorem T_COL090m3 : (¬(t_combK = t_combS)) → (∀ v0 v1 : ι, (¬(t_combK = (t_comb__app v0 v1)))) → (∀ v2 v3 : ι, (¬(t_combS = (t_comb__app v2 v3)))) → (∀ v4 v5 v6 v7 : ι, ((¬((t_comb__app v4 v6) = (t_comb__app v5 v7))) ∨ (v4 = v5))) → (∀ v8 v9 v10 v11 : ι, ((¬((t_comb__app v8 v10) = (t_comb__app v9 v11))) ∨ (v10 = v11))) → (∀ v12 v13 v14 v15 : ι, ((¬(v12 = v13)) ∨ (¬(v14 = v15)) ∨ ((t_comb__app v12 v14) = (t_comb__app v13 v15)))) → (∀ v16 v17 v18 : ι, ((¬(t_member (t_pair (t_comb__app v16 v17) v18) t_contract)) ∨ (t_ap__contractE__c1 v16 v17 v18) ∨ (t_ap__contractE__c2 v16 v17 v18) ∨ (t_ap__contractE__c3 v16 v17 v18) ∨ (t_ap__contractE__c4 v16 v17 v18))) → (∀ v19 v20 v21 : ι, ((¬(t_ap__contractE__c1 v19 v20 v21)) ∨ (t_member v21 t_comb))) → (∀ v22 v23 v24 : ι, ((¬(t_ap__contractE__c1 v22 v23 v24)) ∨ (t_member v23 t_comb))) → (∀ v25 v26 v27 : ι, ((¬(t_ap__contractE__c1 v25 v26 v27)) ∨ (v25 = (t_comb__app t_combK v27)))) → (∀ v28 v29 v30 : ι, ((¬(t_ap__contractE__c2 v28 v29 v30)) ∨ (t_member (t_ap__contractE__sk1p v28 v29 v30) t_comb))) → (∀ v31 v32 v33 : ι, ((¬(t_ap__contractE__c2 v31 v32 v33)) ∨ (t_member (t_ap__contractE__sk1q v31 v32 v33) t_comb))) → (∀ v34 v35 v36 : ι, ((¬(t_ap__contractE__c2 v34 v35 v36)) ∨ (t_member v35 t_comb))) → (∀ v37 v38 v39 : ι, ((¬(t_ap__contractE__c2 v37 v38 v39)) ∨ (v39 = (t_comb__app (t_comb__app (t_ap__contractE__sk1p v37 v38 v39) v38) (t_comb__app (t_ap__contractE__sk1q v37 v38 v39) v38))))) → (∀ v40 v41 v42 : ι, ((¬(t_ap__contractE__c2 v40 v41 v42)) ∨ (v40 = (t_comb__app (t_comb__app t_combS (t_ap__contractE__sk1p v40 v41 v42)) (t_ap__contractE__sk1q v40 v41 v42))))) → (∀ v43 v44 v45 : ι, ((¬(t_ap__contractE__c3 v43 v44 v45)) ∨ (t_member (t_pair v43 (t_ap__contractE__sk2q v43 v44 v45)) t_contract))) → (∀ v46 v47 v48 : ι, ((¬(t_ap__contractE__c3 v46 v47 v48)) ∨ (t_member v47 t_comb))) → (∀ v49 v50 v51 : ι, ((¬(t_ap__contractE__c3 v49 v50 v51)) ∨ (v51 = (t_comb__app (t_ap__contractE__sk2q v49 v50 v51) v50)))) → (∀ v52 v53 v54 : ι, ((¬(t_ap__contractE__c4 v52 v53 v54)) ∨ (t_member (t_pair v53 (t_ap__contractE__sk3q v52 v53 v54)) t_contract))) → (∀ v55 v56 v57 : ι, ((¬(t_ap__contractE__c4 v55 v56 v57)) ∨ (t_member v55 t_comb))) → (∀ v58 v59 v60 : ι, ((¬(t_ap__contractE__c4 v58 v59 v60)) ∨ (v60 = (t_comb__app v58 (t_ap__contractE__sk3q v58 v59 v60))))) → (∀ v61 : ι, (¬(t_member (t_pair t_combK v61) t_contract))) → (∀ v62 : ι, (¬(t_member (t_pair t_combS v62) t_contract))) → (t_member (t_pair (t_comb__app (t_comb__app t_combS t_combK) t_combK) t_r) t_contract) → False := by
  vampire
