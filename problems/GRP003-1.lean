-- GRP003-1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP003-1.p`, beside this file. This is its statement in Lean:
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
variable {t_a t_identity : ι}
variable {t_inverse : ι → ι}
variable {t_product : ι → ι → ι → Prop}

theorem T_GRP003m1 : (∀ v0 : ι, (t_product (t_inverse v0) v0 t_identity)) → (∀ v1 : ι, (t_product t_identity v1 v1)) → (∀ v2 v3 v4 v5 v6 v7 : ι, ((¬(t_product v5 v6 v2)) ∨ (¬(t_product v6 v7 v3)) ∨ (¬(t_product v2 v7 v4)) ∨ (t_product v5 v3 v4))) → (∀ v8 v9 v10 v11 v12 v13 : ι, ((¬(t_product v11 v12 v8)) ∨ (¬(t_product v12 v13 v9)) ∨ (¬(t_product v11 v9 v10)) ∨ (t_product v8 v13 v10))) → (¬(t_product t_a t_identity t_a)) → False := by
  vampire
