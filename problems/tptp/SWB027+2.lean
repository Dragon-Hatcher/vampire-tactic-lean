-- SWB027+2, from TPTP v9.3.1 (SWB).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.02s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWB027+2.p`, beside this file. This is its statement in Lean:
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
variable {t_uri__ex__p t_uri__owl__InverseFunctionalProperty t_uri__owl__inverseOf t_uri__owl__propertyChainAxiom t_uri__owl__sameAs t_uri__rdf__first t_uri__rdf__nil t_uri__rdf__rest t_uri__rdf__type : ι}
variable {t_ip : ι → Prop}
variable {t_icext : ι → ι → Prop}
variable {t_iext : ι → ι → ι → Prop}

theorem T_SWB027p2 : (∀ v0 v1 : ι, ((t_iext t_uri__rdf__type v0 v1) ↔ (t_icext v1 v0))) → (∀ v2 v3 : ι, ((t_iext t_uri__owl__sameAs v2 v3) ↔ (v2 = v3))) → (∀ v4 v5 v6 v7 v8 : ι, (((t_iext t_uri__rdf__first v5 v6) ∧ (t_iext t_uri__rdf__rest v5 v7) ∧ (t_iext t_uri__rdf__first v7 v8) ∧ (t_iext t_uri__rdf__rest v7 t_uri__rdf__nil)) → ((t_iext t_uri__owl__propertyChainAxiom v4 v5) ↔ ((t_ip v4) ∧ (t_ip v6) ∧ (t_ip v8) ∧ (∀ v9 v10 v11 : ι, (((t_iext v6 v9 v10) ∧ (t_iext v8 v10 v11)) → (t_iext v4 v9 v11))))))) → (∀ v12 : ι, ((t_icext t_uri__owl__InverseFunctionalProperty v12) ↔ ((t_ip v12) ∧ (∀ v13 v14 v15 : ι, (((t_iext v12 v13 v15) ∧ (t_iext v12 v14 v15)) → (v13 = v14)))))) → (∀ v16 v17 : ι, ((t_iext t_uri__owl__inverseOf v16 v17) ↔ ((t_ip v16) ∧ (t_ip v17) ∧ (∀ v18 v19 : ι, ((t_iext v16 v18 v19) ↔ (t_iext v17 v19 v18)))))) → (∃ v20 v21 v22 : ι, ((t_iext t_uri__owl__propertyChainAxiom t_uri__owl__sameAs v20) ∧ (t_iext t_uri__rdf__first v20 t_uri__ex__p) ∧ (t_iext t_uri__rdf__rest v20 v21) ∧ (t_iext t_uri__rdf__first v21 v22) ∧ (t_iext t_uri__rdf__rest v21 t_uri__rdf__nil) ∧ (t_iext t_uri__owl__inverseOf v22 t_uri__ex__p))) → (t_iext t_uri__rdf__type t_uri__ex__p t_uri__owl__InverseFunctionalProperty) := by
  vampire
