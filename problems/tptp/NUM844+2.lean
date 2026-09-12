-- NUM844+2, from TPTP v9.3.1 (NUM).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NUM844+2.p`, beside this file. This is its statement in Lean:
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
variable {t_v1 t_vd411 t_vd413 : ι}
variable {t_vskolem2 t_vsucc : ι → ι}
variable {t_vmul t_vplus : ι → ι → ι}
variable {t_geq t_greater t_leq t_less : ι → ι → Prop}

theorem T_NUM844p2 : ((t_vplus (t_vplus (t_vmul t_vd411 t_vd413) t_vd413) (t_vsucc t_vd411)) = (t_vplus (t_vmul t_vd411 t_vd413) (t_vplus t_vd413 (t_vsucc t_vd411)))) → ((t_vplus (t_vmul (t_vsucc t_vd411) t_vd413) (t_vsucc t_vd411)) = (t_vplus (t_vplus (t_vmul t_vd411 t_vd413) t_vd413) (t_vsucc t_vd411))) → ((t_vmul (t_vsucc t_vd411) (t_vsucc t_vd413)) = (t_vplus (t_vmul (t_vsucc t_vd411) t_vd413) (t_vsucc t_vd411))) → ((t_vmul (t_vsucc t_vd411) t_vd413) = (t_vplus (t_vmul t_vd411 t_vd413) t_vd413)) → ((t_vsucc (t_vmul t_vd411 t_v1)) = (t_vplus (t_vmul t_vd411 t_v1) t_v1)) → ((t_vsucc t_vd411) = (t_vsucc (t_vmul t_vd411 t_v1))) → ((t_vmul (t_vsucc t_vd411) t_v1) = (t_vsucc t_vd411)) → (∀ v0 : ι, ((t_vmul t_v1 v0) = v0)) → (∀ v1 v2 : ι, (((t_vmul v1 (t_vsucc v2)) = (t_vplus (t_vmul v1 v2) v1)) ∧ ((t_vmul v1 t_v1) = v1))) → (∀ v3 v4 : ι, ((t_less v3 (t_vplus v4 t_v1)) → (t_leq v3 v4))) → (∀ v5 v6 : ι, ((t_greater v5 v6) → (t_geq v5 (t_vplus v6 t_v1)))) → (∀ v7 v8 : ι, ((t_vplus v8 v7) = (t_vplus v7 v8))) → (∀ v9 v10 : ι, ((t_vplus (t_vsucc v9) v10) = (t_vsucc (t_vplus v9 v10)))) → (∀ v11 : ι, ((t_vplus t_v1 v11) = (t_vsucc v11))) → (∀ v12 v13 v14 : ι, ((t_vplus (t_vplus v12 v13) v14) = (t_vplus v12 (t_vplus v13 v14)))) → (∀ v15 v16 : ι, (((t_vplus v15 (t_vsucc v16)) = (t_vsucc (t_vplus v15 v16))) ∧ ((t_vplus v15 t_v1) = (t_vsucc v15)))) → (∀ v17 : ι, ((¬(v17 = t_v1)) → (v17 = (t_vsucc (t_vskolem2 v17))))) → (∀ v18 : ι, (¬((t_vsucc v18) = v18))) → (∀ v19 v20 : ι, ((¬(v19 = v20)) → (¬((t_vsucc v19) = (t_vsucc v20))))) → ((t_vplus (t_vmul t_vd411 t_vd413) (t_vplus t_vd413 (t_vsucc t_vd411))) = (t_vplus (t_vmul t_vd411 t_vd413) (t_vplus (t_vsucc t_vd411) t_vd413))) := by
  vampire
