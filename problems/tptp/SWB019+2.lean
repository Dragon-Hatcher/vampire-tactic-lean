-- SWB019+2, from TPTP v9.3.1 (SWB).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWB019+2.p`, beside this file. This is its statement in Lean:
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
variable {t_dat__str__foo t_uri__ex__foo t_uri__owl__AnnotationProperty t_uri__owl__propertyDisjointWith t_uri__rdf__type t_uri__rdfs__label t_uri__rdfs__subPropertyOf t_uri__skos__altLabel t_uri__skos__prefLabel : ι}
variable {t_literal__plain : ι → ι}
variable {t_ip : ι → Prop}
variable {t_iext : ι → ι → ι → Prop}

theorem T_SWB019p2 : (∀ v0 v1 : ι, ((t_iext t_uri__owl__propertyDisjointWith v0 v1) ↔ ((t_ip v0) ∧ (t_ip v1) ∧ (∀ v2 v3 : ι, (¬((t_iext v0 v2 v3) ∧ (t_iext v1 v2 v3))))))) → ((t_iext t_uri__rdf__type t_uri__skos__prefLabel t_uri__owl__AnnotationProperty) ∧ (t_iext t_uri__rdfs__subPropertyOf t_uri__skos__prefLabel t_uri__rdfs__label) ∧ (t_iext t_uri__rdf__type t_uri__skos__altLabel t_uri__owl__AnnotationProperty) ∧ (t_iext t_uri__rdfs__subPropertyOf t_uri__skos__altLabel t_uri__rdfs__label) ∧ (t_iext t_uri__owl__propertyDisjointWith t_uri__skos__prefLabel t_uri__skos__altLabel) ∧ (t_iext t_uri__skos__prefLabel t_uri__ex__foo (t_literal__plain t_dat__str__foo)) ∧ (t_iext t_uri__skos__altLabel t_uri__ex__foo (t_literal__plain t_dat__str__foo))) → False := by
  vampire
