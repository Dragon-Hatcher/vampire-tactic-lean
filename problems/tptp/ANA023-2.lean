-- ANA023-2, from TPTP v9.3.1 (ANA).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `ANA023-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__0 t_t__b t_v__x : ι}
variable {t_v__f t_v__g t_v__k : ι → ι}
variable {t_c__minus t_c__plus : ι → ι → ι → ι}
variable {t_class__OrderedGroup__Ocomm____monoid____add t_class__OrderedGroup__Opordered____ab____group____add t_class__Orderings__Olinorder t_class__Orderings__Oorder t_class__Ring____and____Field__Oordered____idom : ι → Prop}
variable {t_c__lessequals : ι → ι → ι → Prop}

theorem T_ANA023m2 : (∀ v0 v1 : ι, ((¬(t_class__OrderedGroup__Ocomm____monoid____add v0)) ∨ ((t_c__plus t_c__0 v1 v0) = v1))) → (∀ v2 v3 v4 v5 : ι, ((¬(t_class__OrderedGroup__Opordered____ab____group____add v2)) ∨ (¬(t_c__lessequals v3 (t_c__minus v5 v4 v2) v2)) ∨ (t_c__lessequals (t_c__plus v3 v4 v2) v5 v2))) → (∀ v6 v7 v8 v9 : ι, ((¬(t_class__OrderedGroup__Opordered____ab____group____add v6)) ∨ (¬(t_c__lessequals (t_c__plus v7 v8 v6) v9 v6)) ∨ (t_c__lessequals v7 (t_c__minus v9 v8 v6) v6))) → (∀ v10 v11 v12 v13 : ι, ((¬(t_class__Orderings__Oorder v10)) ∨ (¬(t_c__lessequals v12 v13 v10)) ∨ (¬(t_c__lessequals v11 v12 v10)) ∨ (t_c__lessequals v11 v13 v10))) → (t_c__lessequals t_c__0 (t_c__minus (t_v__k t_v__x) (t_v__g t_v__x) t_t__b) t_t__b) → (t_c__lessequals (t_v__k t_v__x) (t_v__f t_v__x) t_t__b) → (¬(t_c__lessequals t_c__0 (t_c__minus (t_v__f t_v__x) (t_v__g t_v__x) t_t__b) t_t__b)) → (∀ v14 : ι, ((¬(t_class__Orderings__Olinorder v14)) ∨ (t_class__Orderings__Oorder v14))) → (∀ v15 : ι, ((¬(t_class__Ring____and____Field__Oordered____idom v15)) ∨ (t_class__OrderedGroup__Ocomm____monoid____add v15))) → (∀ v16 : ι, ((¬(t_class__Ring____and____Field__Oordered____idom v16)) ∨ (t_class__Orderings__Olinorder v16))) → (∀ v17 : ι, ((¬(t_class__Ring____and____Field__Oordered____idom v17)) ∨ (t_class__OrderedGroup__Opordered____ab____group____add v17))) → (t_class__Ring____and____Field__Oordered____idom t_t__b) → False := by
  vampire
