-- SEU257+1, from TPTP v9.3.1 (SEU).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SEU257+1.p`, beside this file. This is its statement in Lean:
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
variable {t_cartesian__product2 t_relation__restriction t_set__intersection2 : ι → ι → ι}
variable {t_antisymmetric t_connected t_reflexive t_relation t_transitive t_well__founded__relation t_well__ordering : ι → Prop}

theorem T_SEU257p1 : (∀ v0 v1 : ι, ((t_set__intersection2 v0 v1) = (t_set__intersection2 v1 v0))) → (∀ v2 : ι, ((t_relation v2) → ((t_well__ordering v2) ↔ ((t_reflexive v2) ∧ (t_transitive v2) ∧ (t_antisymmetric v2) ∧ (t_connected v2) ∧ (t_well__founded__relation v2))))) → (∀ v3 : ι, ((t_relation v3) → (∀ v4 : ι, ((t_relation__restriction v3 v4) = (t_set__intersection2 v3 (t_cartesian__product2 v4 v4)))))) → (∀ v5 v6 : ι, ((t_relation v5) → (t_relation (t_relation__restriction v5 v6)))) → True → True → (∀ v7 v8 : ι, ((t_set__intersection2 v7 v7) = v7)) → (∀ v9 v10 : ι, ((t_relation v10) → ((t_reflexive v10) → (t_reflexive (t_relation__restriction v10 v9))))) → (∀ v11 v12 : ι, ((t_relation v12) → ((t_connected v12) → (t_connected (t_relation__restriction v12 v11))))) → (∀ v13 v14 : ι, ((t_relation v14) → ((t_transitive v14) → (t_transitive (t_relation__restriction v14 v13))))) → (∀ v15 v16 : ι, ((t_relation v16) → ((t_antisymmetric v16) → (t_antisymmetric (t_relation__restriction v16 v15))))) → (∀ v17 v18 : ι, ((t_relation v18) → ((t_well__founded__relation v18) → (t_well__founded__relation (t_relation__restriction v18 v17))))) → (∀ v19 v20 : ι, ((t_relation v20) → ((t_well__ordering v20) → (t_well__ordering (t_relation__restriction v20 v19))))) := by
  vampire
