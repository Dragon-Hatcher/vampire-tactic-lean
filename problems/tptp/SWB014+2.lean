-- SWB014+2, from TPTP v9.3.1 (SWB).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWB014+2.p`, beside this file. This is its statement in Lean:
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
variable {t_uri__ex__Eagle t_uri__ex__Falcon t_uri__ex__Species t_uri__ex__harry t_uri__owl__unionOf t_uri__rdf__first t_uri__rdf__nil t_uri__rdf__rest t_uri__rdf__type : ι}
variable {t_ic : ι → Prop}
variable {t_icext : ι → ι → Prop}
variable {t_iext : ι → ι → ι → Prop}

theorem T_SWB014p2 : (∀ v0 v1 : ι, ((t_iext t_uri__rdf__type v0 v1) ↔ (t_icext v1 v0))) → (∀ v2 v3 v4 v5 v6 : ι, (((t_iext t_uri__rdf__first v3 v4) ∧ (t_iext t_uri__rdf__rest v3 v5) ∧ (t_iext t_uri__rdf__first v5 v6) ∧ (t_iext t_uri__rdf__rest v5 t_uri__rdf__nil)) → ((t_iext t_uri__owl__unionOf v2 v3) ↔ ((t_ic v2) ∧ (t_ic v4) ∧ (t_ic v6) ∧ (∀ v7 : ι, ((t_icext v2 v7) ↔ ((t_icext v4 v7) ∨ (t_icext v6 v7)))))))) → (∃ v8 v9 v10 : ι, ((t_iext t_uri__rdf__type t_uri__ex__Eagle t_uri__ex__Species) ∧ (t_iext t_uri__rdf__type t_uri__ex__Falcon t_uri__ex__Species) ∧ (t_iext t_uri__rdf__type t_uri__ex__harry v8) ∧ (t_iext t_uri__owl__unionOf v8 v9) ∧ (t_iext t_uri__rdf__first v9 t_uri__ex__Eagle) ∧ (t_iext t_uri__rdf__rest v9 v10) ∧ (t_iext t_uri__rdf__first v10 t_uri__ex__Falcon) ∧ (t_iext t_uri__rdf__rest v10 t_uri__rdf__nil))) → (∃ v11 : ι, ((t_iext t_uri__rdf__type t_uri__ex__harry v11) ∧ (t_iext t_uri__rdf__type v11 t_uri__ex__Species))) := by
  vampire
