-- SET857-2, from TPTP v9.3.1 (SET).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.23s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET857-2.p`, beside this file. This is its statement in Lean:
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
variable {t_t__a t_v__S t_v__Y t_v__n t_v__x : ι}
variable {t_tc__set : ι → ι}
variable {t_c__Zorn__OTFin : ι → ι → ι}
variable {t_c__Main__OsubsetI____1 t_c__Zorn__OTFin____linear____lemma1____1 t_c__Zorn__Osucc : ι → ι → ι → ι}
variable {t_c__in t_c__lessequals : ι → ι → ι → Prop}

theorem T_SET857m2 : (∀ v0 v1 v2 v3 : ι, ((¬(t_c__in v3 v1 v0)) ∨ (¬(t_c__lessequals v1 v2 (t_tc__set v0))) ∨ (t_c__in v3 v2 v0))) → (∀ v4 v5 v6 : ι, ((t_c__in (t_c__Main__OsubsetI____1 v5 v6 v4) v5 v4) ∨ (t_c__lessequals v5 v6 (t_tc__set v4)))) → (∀ v7 v8 v9 : ι, ((¬(t_c__in (t_c__Main__OsubsetI____1 v8 v9 v7) v9 v7)) ∨ (t_c__lessequals v8 v9 (t_tc__set v7)))) → (∀ v10 v11 v12 : ι, (t_c__lessequals v12 (t_c__Zorn__Osucc v11 v12 v10) (t_tc__set (t_tc__set v10)))) → (∀ v13 v14 v15 v16 : ι, ((¬(t_c__in v15 (t_c__Zorn__OTFin v14 v13) (t_tc__set (t_tc__set v13)))) ∨ (¬(t_c__in v16 (t_c__Zorn__OTFin v14 v13) (t_tc__set (t_tc__set v13)))) ∨ (t_c__in (t_c__Zorn__OTFin____linear____lemma1____1 v14 v15 v13) (t_c__Zorn__OTFin v14 v13) (t_tc__set (t_tc__set v13))) ∨ (t_c__lessequals v16 v15 (t_tc__set (t_tc__set v13))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v14 v15 v13) v16 (t_tc__set (t_tc__set v13))))) → (∀ v17 v18 v19 v20 : ι, ((¬(t_c__in v19 (t_c__Zorn__OTFin v18 v17) (t_tc__set (t_tc__set v17)))) ∨ (¬(t_c__in v20 (t_c__Zorn__OTFin v18 v17) (t_tc__set (t_tc__set v17)))) ∨ (t_c__lessequals v20 v19 (t_tc__set (t_tc__set v17))) ∨ (t_c__lessequals (t_c__Zorn__OTFin____linear____lemma1____1 v18 v19 v17) v19 (t_tc__set (t_tc__set v17))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v18 v19 v17) v20 (t_tc__set (t_tc__set v17))))) → (∀ v21 v22 v23 v24 : ι, ((¬(t_c__in v23 (t_c__Zorn__OTFin v22 v21) (t_tc__set (t_tc__set v21)))) ∨ (¬(t_c__in v24 (t_c__Zorn__OTFin v22 v21) (t_tc__set (t_tc__set v21)))) ∨ (¬((t_c__Zorn__OTFin____linear____lemma1____1 v22 v23 v21) = v23)) ∨ (t_c__lessequals v24 v23 (t_tc__set (t_tc__set v21))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v22 v23 v21) v24 (t_tc__set (t_tc__set v21))))) → (∀ v25 v26 v27 v28 : ι, ((¬(t_c__in v27 (t_c__Zorn__OTFin v26 v25) (t_tc__set (t_tc__set v25)))) ∨ (¬(t_c__in v28 (t_c__Zorn__OTFin v26 v25) (t_tc__set (t_tc__set v25)))) ∨ (¬(t_c__lessequals (t_c__Zorn__Osucc v26 (t_c__Zorn__OTFin____linear____lemma1____1 v26 v27 v25) v25) v27 (t_tc__set (t_tc__set v25)))) ∨ (t_c__lessequals v28 v27 (t_tc__set (t_tc__set v25))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v26 v27 v25) v28 (t_tc__set (t_tc__set v25))))) → (t_c__lessequals t_v__Y (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set (t_tc__set (t_tc__set t_t__a)))) → (t_c__in t_v__n (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set (t_tc__set t_t__a))) → (t_c__in t_v__x t_v__Y (t_tc__set (t_tc__set t_t__a))) → (¬(t_c__lessequals t_v__x t_v__n (t_tc__set (t_tc__set t_t__a)))) → (¬(t_c__lessequals (t_c__Zorn__Osucc t_v__S t_v__n t_t__a) t_v__x (t_tc__set (t_tc__set t_t__a)))) → (∀ v29 v30 : ι, ((t_c__lessequals (t_c__Zorn__Osucc t_v__S v30 t_t__a) v29 (t_tc__set (t_tc__set t_t__a))) ∨ (v30 = v29) ∨ (¬(t_c__lessequals v30 v29 (t_tc__set (t_tc__set t_t__a)))) ∨ (¬(t_c__in v30 (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set (t_tc__set t_t__a)))) ∨ (¬(t_c__in v29 t_v__Y (t_tc__set (t_tc__set t_t__a)))))) → False := by
  vampire
