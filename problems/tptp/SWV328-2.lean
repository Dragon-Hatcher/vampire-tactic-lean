-- SWV328-2, from TPTP v9.3.1 (SWV).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV328-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__Message__Oagent__OSpy t_tc__Message__Omsg t_v__K t_v__NB t_v__X t_v__evsf : ι}
variable {t_c__Message__Oanalz t_c__Message__Omsg__OKey t_c__Message__Omsg__ONonce t_c__Message__Oparts t_c__Message__Osynth : ι → ι}
variable {t_c__Event__Oknows t_c__Message__Omsg__OCrypt : ι → ι → ι}
variable {t_c__insert t_c__union : ι → ι → ι → ι}
variable {t_c__in : ι → ι → ι → Prop}

theorem T_SWV328m2 : (t_c__in t_v__X (t_c__Message__Osynth (t_c__Message__Oanalz (t_c__Event__Oknows t_c__Message__Oagent__OSpy t_v__evsf))) t_tc__Message__Omsg) → (¬(t_c__in (t_c__Message__Omsg__OKey t_v__K) (t_c__Message__Oanalz (t_c__Event__Oknows t_c__Message__Oagent__OSpy t_v__evsf)) t_tc__Message__Omsg)) → (t_c__in (t_c__Message__Omsg__OCrypt t_v__K (t_c__Message__Omsg__ONonce t_v__NB)) (t_c__Message__Oparts (t_c__insert t_v__X (t_c__Event__Oknows t_c__Message__Oagent__OSpy t_v__evsf) t_tc__Message__Omsg)) t_tc__Message__Omsg) → (¬(t_c__in (t_c__Message__Omsg__OCrypt t_v__K (t_c__Message__Omsg__ONonce t_v__NB)) (t_c__Message__Oparts (t_c__Event__Oknows t_c__Message__Oagent__OSpy t_v__evsf)) t_tc__Message__Omsg)) → (∀ v0 v1 v2 : ι, ((¬(t_c__in (t_c__Message__Omsg__OCrypt v1 v2) (t_c__Message__Osynth v0) t_tc__Message__Omsg)) ∨ (t_c__in (t_c__Message__Omsg__OCrypt v1 v2) v0 t_tc__Message__Omsg) ∨ (t_c__in (t_c__Message__Omsg__OKey v1) v0 t_tc__Message__Omsg))) → (∀ v3 v4 v5 : ι, ((¬(t_c__in v5 (t_c__Message__Oparts (t_c__insert v4 v3 t_tc__Message__Omsg)) t_tc__Message__Omsg)) ∨ (¬(t_c__in v4 (t_c__Message__Osynth (t_c__Message__Oanalz v3)) t_tc__Message__Omsg)) ∨ (t_c__in v5 (t_c__union (t_c__Message__Osynth (t_c__Message__Oanalz v3)) (t_c__Message__Oparts v3) t_tc__Message__Omsg) t_tc__Message__Omsg))) → (∀ v6 v7 : ι, ((¬(t_c__in v7 (t_c__Message__Oanalz v6) t_tc__Message__Omsg)) ∨ (t_c__in v7 (t_c__Message__Oparts v6) t_tc__Message__Omsg))) → (∀ v8 v9 v10 v11 : ι, ((¬(t_c__in v11 (t_c__union v9 v10 v8) v8)) ∨ (t_c__in v11 v10 v8) ∨ (t_c__in v11 v9 v8))) → False := by
  vampire
