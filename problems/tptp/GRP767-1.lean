-- GRP767-1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.81s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP767-1.p`, beside this file. This is its statement in Lean:
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
variable {t_one t_x0 t_x1 : ι}
variable {t_eta t_i t_j : ι → ι}
variable {t_difference t_product t_quotient t_t : ι → ι → ι}
variable {t_l : ι → ι → ι → ι}

theorem T_GRP767m1 : (∀ v0 : ι, ((t_product v0 t_one) = v0)) → (∀ v1 : ι, ((t_product t_one v1) = v1)) → (∀ v2 v3 : ι, ((t_product v2 (t_difference v2 v3)) = v3)) → (∀ v4 v5 : ι, ((t_difference v4 (t_product v4 v5)) = v5)) → (∀ v6 v7 : ι, ((t_quotient (t_product v6 v7) v7) = v6)) → (∀ v8 v9 : ι, ((t_product (t_quotient v8 v9) v9) = v8)) → (∀ v10 v11 v12 : ι, ((t_difference v10 (t_product (t_product v10 v11) v12)) = (t_quotient (t_product v11 (t_product v12 v10)) v10))) → (∀ v13 v14 v15 : ι, ((t_difference (t_product v13 v14) (t_product v13 (t_product v14 v15))) = (t_quotient (t_quotient (t_product v15 (t_product v13 v14)) v14) v13))) → (∀ v16 : ι, ((t_i v16) = (t_difference v16 t_one))) → (∀ v17 : ι, ((t_j v17) = (t_quotient t_one v17))) → (∀ v18 : ι, ((t_product (t_i v18) v18) = (t_product v18 (t_j v18)))) → (∀ v19 : ι, ((t_eta v19) = (t_product (t_i v19) v19))) → (∀ v20 v21 : ι, ((t_product (t_i (t_i v20)) v21) = (t_product (t_eta v20) (t_product v20 v21)))) → (∀ v22 v23 : ι, ((t_product v22 (t_product (t_eta v22) v23)) = (t_product (t_j (t_j v22)) v23))) → (∀ v24 v25 : ι, ((t_product v24 (t_product v25 (t_eta v24))) = (t_product (t_product v24 v25) (t_eta v24)))) → (∀ v26 v27 v28 : ι, ((t_product (t_eta v26) (t_product v27 v28)) = (t_product (t_product (t_eta v26) v27) v28))) → (∀ v29 v30 v31 : ι, ((t_l v29 v30 v31) = (t_difference (t_product v29 v30) (t_product v29 (t_product v30 v31))))) → (∀ v32 v33 v34 : ι, ((t_l v32 v32 (t_product v33 v34)) = (t_product (t_l v32 v32 v33) (t_l v32 v32 v34)))) → (∀ v35 v36 : ι, ((t_t v35 v36) = (t_quotient (t_product v35 v36) v35))) → (∀ v37 v38 v39 : ι, ((t_t (t_eta v37) (t_product v38 v39)) = (t_product (t_t (t_eta v37) v38) (t_t (t_eta v37) v39)))) → (¬((t_product (t_j (t_j t_x0)) (t_j (t_product t_x1 t_x0))) = (t_j t_x1))) → False := by
  vampire
