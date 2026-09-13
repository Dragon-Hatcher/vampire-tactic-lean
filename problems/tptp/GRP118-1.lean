-- GRP118-1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.09s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP118-1.p`, beside this file. This is its statement in Lean:
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
variable {t_a t_b t_c t_identity : ι}
variable {t_multiply : ι → ι → ι}

theorem T_GRP118m1 : (∀ v0 v1 v2 : ι, ((t_multiply v0 (t_multiply (t_multiply v0 (t_multiply (t_multiply v0 v1) v2)) (t_multiply t_identity (t_multiply v2 v2)))) = v1)) → (¬((t_multiply (t_multiply t_a t_b) t_c) = (t_multiply t_a (t_multiply t_b t_c)))) → False := by
  vampire
