-- SWB018+2, from TPTP v9.3.1 (SWB).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWB018+2.p`, beside this file. This is its statement in Lean:
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
variable {t_uri__ex__Person t_uri__ex__u t_uri__ex__w t_uri__owl__sameAs t_uri__rdf__type t_uri__rdfs__domain : ι}
variable {t_icext : ι → ι → Prop}
variable {t_iext : ι → ι → ι → Prop}

theorem T_SWB018p2 : (∀ v0 v1 : ι, ((t_iext t_uri__rdf__type v0 v1) ↔ (t_icext v1 v0))) → (∀ v2 v3 v4 v5 : ι, (((t_iext t_uri__rdfs__domain v2 v3) ∧ (t_iext v2 v4 v5)) → (t_icext v3 v4))) → (∀ v6 v7 : ι, ((t_iext t_uri__owl__sameAs v6 v7) ↔ (v6 = v7))) → ((t_iext t_uri__rdfs__domain t_uri__owl__sameAs t_uri__ex__Person) ∧ (t_iext t_uri__owl__sameAs t_uri__ex__w t_uri__ex__u)) → (t_iext t_uri__rdf__type t_uri__ex__u t_uri__ex__Person) := by
  vampire
