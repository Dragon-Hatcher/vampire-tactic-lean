-- LAT272-2, from TPTP v9.3.1 (LAT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LAT272-2.p`, beside this file. This is its statement in Lean:
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
variable {t_t__a t_v__L t_v__S t_v__cl t_v__r t_v__x : ι}
variable {t_tc__prod : ι → ι → ι}
variable {t_c__Pair : ι → ι → ι → ι → ι}
variable {t_c__in : ι → ι → ι → Prop}
variable {t_c__Tarski__OisLub : ι → ι → ι → ι → Prop}

theorem T_LAT272m2 : (t_c__Tarski__OisLub t_v__S t_v__cl t_v__L t_t__a) → (t_c__in t_v__x t_v__S t_t__a) → (¬(t_c__in (t_c__Pair t_v__x t_v__L t_t__a t_t__a) t_v__r (t_tc__prod t_t__a t_t__a))) → (∀ v0 v1 v2 : ι, ((¬(t_c__Tarski__OisLub v1 t_v__cl v0 t_t__a)) ∨ (¬(t_c__in v2 v1 t_t__a)) ∨ (t_c__in (t_c__Pair v2 v0 t_t__a t_t__a) t_v__r (t_tc__prod t_t__a t_t__a)))) → False := by
  vampire
