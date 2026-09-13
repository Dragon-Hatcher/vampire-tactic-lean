-- SWV357-2, from TPTP v9.3.1 (SWV).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV357-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__Message__Oagent__OSpy t_c__Yahalom__Oyahalom t_tc__Event__Oevent t_tc__Message__Omsg t_v__Aa t_v__Ba t_v__NB t_v__evs2 : ι}
variable {t_c__Message__Oanalz t_c__Message__Omsg__OAgent t_c__Message__Omsg__ONonce t_tc__List__Olist : ι → ι}
variable {t_c__Event__Oevent__OGets t_c__Event__Oknows t_c__List__Oset t_c__Message__Omsg__OMPair : ι → ι → ι}
variable {t_c__in : ι → ι → ι → Prop}

theorem T_SWV357m2 : (t_c__in t_v__evs2 t_c__Yahalom__Oyahalom (t_tc__List__Olist t_tc__Event__Oevent)) → (t_c__in (t_c__Event__Oevent__OGets t_v__Ba (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent t_v__Aa) (t_c__Message__Omsg__ONonce t_v__NB))) (t_c__List__Oset t_v__evs2 t_tc__Event__Oevent) t_tc__Event__Oevent) → (¬(t_c__in (t_c__Message__Omsg__ONonce t_v__NB) (t_c__Message__Oanalz (t_c__Event__Oknows t_c__Message__Oagent__OSpy t_v__evs2)) t_tc__Message__Omsg)) → (∀ v0 v1 v2 : ι, ((¬(t_c__in (t_c__Message__Omsg__OMPair v1 v2) (t_c__Message__Oanalz v0) t_tc__Message__Omsg)) ∨ (t_c__in v2 (t_c__Message__Oanalz v0) t_tc__Message__Omsg))) → (∀ v3 v4 v5 : ι, ((¬(t_c__in v5 t_c__Yahalom__Oyahalom (t_tc__List__Olist t_tc__Event__Oevent))) ∨ (¬(t_c__in (t_c__Event__Oevent__OGets v3 v4) (t_c__List__Oset v5 t_tc__Event__Oevent) t_tc__Event__Oevent)) ∨ (t_c__in v4 (t_c__Message__Oanalz (t_c__Event__Oknows t_c__Message__Oagent__OSpy v5)) t_tc__Message__Omsg))) → False := by
  vampire
