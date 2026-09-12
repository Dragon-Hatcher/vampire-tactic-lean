-- LCL640+1.001, from TPTP v9.3.1 (LCL).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.05s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LCL640+1.001.p`, beside this file. This is its statement in Lean:
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
variable {t_p1 : ι → Prop}
variable {t_r1 : ι → ι → Prop}

theorem T_LCL640p1_001 : (¬(∃ v0 : ι, (¬((¬(∀ v1 : ι, ((¬(t_r1 v0 v1)) ∨ (((∀ v2 : ι, ((¬(t_r1 v1 v2)) ∨ (t_p1 v2))) ∨ (¬(t_p1 v1)) ∨ (∀ v3 : ι, ((¬(t_r1 v1 v3)) ∨ (¬(∀ v4 : ι, ((¬(t_r1 v3 v4)) ∨ (∀ v5 : ι, ((¬(t_r1 v4 v5)) ∨ (t_p1 v5))) ∨ (¬(t_p1 v4))))))) ∨ (¬(∀ v6 : ι, ((¬(t_r1 v1 v6)) ∨ (∀ v7 : ι, ((¬(t_r1 v6 v7)) ∨ (t_p1 v7))) ∨ (¬(t_p1 v6)) ∨ (¬(∀ v8 : ι, ((¬(t_r1 v6 v8)) ∨ (∀ v9 : ι, ((¬(t_r1 v8 v9)) ∨ (∀ v10 : ι, ((¬(t_r1 v9 v10)) ∨ (t_p1 v10))) ∨ (¬(t_p1 v9)))) ∨ (¬((∀ v11 : ι, ((¬(t_r1 v8 v11)) ∨ (t_p1 v11))) ∨ (¬(t_p1 v8))))))))))) ∧ ((t_p1 v1) ∨ (∀ v12 : ι, ((¬(t_r1 v1 v12)) ∨ (¬(∀ v13 : ι, ((¬(t_r1 v12 v13)) ∨ (t_p1 v13)))))) ∨ (¬(∀ v14 : ι, ((¬(t_r1 v1 v14)) ∨ (t_p1 v14) ∨ (¬(∀ v15 : ι, ((¬(t_r1 v14 v15)) ∨ (∀ v16 : ι, ((¬(t_r1 v15 v16)) ∨ (t_p1 v16))) ∨ (¬(t_p1 v15))))))))) ∧ (∀ v17 : ι, ((¬(t_r1 v1 v17)) ∨ (∀ v18 : ι, ((¬(t_r1 v17 v18)) ∨ (∀ v19 : ι, ((¬(t_r1 v18 v19)) ∨ (t_p1 v19))))) ∨ (¬(∀ v20 : ι, ((¬(t_r1 v17 v20)) ∨ (t_p1 v20)))))) ∧ ((∀ v21 : ι, ((¬(t_r1 v1 v21)) ∨ (∀ v22 : ι, ((¬(t_r1 v21 v22)) ∨ (t_p1 v22) ∨ (¬(∀ v23 : ι, ((¬(t_r1 v22 v23)) ∨ (∀ v24 : ι, ((¬(t_r1 v23 v24)) ∨ (t_p1 v24))) ∨ (¬(t_p1 v23))))))))) ∨ (¬(∀ v25 : ι, ((¬(t_r1 v1 v25)) ∨ (t_p1 v25) ∨ (¬(∀ v26 : ι, ((¬(t_r1 v25 v26)) ∨ (∀ v27 : ι, ((¬(t_r1 v26 v27)) ∨ (t_p1 v27))) ∨ (¬(t_p1 v26))))))))))))) ∨ (¬(¬(∀ v28 : ι, ((¬(t_r1 v0 v28)) ∨ (∀ v29 : ι, ((¬(t_r1 v28 v29)) ∨ (t_p1 v29))) ∨ (∀ v30 : ι, ((¬(t_r1 v28 v30)) ∨ (¬(∀ v31 : ι, ((¬(t_r1 v30 v31)) ∨ (t_p1 v31)))))) ∨ (¬(∀ v32 : ι, ((¬(t_r1 v28 v32)) ∨ (t_p1 v32) ∨ (¬(∀ v33 : ι, ((¬(t_r1 v32 v33)) ∨ (∀ v34 : ι, ((¬(t_r1 v33 v34)) ∨ (t_p1 v34))) ∨ (¬(t_p1 v33)))))))))))))))) := by
  vampire
