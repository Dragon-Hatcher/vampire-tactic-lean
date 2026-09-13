-- SYN067+1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN067+1.p`, beside this file. This is its statement in Lean:
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
variable {t_a : ι}
variable {t_big__p : ι → Prop}
variable {t_big__r : ι → ι → Prop}

theorem T_SYN067p1 : ((∀ v0 : ι, (((t_big__p t_a) ∧ ((t_big__p v0) → (∃ v1 : ι, ((t_big__p v1) ∧ (t_big__r v0 v1))))) → (∃ v2 v3 : ι, ((t_big__p v2) ∧ (t_big__r v0 v3) ∧ (t_big__r v3 v2))))) ↔ (∀ v4 : ι, (((¬(t_big__p t_a)) ∨ (t_big__p v4) ∨ (∃ v5 v6 : ι, ((t_big__p v5) ∧ (t_big__r v4 v6) ∧ (t_big__r v6 v5)))) ∧ ((¬(t_big__p t_a)) ∨ (¬(∃ v7 : ι, ((t_big__p v7) ∧ (t_big__r v4 v7)))) ∨ (∃ v8 v9 : ι, ((t_big__p v8) ∧ (t_big__r v4 v9) ∧ (t_big__r v9 v8))))))) := by
  vampire
