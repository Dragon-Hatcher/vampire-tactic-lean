-- SWB021+2, from TPTP v9.3.1 (SWB).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.90s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWB021+2.p`, beside this file. This is its statement in Lean:
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
variable {t_uri__ex__c1 t_uri__ex__c2 t_uri__ex__c3 t_uri__ex__c4 t_uri__ex__w1 t_uri__ex__w2 t_uri__ex__w3 t_uri__owl__equivalentClass t_uri__owl__oneOf t_uri__owl__unionOf t_uri__rdf__List t_uri__rdf__first t_uri__rdf__nil t_uri__rdf__rest : ι}
variable {t_ic : ι → Prop}
variable {t_icext : ι → ι → Prop}
variable {t_iext : ι → ι → ι → Prop}

theorem T_SWB021p2 : (∀ v0 v1 : ι, ((t_iext t_uri__owl__oneOf v0 v1) → ((t_ic v0) ∧ (t_icext t_uri__rdf__List v1)))) → (∀ v2 v3 : ι, ((t_iext t_uri__owl__unionOf v2 v3) → ((t_ic v2) ∧ (t_icext t_uri__rdf__List v3)))) → (∀ v4 v5 v6 v7 v8 : ι, (((t_iext t_uri__rdf__first v5 v6) ∧ (t_iext t_uri__rdf__rest v5 v7) ∧ (t_iext t_uri__rdf__first v7 v8) ∧ (t_iext t_uri__rdf__rest v7 t_uri__rdf__nil)) → ((t_iext t_uri__owl__unionOf v4 v5) ↔ ((t_ic v4) ∧ (t_ic v6) ∧ (t_ic v8) ∧ (∀ v9 : ι, ((t_icext v4 v9) ↔ ((t_icext v6 v9) ∨ (t_icext v8 v9)))))))) → (∀ v10 v11 v12 v13 v14 : ι, (((t_iext t_uri__rdf__first v11 v12) ∧ (t_iext t_uri__rdf__rest v11 v13) ∧ (t_iext t_uri__rdf__first v13 v14) ∧ (t_iext t_uri__rdf__rest v13 t_uri__rdf__nil)) → ((t_iext t_uri__owl__oneOf v10 v11) ↔ ((t_ic v10) ∧ (∀ v15 : ι, ((t_icext v10 v15) ↔ ((v15 = v12) ∨ (v15 = v14)))))))) → (∀ v16 v17 v18 v19 v20 v21 v22 : ι, (((t_iext t_uri__rdf__first v17 v18) ∧ (t_iext t_uri__rdf__rest v17 v19) ∧ (t_iext t_uri__rdf__first v19 v20) ∧ (t_iext t_uri__rdf__rest v19 v21) ∧ (t_iext t_uri__rdf__first v21 v22) ∧ (t_iext t_uri__rdf__rest v21 t_uri__rdf__nil)) → ((t_iext t_uri__owl__oneOf v16 v17) ↔ ((t_ic v16) ∧ (∀ v23 : ι, ((t_icext v16 v23) ↔ ((v23 = v18) ∨ (v23 = v20) ∨ (v23 = v22)))))))) → (∀ v24 v25 : ι, ((t_iext t_uri__owl__equivalentClass v24 v25) ↔ ((t_ic v24) ∧ (t_ic v25) ∧ (∀ v26 : ι, ((t_icext v24 v26) ↔ (t_icext v25 v26)))))) → (∃ v27 v28 v29 v30 v31 v32 v33 v34 v35 : ι, ((t_iext t_uri__owl__oneOf t_uri__ex__c1 v27) ∧ (t_iext t_uri__rdf__first v27 t_uri__ex__w1) ∧ (t_iext t_uri__rdf__rest v27 v28) ∧ (t_iext t_uri__rdf__first v28 t_uri__ex__w2) ∧ (t_iext t_uri__rdf__rest v28 t_uri__rdf__nil) ∧ (t_iext t_uri__owl__oneOf t_uri__ex__c2 v29) ∧ (t_iext t_uri__rdf__first v29 t_uri__ex__w2) ∧ (t_iext t_uri__rdf__rest v29 v30) ∧ (t_iext t_uri__rdf__first v30 t_uri__ex__w3) ∧ (t_iext t_uri__rdf__rest v30 t_uri__rdf__nil) ∧ (t_iext t_uri__owl__oneOf t_uri__ex__c3 v31) ∧ (t_iext t_uri__rdf__first v31 t_uri__ex__w1) ∧ (t_iext t_uri__rdf__rest v31 v32) ∧ (t_iext t_uri__rdf__first v32 t_uri__ex__w2) ∧ (t_iext t_uri__rdf__rest v32 v33) ∧ (t_iext t_uri__rdf__first v33 t_uri__ex__w3) ∧ (t_iext t_uri__rdf__rest v33 t_uri__rdf__nil) ∧ (t_iext t_uri__owl__unionOf t_uri__ex__c4 v34) ∧ (t_iext t_uri__rdf__first v34 t_uri__ex__c1) ∧ (t_iext t_uri__rdf__rest v34 v35) ∧ (t_iext t_uri__rdf__first v35 t_uri__ex__c2) ∧ (t_iext t_uri__rdf__rest v35 t_uri__rdf__nil))) → (t_iext t_uri__owl__equivalentClass t_uri__ex__c3 t_uri__ex__c4) := by
  vampire
