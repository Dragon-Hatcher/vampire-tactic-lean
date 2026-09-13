-- NUM835+2, from TPTP v9.3.1 (NUM).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.22s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NUM835+2.p`, beside this file. This is its statement in Lean:
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
variable {t_v1 t_vd151 t_vd165 t_vskolem3 : ι}
variable {t_vskolem2 t_vsucc : ι → ι}
variable {t_vplus : ι → ι → ι}
variable {t_m : ι → Prop}

theorem T_NUM835p2 : (∀ v0 : ι, ((t_vd165 = (t_vplus t_vd151 v0)) → (t_m (t_vsucc t_vd165)))) → (∀ v1 : ι, ((t_vd165 = (t_vplus t_vd151 v1)) → ((t_vsucc (t_vplus t_vd151 v1)) = (t_vplus t_vd151 (t_vsucc v1))))) → (∀ v2 : ι, ((t_vd165 = (t_vplus t_vd151 v2)) → ((t_vsucc t_vd165) = (t_vsucc (t_vplus t_vd151 v2))))) → (∀ v3 : ι, ((t_vd151 = (t_vplus t_vd165 v3)) → ((¬(v3 = t_v1)) → (t_m (t_vsucc t_vd165))))) → (∀ v4 : ι, ((t_vd151 = (t_vplus t_vd165 v4)) → ((¬(v4 = t_v1)) → ((t_vplus (t_vplus t_vd165 t_v1) t_vskolem3) = (t_vplus (t_vsucc t_vd165) t_vskolem3))))) → (∀ v5 : ι, ((t_vd151 = (t_vplus t_vd165 v5)) → ((¬(v5 = t_v1)) → ((t_vplus t_vd165 (t_vplus t_v1 t_vskolem3)) = (t_vplus (t_vplus t_vd165 t_v1) t_vskolem3))))) → (∀ v6 : ι, ((t_vd151 = (t_vplus t_vd165 v6)) → ((¬(v6 = t_v1)) → (t_vd151 = (t_vplus t_vd165 (t_vplus t_v1 t_vskolem3)))))) → (∀ v7 : ι, ((t_vd151 = (t_vplus t_vd165 v7)) → ((¬(v7 = t_v1)) → ((t_vsucc t_vskolem3) = (t_vplus t_v1 t_vskolem3))))) → (∀ v8 : ι, ((t_vd151 = (t_vplus t_vd165 v8)) → ((¬(v8 = t_v1)) → (v8 = (t_vsucc t_vskolem3))))) → (∀ v9 : ι, ((t_vd151 = (t_vplus t_vd165 v9)) → ((v9 = t_v1) → (t_m (t_vsucc t_vd165))))) → (∀ v10 : ι, ((t_vd151 = (t_vplus t_vd165 v10)) → ((v10 = t_v1) → ((t_vplus t_vd165 t_v1) = (t_vsucc t_vd165))))) → (∀ v11 : ι, ((t_vd151 = (t_vplus t_vd165 v11)) → ((v11 = t_v1) → (t_vd151 = (t_vplus t_vd165 t_v1))))) → ((t_vd151 = t_vd165) → (t_m (t_vsucc t_vd165))) → ((t_vd151 = t_vd165) → ((t_vplus t_vd165 t_v1) = (t_vplus t_vd151 t_v1))) → ((t_vd151 = t_vd165) → ((t_vsucc t_vd165) = (t_vplus t_vd165 t_v1))) → (∀ v12 v13 : ι, ((t_m v13) ↔ ((v12 = v13) ∨ (∃ v14 : ι, (v12 = (t_vplus v13 v14))) ∨ (∃ v15 : ι, (v13 = (t_vplus v12 v15)))))) → (∀ v16 v17 : ι, ((t_vplus v17 v16) = (t_vplus v16 v17))) → (∀ v18 v19 : ι, ((t_vplus (t_vsucc v18) v19) = (t_vsucc (t_vplus v18 v19)))) → (∀ v20 : ι, ((t_vplus t_v1 v20) = (t_vsucc v20))) → (∀ v21 v22 v23 : ι, ((t_vplus (t_vplus v21 v22) v23) = (t_vplus v21 (t_vplus v22 v23)))) → (∀ v24 v25 : ι, (((t_vplus v24 (t_vsucc v25)) = (t_vsucc (t_vplus v24 v25))) ∧ ((t_vplus v24 t_v1) = (t_vsucc v24)))) → (∀ v26 : ι, ((¬(v26 = t_v1)) → (v26 = (t_vsucc (t_vskolem2 v26))))) → (∀ v27 : ι, (¬((t_vsucc v27) = v27))) → ((∃ v28 : ι, (t_vd165 = (t_vplus t_vd151 v28))) ∨ (∃ v29 : ι, (t_vd151 = (t_vplus t_vd165 v29))) ∨ (t_vd151 = t_vd165)) := by
  vampire
