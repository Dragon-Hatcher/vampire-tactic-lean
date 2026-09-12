-- SET862-2, from TPTP v9.3.1 (SET).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.02s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET862-2.p`, beside this file. This is its statement in Lean:
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
variable {t_c__emptyset t_t__a t_v__S t_v__c t_v__y : ι}
variable {t_tc__set t_v__x : ι → ι}
variable {t_c__Zorn__Ochain t_c__Zorn__Omaxchain : ι → ι → ι}
variable {t_c__Main__OsubsetI____1 t_c__Zorn__Ochain____extend____1 t_c__Zorn__Omaxchain____super____lemma____1 t_c__insert t_c__union : ι → ι → ι → ι}
variable {t_c__in t_c__lessequals : ι → ι → ι → Prop}

theorem T_SET862m2 : (∀ v0 v1 v2 : ι, ((¬(t_c__lessequals v2 v1 (t_tc__set v0))) ∨ (¬(t_c__lessequals v1 v2 (t_tc__set v0))) ∨ (v1 = v2))) → (∀ v3 v4 v5 v6 : ι, ((¬(t_c__in v6 v4 v3)) ∨ (¬(t_c__lessequals v4 v5 (t_tc__set v3))) ∨ (t_c__in v6 v5 v3))) → (∀ v7 v8 v9 : ι, ((t_c__in (t_c__Main__OsubsetI____1 v8 v9 v7) v8 v7) ∨ (t_c__lessequals v8 v9 (t_tc__set v7)))) → (∀ v10 v11 v12 : ι, ((¬(t_c__in (t_c__Main__OsubsetI____1 v11 v12 v10) v12 v10)) ∨ (t_c__lessequals v11 v12 (t_tc__set v10)))) → (∀ v13 v14 v15 v16 : ι, ((¬(t_c__in v16 v14 (t_tc__set v13))) ∨ (¬(t_c__in v15 (t_c__Zorn__Ochain v14 v13) (t_tc__set (t_tc__set v13)))) ∨ (t_c__in (t_c__Zorn__Ochain____extend____1 v15 v16 v13) v15 (t_tc__set v13)) ∨ (t_c__in (t_c__union (t_c__insert v16 t_c__emptyset (t_tc__set v13)) v15 (t_tc__set v13)) (t_c__Zorn__Ochain v14 v13) (t_tc__set (t_tc__set v13))))) → (∀ v17 v18 v19 v20 : ι, ((¬(t_c__in v20 v18 (t_tc__set v17))) ∨ (¬(t_c__in v19 (t_c__Zorn__Ochain v18 v17) (t_tc__set (t_tc__set v17)))) ∨ (¬(t_c__lessequals (t_c__Zorn__Ochain____extend____1 v19 v20 v17) v20 (t_tc__set v17))) ∨ (t_c__in (t_c__union (t_c__insert v20 t_c__emptyset (t_tc__set v17)) v19 (t_tc__set v17)) (t_c__Zorn__Ochain v18 v17) (t_tc__set (t_tc__set v17))))) → (∀ v21 v22 v23 v24 v25 v26 : ι, ((¬(t_c__in v26 v24 v21)) ∨ (¬(t_c__in v23 (t_c__Zorn__Omaxchain v22 v21) (t_tc__set (t_tc__set v21)))) ∨ (¬(t_c__in (t_c__union (t_c__insert v24 t_c__emptyset (t_tc__set v21)) v23 (t_tc__set v21)) (t_c__Zorn__Ochain v22 v21) (t_tc__set (t_tc__set v21)))) ∨ (t_c__in v26 v25 v21) ∨ (t_c__in (t_c__Zorn__Omaxchain____super____lemma____1 v23 v25 v21) v23 (t_tc__set v21)))) → (∀ v27 v28 v29 v30 v31 v32 : ι, ((¬(t_c__in v32 v30 v27)) ∨ (¬(t_c__in v29 (t_c__Zorn__Omaxchain v28 v27) (t_tc__set (t_tc__set v27)))) ∨ (¬(t_c__in (t_c__union (t_c__insert v30 t_c__emptyset (t_tc__set v27)) v29 (t_tc__set v27)) (t_c__Zorn__Ochain v28 v27) (t_tc__set (t_tc__set v27)))) ∨ (¬(t_c__lessequals (t_c__Zorn__Omaxchain____super____lemma____1 v29 v31 v27) v31 (t_tc__set v27))) ∨ (t_c__in v32 v31 v27))) → (t_c__in t_v__c (t_c__Zorn__Omaxchain t_v__S t_t__a) (t_tc__set (t_tc__set t_t__a))) → (t_c__in t_v__c (t_c__Zorn__Ochain t_v__S t_t__a) (t_tc__set (t_tc__set t_t__a))) → (t_c__in t_v__y t_v__S (t_tc__set t_t__a)) → (∀ v33 : ι, ((t_c__lessequals v33 t_v__y (t_tc__set t_t__a)) ∨ (¬(t_c__in v33 t_v__c (t_tc__set t_t__a))))) → (∀ v34 : ι, ((t_c__in (t_v__x v34) t_v__S (t_tc__set t_t__a)) ∨ (¬(t_c__in v34 t_v__S (t_tc__set t_t__a))))) → (∀ v35 : ι, ((t_c__lessequals v35 (t_v__x v35) (t_tc__set t_t__a)) ∨ (¬(t_c__in v35 t_v__S (t_tc__set t_t__a))))) → (∀ v36 : ι, ((¬(v36 = (t_v__x v36))) ∨ (¬(t_c__in v36 t_v__S (t_tc__set t_t__a))))) → False := by
  vampire
