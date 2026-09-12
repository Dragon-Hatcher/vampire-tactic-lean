-- LAT269-2, from TPTP v9.3.1 (LAT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.11s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LAT269-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__Product____Type__OUnity t_c__Tarski__OCompleteLattice t_c__emptyset t_t__a t_tc__Product____Type__Ounit t_v__A t_v__Y t_v__cl t_v__intY1 t_v__r : ι}
variable {t_c__Tarski__OTop t_tc__Tarski__Opotype__Opotype____ext____type : ι → ι → ι}
variable {t_c__Tarski__Oinduced t_c__Tarski__Olub : ι → ι → ι → ι}
variable {t_c__Tarski__Ointerval : ι → ι → ι → ι → ι}
variable {t_c__Tarski__Opotype__Opotype____ext : ι → ι → ι → ι → ι → ι}
variable {t_c__in : ι → ι → ι → Prop}

theorem T_LAT269m2 : (¬(t_c__in (t_c__Tarski__Opotype__Opotype____ext t_v__intY1 (t_c__Tarski__Oinduced t_v__intY1 t_v__r t_t__a) t_c__Product____Type__OUnity t_t__a t_tc__Product____Type__Ounit) t_c__Tarski__OCompleteLattice (t_tc__Tarski__Opotype__Opotype____ext____type t_t__a t_tc__Product____Type__Ounit))) → (t_c__in (t_c__Tarski__OTop t_v__cl t_t__a) t_v__A t_t__a) → (∀ v0 v1 : ι, ((¬(t_c__in v1 t_v__A t_t__a)) ∨ (¬(t_c__in v0 t_v__A t_t__a)) ∨ (t_c__in (t_c__Tarski__Opotype__Opotype____ext (t_c__Tarski__Ointerval t_v__r v0 v1 t_t__a) (t_c__Tarski__Oinduced (t_c__Tarski__Ointerval t_v__r v0 v1 t_t__a) t_v__r t_t__a) t_c__Product____Type__OUnity t_t__a t_tc__Product____Type__Ounit) t_c__Tarski__OCompleteLattice (t_tc__Tarski__Opotype__Opotype____ext____type t_t__a t_tc__Product____Type__Ounit)) ∨ ((t_c__Tarski__Ointerval t_v__r v0 v1 t_t__a) = t_c__emptyset))) → (t_v__intY1 = (t_c__Tarski__Ointerval t_v__r (t_c__Tarski__Olub t_v__Y t_v__cl t_t__a) (t_c__Tarski__OTop t_v__cl t_t__a) t_t__a)) → (t_c__in (t_c__Tarski__Olub t_v__Y t_v__cl t_t__a) t_v__A t_t__a) → (∀ v2 : ι, ((¬(t_c__in v2 t_v__A t_t__a)) ∨ (¬((t_c__Tarski__Ointerval t_v__r v2 (t_c__Tarski__OTop t_v__cl t_t__a) t_t__a) = t_c__emptyset)))) → False := by
  vampire
