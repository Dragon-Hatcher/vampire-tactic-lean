-- SET968+1, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.07s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET968+1.p`, beside this file. This is its statement in Lean:
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
variable {t_cartesian__product2 t_set__union2 : ι → ι → ι}
variable {t_empty : ι → Prop}

theorem T_SET968p1 : (∀ v0 v1 : ι, ((t_set__union2 v0 v1) = (t_set__union2 v1 v0))) → (∀ v2 v3 : ι, ((¬(t_empty v2)) → (¬(t_empty (t_set__union2 v2 v3))))) → (∀ v4 v5 : ι, ((¬(t_empty v4)) → (¬(t_empty (t_set__union2 v5 v4))))) → (∀ v6 v7 : ι, ((t_set__union2 v6 v6) = v6)) → (∃ v8 : ι, (t_empty v8)) → (∃ v9 : ι, (¬(t_empty v9))) → (∀ v10 v11 v12 : ι, (((t_cartesian__product2 (t_set__union2 v10 v11) v12) = (t_set__union2 (t_cartesian__product2 v10 v12) (t_cartesian__product2 v11 v12))) ∧ ((t_cartesian__product2 v12 (t_set__union2 v10 v11)) = (t_set__union2 (t_cartesian__product2 v12 v10) (t_cartesian__product2 v12 v11))))) → (∀ v13 v14 v15 : ι, ((t_set__union2 (t_set__union2 v13 v14) v15) = (t_set__union2 v13 (t_set__union2 v14 v15)))) → (∀ v16 v17 v18 v19 : ι, ((t_cartesian__product2 (t_set__union2 v16 v17) (t_set__union2 v18 v19)) = (t_set__union2 (t_set__union2 (t_set__union2 (t_cartesian__product2 v16 v18) (t_cartesian__product2 v16 v19)) (t_cartesian__product2 v17 v18)) (t_cartesian__product2 v17 v19)))) := by
  vampire
