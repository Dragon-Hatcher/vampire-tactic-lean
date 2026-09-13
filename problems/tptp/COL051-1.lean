-- COL051-1, from TPTP v9.3.1 (COL).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.00s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `COL051-1.p`, beside this file. This is its statement in Lean:
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
variable {t_mocking__bird : ι}
variable {t_compose t_response : ι → ι → ι}

theorem T_COL051m1 : (∀ v0 : ι, ((t_response t_mocking__bird v0) = (t_response v0 v0))) → (∀ v1 v2 v3 : ι, ((t_response (t_compose v2 v3) v1) = (t_response v2 (t_response v3 v1)))) → (∀ v4 : ι, (¬((t_response v4 v4) = v4))) → False := by
  vampire
