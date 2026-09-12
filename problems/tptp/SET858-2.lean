-- SET858-2, from TPTP v9.3.1 (SET).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET858-2.p`, beside this file. This is its statement in Lean:
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
variable {t_t__a t_v__S t_v__m t_v__n : ι}
variable {t_tc__set : ι → ι}
variable {t_c__Zorn__OTFin : ι → ι → ι}
variable {t_c__Zorn__OTFin____linear____lemma1____1 t_c__Zorn__Osucc : ι → ι → ι → ι}
variable {t_c__in t_c__lessequals : ι → ι → ι → Prop}

theorem T_SET858m2 : (t_c__in t_v__m (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set (t_tc__set t_t__a))) → (t_c__in t_v__n (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set (t_tc__set t_t__a))) → (¬(t_c__lessequals t_v__n t_v__m (t_tc__set (t_tc__set t_t__a)))) → (¬(t_c__lessequals t_v__m t_v__n (t_tc__set (t_tc__set t_t__a)))) → (∀ v0 v1 v2 v3 : ι, ((¬(t_c__lessequals v2 v3 (t_tc__set v0))) ∨ (¬(t_c__lessequals v1 v2 (t_tc__set v0))) ∨ (t_c__lessequals v1 v3 (t_tc__set v0)))) → (∀ v4 v5 v6 : ι, (t_c__lessequals v6 (t_c__Zorn__Osucc v5 v6 v4) (t_tc__set (t_tc__set v4)))) → (∀ v7 v8 v9 v10 : ι, ((¬(t_c__in v9 (t_c__Zorn__OTFin v8 v7) (t_tc__set (t_tc__set v7)))) ∨ (¬(t_c__in v10 (t_c__Zorn__OTFin v8 v7) (t_tc__set (t_tc__set v7)))) ∨ (t_c__in (t_c__Zorn__OTFin____linear____lemma1____1 v8 v9 v7) (t_c__Zorn__OTFin v8 v7) (t_tc__set (t_tc__set v7))) ∨ (t_c__lessequals v10 v9 (t_tc__set (t_tc__set v7))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v8 v9 v7) v10 (t_tc__set (t_tc__set v7))))) → (∀ v11 v12 v13 v14 : ι, ((¬(t_c__in v13 (t_c__Zorn__OTFin v12 v11) (t_tc__set (t_tc__set v11)))) ∨ (¬(t_c__in v14 (t_c__Zorn__OTFin v12 v11) (t_tc__set (t_tc__set v11)))) ∨ (t_c__lessequals v14 v13 (t_tc__set (t_tc__set v11))) ∨ (t_c__lessequals (t_c__Zorn__OTFin____linear____lemma1____1 v12 v13 v11) v13 (t_tc__set (t_tc__set v11))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v12 v13 v11) v14 (t_tc__set (t_tc__set v11))))) → (∀ v15 v16 v17 v18 : ι, ((¬(t_c__in v17 (t_c__Zorn__OTFin v16 v15) (t_tc__set (t_tc__set v15)))) ∨ (¬(t_c__in v18 (t_c__Zorn__OTFin v16 v15) (t_tc__set (t_tc__set v15)))) ∨ (¬((t_c__Zorn__OTFin____linear____lemma1____1 v16 v17 v15) = v17)) ∨ (t_c__lessequals v18 v17 (t_tc__set (t_tc__set v15))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v16 v17 v15) v18 (t_tc__set (t_tc__set v15))))) → (∀ v19 v20 v21 v22 : ι, ((¬(t_c__in v21 (t_c__Zorn__OTFin v20 v19) (t_tc__set (t_tc__set v19)))) ∨ (¬(t_c__in v22 (t_c__Zorn__OTFin v20 v19) (t_tc__set (t_tc__set v19)))) ∨ (¬(t_c__lessequals (t_c__Zorn__Osucc v20 (t_c__Zorn__OTFin____linear____lemma1____1 v20 v21 v19) v19) v21 (t_tc__set (t_tc__set v19)))) ∨ (t_c__lessequals v22 v21 (t_tc__set (t_tc__set v19))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v20 v21 v19) v22 (t_tc__set (t_tc__set v19))))) → (∀ v23 v24 v25 v26 : ι, ((¬(t_c__in v25 (t_c__Zorn__OTFin v24 v23) (t_tc__set (t_tc__set v23)))) ∨ (¬(t_c__in v26 (t_c__Zorn__OTFin v24 v23) (t_tc__set (t_tc__set v23)))) ∨ (¬(t_c__lessequals v25 v26 (t_tc__set (t_tc__set v23)))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v24 v25 v23) v26 (t_tc__set (t_tc__set v23))) ∨ (v25 = v26))) → False := by
  vampire
