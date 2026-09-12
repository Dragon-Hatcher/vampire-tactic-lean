-- ANA013-2, from TPTP v9.3.1 (ANA).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.00s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `ANA013-2.p`, beside this file. This is its statement in Lean:
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
variable {t_t__b t_v__c : ι}
variable {t_v__f t_v__x : ι → ι}
variable {t_c__HOL__Oabs : ι → ι → ι}
variable {t_c__times : ι → ι → ι → ι}
variable {t_class__Orderings__Oorder t_class__Ring____and____Field__Oordered____idom : ι → Prop}
variable {t_c__lessequals : ι → ι → ι → Prop}

theorem T_ANA013m2 : (∀ v0 : ι, (¬(t_c__lessequals (t_c__times (t_c__HOL__Oabs t_v__c t_t__b) (t_c__HOL__Oabs (t_v__f (t_v__x v0)) t_t__b) t_t__b) (t_c__times v0 (t_c__HOL__Oabs (t_v__f (t_v__x v0)) t_t__b) t_t__b) t_t__b))) → (t_class__Ring____and____Field__Oordered____idom t_t__b) → (∀ v1 v2 : ι, ((¬(t_class__Orderings__Oorder v1)) ∨ (t_c__lessequals v2 v2 v1))) → (∀ v3 : ι, ((¬(t_class__Ring____and____Field__Oordered____idom v3)) ∨ (t_class__Orderings__Oorder v3))) → False := by
  vampire
