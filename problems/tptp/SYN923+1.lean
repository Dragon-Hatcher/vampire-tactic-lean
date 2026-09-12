-- SYN923+1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.00s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN923+1.p`, beside this file. This is its statement in Lean:
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
variable {t_p t_q : ι → Prop}

theorem T_SYN923p1 : (((∀ v0 : ι, (t_p v0)) ∨ (∀ v1 : ι, (t_q v1))) → (∀ v2 : ι, ((t_p v2) ∨ (t_q v2)))) := by
  vampire
