-- SWV337-2, from TPTP v9.3.1 (SWV).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV337-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__Event__Obad t_c__Message__Oagent__OServer t_c__Message__Oagent__OSpy t_c__Yahalom__Oyahalom t_tc__Event__Oevent t_tc__Message__Oagent t_tc__Message__Omsg t_v__A t_v__B t_v__K t_v__NA t_v__NB t_v__X t_v__evs4 : ι}
variable {t_c__Message__Oanalz t_c__Message__Omsg__OAgent t_c__Message__Omsg__OKey t_c__Message__Omsg__ONonce t_c__Message__Oparts t_c__Public__OshrK t_tc__List__Olist : ι → ι}
variable {t_c__Event__Oevent__OGets t_c__Event__Oknows t_c__List__Oset t_c__Message__Omsg__OCrypt t_c__Message__Omsg__OMPair : ι → ι → ι}
variable {t_c__Event__Oevent__OSays : ι → ι → ι → ι}
variable {t_c__in : ι → ι → ι → Prop}

theorem T_SWV337m2 : (t_c__in t_v__evs4 t_c__Yahalom__Oyahalom (t_tc__List__Olist t_tc__Event__Oevent)) → (t_c__in (t_c__Event__Oevent__OGets t_v__A (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK t_v__A) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent t_v__B) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OKey t_v__K) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__ONonce t_v__NA) (t_c__Message__Omsg__ONonce t_v__NB))))) t_v__X)) (t_c__List__Oset t_v__evs4 t_tc__Event__Oevent) t_tc__Event__Oevent) → (¬(t_c__in (t_c__Message__Omsg__ONonce t_v__NB) (t_c__Message__Oanalz (t_c__Event__Oknows t_c__Message__Oagent__OSpy t_v__evs4)) t_tc__Message__Omsg)) → (∀ v0 v1 v2 : ι, (¬(t_c__in (t_c__Event__Oevent__OSays t_c__Message__Oagent__OServer v0 (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK v0) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent v1) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OKey t_v__K) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__ONonce v2) (t_c__Message__Omsg__ONonce t_v__NB))))) (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK v1) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent v0) (t_c__Message__Omsg__OKey t_v__K))))) (t_c__List__Oset t_v__evs4 t_tc__Event__Oevent) t_tc__Event__Oevent))) → (∀ v3 v4 v5 : ι, ((¬(t_c__in (t_c__Message__Omsg__OMPair v4 v5) (t_c__Message__Oanalz v3) t_tc__Message__Omsg)) ∨ (t_c__in v5 (t_c__Message__Oanalz v3) t_tc__Message__Omsg))) → (∀ v6 v7 v8 : ι, ((¬(t_c__in (t_c__Message__Omsg__OMPair v7 v8) (t_c__Message__Oanalz v6) t_tc__Message__Omsg)) ∨ (t_c__in v7 (t_c__Message__Oanalz v6) t_tc__Message__Omsg))) → (∀ v9 v10 : ι, ((¬(t_c__in v10 (t_c__Message__Oanalz v9) t_tc__Message__Omsg)) ∨ (t_c__in v10 (t_c__Message__Oparts v9) t_tc__Message__Omsg))) → (∀ v11 v12 v13 : ι, ((¬(t_c__in v11 t_c__Event__Obad t_tc__Message__Oagent)) ∨ (¬(t_c__in (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK v11) v12) (t_c__Message__Oanalz (t_c__Event__Oknows t_c__Message__Oagent__OSpy v13)) t_tc__Message__Omsg)) ∨ (t_c__in v12 (t_c__Message__Oanalz (t_c__Event__Oknows t_c__Message__Oagent__OSpy v13)) t_tc__Message__Omsg))) → (∀ v14 v15 v16 v17 v18 v19 : ι, ((¬(t_c__in v17 t_c__Yahalom__Oyahalom (t_tc__List__Olist t_tc__Event__Oevent))) ∨ (¬(t_c__in (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK v14) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent v15) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OKey v16) (t_c__Message__Omsg__OMPair v18 v19)))) (t_c__Message__Oparts (t_c__Event__Oknows t_c__Message__Oagent__OSpy v17)) t_tc__Message__Omsg)) ∨ (t_c__in v14 t_c__Event__Obad t_tc__Message__Oagent) ∨ (t_c__in (t_c__Event__Oevent__OSays t_c__Message__Oagent__OServer v14 (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK v14) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent v15) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OKey v16) (t_c__Message__Omsg__OMPair v18 v19)))) (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK v15) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent v14) (t_c__Message__Omsg__OKey v16))))) (t_c__List__Oset v17 t_tc__Event__Oevent) t_tc__Event__Oevent))) → (∀ v20 v21 v22 : ι, ((¬(t_c__in v22 t_c__Yahalom__Oyahalom (t_tc__List__Olist t_tc__Event__Oevent))) ∨ (¬(t_c__in (t_c__Event__Oevent__OGets v20 v21) (t_c__List__Oset v22 t_tc__Event__Oevent) t_tc__Event__Oevent)) ∨ (t_c__in v21 (t_c__Message__Oanalz (t_c__Event__Oknows t_c__Message__Oagent__OSpy v22)) t_tc__Message__Omsg))) → False := by
  vampire
