-- LAT260-2, from TPTP v9.3.1 (LAT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LAT260-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__Tarski__OPartialOrder t_t__a t_tc__Product____Type__Ounit t_v__cl : ι}
variable {t_c__Tarski__Odual t_tc__Tarski__Opotype__Opotype____ext____type : ι → ι → ι}
variable {t_c__in : ι → ι → ι → Prop}

theorem T_LAT260m2 : (¬(t_c__in (t_c__Tarski__Odual t_v__cl t_t__a) t_c__Tarski__OPartialOrder (t_tc__Tarski__Opotype__Opotype____ext____type t_t__a t_tc__Product____Type__Ounit))) → (t_c__in (t_c__Tarski__Odual t_v__cl t_t__a) t_c__Tarski__OPartialOrder (t_tc__Tarski__Opotype__Opotype____ext____type t_t__a t_tc__Product____Type__Ounit)) → False := by
  vampire
