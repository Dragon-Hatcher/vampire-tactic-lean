-- SWV295-2, from TPTP v9.3.1 (SWV).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV295-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__Message__Oagent__OSpy t_tc__Message__Omsg t_v__Aa t_v__K t_v__NA t_v__NAa t_v__evs1 : ι}
variable {t_c__Event__Oused t_c__Message__Omsg__OKey t_c__Message__Omsg__ONonce t_c__Message__Oparts t_c__Public__OshrK : ι → ι}
variable {t_c__Event__Oknows t_c__Message__Omsg__OCrypt t_c__Message__Omsg__OMPair : ι → ι → ι}
variable {t_c__in : ι → ι → ι → Prop}

theorem T_SWV295m2 : (t_c__in (t_c__Message__Omsg__OCrypt (t_c__Public__OshrK t_v__Aa) (t_c__Message__Omsg__OMPair (t_c__Message__Omsg__ONonce t_v__NAa) (t_c__Message__Omsg__OKey t_v__K))) (t_c__Message__Oparts (t_c__Event__Oknows t_c__Message__Oagent__OSpy t_v__evs1)) t_tc__Message__Omsg) → (¬(t_c__in (t_c__Message__Omsg__ONonce t_v__NAa) (t_c__Event__Oused t_v__evs1) t_tc__Message__Omsg)) → (t_v__NA = (t_c__Message__Omsg__ONonce t_v__NAa)) → (∀ v0 v1 : ι, ((¬(t_c__in v0 (t_c__Message__Oparts (t_c__Event__Oknows t_c__Message__Oagent__OSpy v1)) t_tc__Message__Omsg)) ∨ (t_c__in v0 (t_c__Event__Oused v1) t_tc__Message__Omsg))) → (∀ v2 v3 v4 : ι, ((¬(t_c__in (t_c__Message__Omsg__OMPair v3 v4) (t_c__Message__Oparts v2) t_tc__Message__Omsg)) ∨ (t_c__in v3 (t_c__Message__Oparts v2) t_tc__Message__Omsg))) → (∀ v5 v6 v7 : ι, ((¬(t_c__in (t_c__Message__Omsg__OCrypt v6 v7) (t_c__Message__Oparts v5) t_tc__Message__Omsg)) ∨ (t_c__in v7 (t_c__Message__Oparts v5) t_tc__Message__Omsg))) → False := by
  vampire
