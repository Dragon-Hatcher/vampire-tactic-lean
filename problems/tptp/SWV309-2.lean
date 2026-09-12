-- SWV309-2, from TPTP v9.3.1 (SWV).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV309-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__Message__Oagent__OServer t_tc__Event__Oevent t_v__A t_v__B t_v__K t_v__NA t_v__NB t_v__evsf t_v__x : ι}
variable {t_c__Message__Omsg__OAgent t_c__Message__Omsg__OKey t_c__Public__OshrK : ι → ι}
variable {t_c__List__Oset t_c__Message__Omsg__OCrypt t_c__Message__Omsg__OMPair : ι → ι → ι}
variable {t_c__Event__Oevent__OSays : ι → ι → ι → ι}
variable {t_c__in : ι → ι → ι → Prop}

theorem T_SWV309m2 : (t_c__in (t_c__Event__Oevent__OSays t_c__Message__Oagent__OServer t_v__B (t_c__Message__Omsg__OMPair t_v__NA (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK t_v__A) (t_c__Message__Omsg__OMPair t_v__NA (t_c__Message__Omsg__OKey t_v__K))) (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK t_v__B) (t_c__Message__Omsg__OMPair t_v__NB (t_c__Message__Omsg__OKey t_v__K)))))) (t_c__List__Oset t_v__evsf t_tc__Event__Oevent) t_tc__Event__Oevent) → (∀ v0 : ι, (¬(t_c__in (t_c__Event__Oevent__OSays t_v__B t_c__Message__Oagent__OServer (t_c__Message__Omsg__OMPair t_v__NA (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent t_v__A) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent t_v__B) (t_c__Message__Omsg__OMPair v0 (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK t_v__B) (t_c__Message__Omsg__OMPair t_v__NA (t_c__Message__Omsg__OMPair t_v__NB (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent t_v__A) (t_c__Message__Omsg__OAgent t_v__B)))))))))) (t_c__List__Oset t_v__evsf t_tc__Event__Oevent) t_tc__Event__Oevent))) → ((t_c__in (t_c__Event__Oevent__OSays t_v__B t_c__Message__Oagent__OServer (t_c__Message__Omsg__OMPair t_v__NA (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent t_v__A) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent t_v__B) (t_c__Message__Omsg__OMPair t_v__x (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK t_v__B) (t_c__Message__Omsg__OMPair t_v__NA (t_c__Message__Omsg__OMPair t_v__NB (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OAgent t_v__A) (t_c__Message__Omsg__OAgent t_v__B)))))))))) (t_c__List__Oset t_v__evsf t_tc__Event__Oevent) t_tc__Event__Oevent) ∨ (¬(t_c__in (t_c__Event__Oevent__OSays t_c__Message__Oagent__OServer t_v__B (t_c__Message__Omsg__OMPair t_v__NA (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK t_v__A) (t_c__Message__Omsg__OMPair t_v__NA (t_c__Message__Omsg__OKey t_v__K))) (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK t_v__B) (t_c__Message__Omsg__OMPair t_v__NB (t_c__Message__Omsg__OKey t_v__K)))))) (t_c__List__Oset t_v__evsf t_tc__Event__Oevent) t_tc__Event__Oevent))) → False := by
  vampire
