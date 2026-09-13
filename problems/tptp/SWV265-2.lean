-- SWV265-2, from TPTP v9.3.1 (SWV).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV265-2.p`, beside this file. This is its statement in Lean:
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
variable {t_tc__Message__Omsg t_v__H t_v__X t_v__Y : ι}
variable {t_c__Message__Oparts : ι → ι}
variable {t_c__Message__Omsg__OMPair : ι → ι → ι}
variable {t_c__in : ι → ι → ι → Prop}

theorem T_SWV265m2 : (t_c__in (t_c__Message__Omsg__OMPair t_v__X t_v__Y) (t_c__Message__Oparts t_v__H) t_tc__Message__Omsg) → (¬(t_c__in t_v__Y (t_c__Message__Oparts t_v__H) t_tc__Message__Omsg)) → (∀ v0 v1 v2 : ι, ((¬(t_c__in (t_c__Message__Omsg__OMPair v1 v2) (t_c__Message__Oparts v0) t_tc__Message__Omsg)) ∨ (t_c__in v2 (t_c__Message__Oparts v0) t_tc__Message__Omsg))) → False := by
  vampire
