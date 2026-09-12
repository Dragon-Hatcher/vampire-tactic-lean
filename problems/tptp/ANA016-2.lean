-- ANA016-2, from TPTP v9.3.1 (ANA).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.11s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `ANA016-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__0 t_c__1 t_t__a t_v__c t_v__x : ι}
variable {t_v__g : ι → ι}
variable {t_c__HOL__Oinverse : ι → ι → ι}
variable {t_c__times : ι → ι → ι → ι}
variable {t_class__OrderedGroup__Omonoid____mult t_class__OrderedGroup__Osemigroup____mult t_class__Ring____and____Field__Ofield t_class__Ring____and____Field__Oordered____field : ι → Prop}

theorem T_ANA016m2 : (¬(t_v__c = t_c__0)) → (¬((t_v__g t_v__x) = (t_c__times t_v__c (t_c__times (t_c__HOL__Oinverse t_v__c t_t__a) (t_v__g t_v__x) t_t__a) t_t__a))) → (t_class__Ring____and____Field__Oordered____field t_t__a) → (∀ v0 v1 : ι, ((¬(t_class__OrderedGroup__Omonoid____mult v0)) ∨ ((t_c__times t_c__1 v1 v0) = v1))) → (∀ v2 v3 v4 v5 : ι, ((¬(t_class__OrderedGroup__Osemigroup____mult v2)) ∨ ((t_c__times (t_c__times v3 v4 v2) v5 v2) = (t_c__times v3 (t_c__times v4 v5 v2) v2)))) → (∀ v6 v7 : ι, ((¬(t_class__Ring____and____Field__Ofield v6)) ∨ (v7 = t_c__0) ∨ ((t_c__times v7 (t_c__HOL__Oinverse v7 v6) v6) = t_c__1))) → (∀ v8 : ι, ((¬(t_class__Ring____and____Field__Ofield v8)) ∨ (t_class__OrderedGroup__Omonoid____mult v8))) → (∀ v9 : ι, ((¬(t_class__Ring____and____Field__Ofield v9)) ∨ (t_class__OrderedGroup__Osemigroup____mult v9))) → (∀ v10 : ι, ((¬(t_class__Ring____and____Field__Oordered____field v10)) ∨ (t_class__Ring____and____Field__Ofield v10))) → False := by
  vampire
