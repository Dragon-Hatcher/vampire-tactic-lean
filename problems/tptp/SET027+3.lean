-- SET027+3, from TPTP v9.3.1 (SET).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.00s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET027+3.p`, beside this file. This is its statement in Lean:
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
variable {t_member t_subset : ι → ι → Prop}

theorem T_SET027p3 : (∀ v0 v1 : ι, ((t_subset v0 v1) ↔ (∀ v2 : ι, ((t_member v2 v0) → (t_member v2 v1))))) → (∀ v3 : ι, (t_subset v3 v3)) → (∀ v4 v5 v6 : ι, (((t_subset v4 v5) ∧ (t_subset v5 v6)) → (t_subset v4 v6))) := by
  vampire
