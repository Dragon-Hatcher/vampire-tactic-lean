-- SET854-2, from TPTP v9.3.1 (SET).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.36s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET854-2.p`, beside this file. This is its statement in Lean:
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
variable {t_t__a t_v__S t_v__Y t_v__x : ι}
variable {t_tc__set : ι → ι}
variable {t_c__Union t_c__Zorn__OTFin : ι → ι → ι}
variable {t_c__Main__OsubsetI____1 t_c__Zorn__OTFin____linear____lemma1____1 t_c__Zorn__Osucc : ι → ι → ι → ι}
variable {t_c__Zorn__OUnion____lemma0____1 : ι → ι → ι → ι → ι}
variable {t_c__in t_c__lessequals : ι → ι → ι → Prop}

theorem T_SET854m2 : (∀ v0 v1 v2 : ι, ((¬(t_c__lessequals v2 v1 (t_tc__set v0))) ∨ (¬(t_c__lessequals v1 v2 (t_tc__set v0))) ∨ (v1 = v2))) → (∀ v3 v4 v5 v6 : ι, ((¬(t_c__in v6 v4 v3)) ∨ (¬(t_c__lessequals v4 v5 (t_tc__set v3))) ∨ (t_c__in v6 v5 v3))) → (∀ v7 v8 v9 : ι, ((t_c__in (t_c__Main__OsubsetI____1 v8 v9 v7) v8 v7) ∨ (t_c__lessequals v8 v9 (t_tc__set v7)))) → (∀ v10 v11 v12 : ι, ((¬(t_c__in (t_c__Main__OsubsetI____1 v11 v12 v10) v12 v10)) ∨ (t_c__lessequals v11 v12 (t_tc__set v10)))) → (∀ v13 v14 v15 : ι, (t_c__lessequals v15 (t_c__Zorn__Osucc v14 v15 v13) (t_tc__set (t_tc__set v13)))) → (∀ v16 v17 v18 v19 : ι, ((¬(t_c__in v18 (t_c__Zorn__OTFin v17 v16) (t_tc__set (t_tc__set v16)))) ∨ (¬(t_c__in v19 (t_c__Zorn__OTFin v17 v16) (t_tc__set (t_tc__set v16)))) ∨ (t_c__in (t_c__Zorn__OTFin____linear____lemma1____1 v17 v18 v16) (t_c__Zorn__OTFin v17 v16) (t_tc__set (t_tc__set v16))) ∨ (t_c__lessequals v19 v18 (t_tc__set (t_tc__set v16))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v17 v18 v16) v19 (t_tc__set (t_tc__set v16))))) → (∀ v20 v21 v22 v23 : ι, ((¬(t_c__in v22 (t_c__Zorn__OTFin v21 v20) (t_tc__set (t_tc__set v20)))) ∨ (¬(t_c__in v23 (t_c__Zorn__OTFin v21 v20) (t_tc__set (t_tc__set v20)))) ∨ (t_c__lessequals v23 v22 (t_tc__set (t_tc__set v20))) ∨ (t_c__lessequals (t_c__Zorn__OTFin____linear____lemma1____1 v21 v22 v20) v22 (t_tc__set (t_tc__set v20))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v21 v22 v20) v23 (t_tc__set (t_tc__set v20))))) → (∀ v24 v25 v26 v27 : ι, ((¬(t_c__in v26 (t_c__Zorn__OTFin v25 v24) (t_tc__set (t_tc__set v24)))) ∨ (¬(t_c__in v27 (t_c__Zorn__OTFin v25 v24) (t_tc__set (t_tc__set v24)))) ∨ (¬((t_c__Zorn__OTFin____linear____lemma1____1 v25 v26 v24) = v26)) ∨ (t_c__lessequals v27 v26 (t_tc__set (t_tc__set v24))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v25 v26 v24) v27 (t_tc__set (t_tc__set v24))))) → (∀ v28 v29 v30 v31 : ι, ((¬(t_c__in v30 (t_c__Zorn__OTFin v29 v28) (t_tc__set (t_tc__set v28)))) ∨ (¬(t_c__in v31 (t_c__Zorn__OTFin v29 v28) (t_tc__set (t_tc__set v28)))) ∨ (¬(t_c__lessequals (t_c__Zorn__Osucc v29 (t_c__Zorn__OTFin____linear____lemma1____1 v29 v30 v28) v28) v30 (t_tc__set (t_tc__set v28)))) ∨ (t_c__lessequals v31 v30 (t_tc__set (t_tc__set v28))) ∨ (t_c__lessequals (t_c__Zorn__Osucc v29 v30 v28) v31 (t_tc__set (t_tc__set v28))))) → (∀ v32 v33 v34 v35 : ι, ((t_c__in (t_c__Zorn__OUnion____lemma0____1 v33 v34 v35 v32) v35 (t_tc__set v32)) ∨ (t_c__lessequals v34 (t_c__Union v35 v32) (t_tc__set v32)) ∨ (t_c__lessequals (t_c__Union v35 v32) v33 (t_tc__set v32)))) → (∀ v36 v37 v38 v39 : ι, ((¬(t_c__lessequals (t_c__Zorn__OUnion____lemma0____1 v37 v38 v39 v36) v37 (t_tc__set v36))) ∨ (t_c__lessequals v38 (t_c__Union v39 v36) (t_tc__set v36)) ∨ (t_c__lessequals (t_c__Union v39 v36) v37 (t_tc__set v36)))) → (∀ v40 v41 v42 v43 : ι, ((¬(t_c__lessequals v42 (t_c__Zorn__OUnion____lemma0____1 v41 v42 v43 v40) (t_tc__set v40))) ∨ (t_c__lessequals v42 (t_c__Union v43 v40) (t_tc__set v40)) ∨ (t_c__lessequals (t_c__Union v43 v40) v41 (t_tc__set v40)))) → (t_c__lessequals t_v__Y (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set (t_tc__set (t_tc__set t_t__a)))) → (t_c__in t_v__x (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set (t_tc__set t_t__a))) → (t_c__lessequals t_v__x (t_c__Union t_v__Y (t_tc__set t_t__a)) (t_tc__set (t_tc__set t_t__a))) → (¬(t_v__x = (t_c__Union t_v__Y (t_tc__set t_t__a)))) → (¬(t_c__lessequals (t_c__Zorn__Osucc t_v__S t_v__x t_t__a) (t_c__Union t_v__Y (t_tc__set t_t__a)) (t_tc__set (t_tc__set t_t__a)))) → (∀ v44 v45 : ι, ((t_c__lessequals (t_c__Zorn__Osucc t_v__S v45 t_t__a) v44 (t_tc__set (t_tc__set t_t__a))) ∨ (v45 = v44) ∨ (¬(t_c__lessequals v45 v44 (t_tc__set (t_tc__set t_t__a)))) ∨ (¬(t_c__in v45 (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set (t_tc__set t_t__a)))) ∨ (¬(t_c__in v44 t_v__Y (t_tc__set (t_tc__set t_t__a)))))) → False := by
  vampire
