-- LAT266-2, from TPTP v9.3.1 (LAT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LAT266-2.p`, beside this file. This is its statement in Lean:
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
variable {t_t__a t_tc__Product____Type__Ounit t_v__A t_v__S t_v__cl : ι}
variable {t_tc__set : ι → ι}
variable {t_c__Tarski__Odual : ι → ι → ι}
variable {t_c__Tarski__Opotype__Opset : ι → ι → ι → ι}
variable {t_c__lessequals : ι → ι → ι → Prop}

theorem T_LAT266m2 : (t_c__lessequals t_v__S (t_c__Tarski__Opotype__Opset t_v__cl t_t__a t_tc__Product____Type__Ounit) (t_tc__set t_t__a)) → (¬(t_c__lessequals t_v__S (t_c__Tarski__Opotype__Opset (t_c__Tarski__Odual t_v__cl t_t__a) t_t__a t_tc__Product____Type__Ounit) (t_tc__set t_t__a))) → (t_v__A = (t_c__Tarski__Opotype__Opset t_v__cl t_t__a t_tc__Product____Type__Ounit)) → (∀ v0 v1 : ι, ((t_c__Tarski__Opotype__Opset (t_c__Tarski__Odual v1 v0) v0 t_tc__Product____Type__Ounit) = (t_c__Tarski__Opotype__Opset v1 v0 t_tc__Product____Type__Ounit))) → False := by
  vampire
