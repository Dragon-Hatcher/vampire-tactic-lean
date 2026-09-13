-- SYN727+1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN727+1.p`, beside this file. This is its statement in Lean:
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
variable {t_bruce t_lyle : ι}
variable {t_likes : ι → ι → Prop}

theorem T_SYN727p1 : (((∀ v0 : ι, (t_likes v0 t_bruce)) ∧ (∀ v1 : ι, ((∃ v2 : ι, (t_likes v1 v2)) → (t_likes t_lyle v1)))) → (∃ v3 : ι, (∀ v4 : ι, (t_likes v3 v4)))) := by
  vampire
