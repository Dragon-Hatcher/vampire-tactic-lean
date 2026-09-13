-- ANA020-2, from TPTP v9.3.1 (ANA).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `ANA020-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__0 t_t__a t_v__c t_v__x : ι}
variable {t_v__f t_v__h : ι → ι}
variable {t_c__HOL__Oabs : ι → ι → ι}
variable {t_c__times : ι → ι → ι → ι}
variable {t_class__OrderedGroup__Olordered____ab____group____abs t_class__Orderings__Oorder t_class__Ring____and____Field__Oordered____idom t_class__Ring____and____Field__Opordered____cancel____semiring : ι → Prop}
variable {t_c__less t_c__lessequals : ι → ι → ι → Prop}

theorem T_ANA020m2 : ((t_v__f t_c__0) = t_c__0) → (t_c__less t_c__0 t_v__c t_t__a) → (t_v__x = t_c__0) → (¬(t_c__lessequals (t_c__HOL__Oabs (t_v__f t_v__x) t_t__a) (t_c__times t_v__c (t_c__HOL__Oabs (t_v__h t_v__x) t_t__a) t_t__a) t_t__a)) → (t_class__Ring____and____Field__Oordered____idom t_t__a) → (∀ v0 : ι, ((¬(t_class__OrderedGroup__Olordered____ab____group____abs v0)) ∨ ((t_c__HOL__Oabs t_c__0 v0) = t_c__0))) → (∀ v1 v2 : ι, ((¬(t_class__OrderedGroup__Olordered____ab____group____abs v1)) ∨ (t_c__lessequals t_c__0 (t_c__HOL__Oabs v2 v1) v1))) → (∀ v3 v4 v5 : ι, ((¬(t_class__Orderings__Oorder v3)) ∨ (¬(t_c__less v4 v5 v3)) ∨ (t_c__lessequals v4 v5 v3))) → (∀ v6 v7 v8 : ι, ((¬(t_class__Ring____and____Field__Opordered____cancel____semiring v6)) ∨ (¬(t_c__lessequals t_c__0 v8 v6)) ∨ (¬(t_c__lessequals t_c__0 v7 v6)) ∨ (t_c__lessequals t_c__0 (t_c__times v7 v8 v6) v6))) → (∀ v9 : ι, ((¬(t_class__Ring____and____Field__Oordered____idom v9)) ∨ (t_class__Ring____and____Field__Opordered____cancel____semiring v9))) → (∀ v10 : ι, ((¬(t_class__Ring____and____Field__Oordered____idom v10)) ∨ (t_class__Orderings__Oorder v10))) → (∀ v11 : ι, ((¬(t_class__Ring____and____Field__Oordered____idom v11)) ∨ (t_class__OrderedGroup__Olordered____ab____group____abs v11))) → False := by
  vampire
