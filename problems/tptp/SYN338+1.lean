-- SYN338+1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN338+1.p`, beside this file. This is its statement in Lean:
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
variable {t_big__f : ι → ι → Prop}

theorem T_SYN338p1 : (∃ v0 : ι, (∀ v1 : ι, (∃ v2 : ι, ((t_big__f v0 v1) → ((t_big__f v2 v0) → (t_big__f v1 v1)))))) := by
  vampire
