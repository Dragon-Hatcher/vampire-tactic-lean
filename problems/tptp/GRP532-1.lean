-- GRP532-1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP532-1.p`, beside this file. This is its statement in Lean:
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
variable {t_a t_b : ι}
variable {t_inverse : ι → ι}
variable {t_divide t_multiply : ι → ι → ι}

theorem T_GRP532m1 : (∀ v0 v1 v2 : ι, ((t_divide (t_divide v0 (t_divide v1 v2)) (t_divide v0 v1)) = v2)) → (∀ v3 v4 v5 : ι, ((t_multiply v3 v4) = (t_divide v3 (t_divide (t_divide v5 v5) v4)))) → (∀ v6 v7 : ι, ((t_inverse v6) = (t_divide (t_divide v7 v7) v6))) → (¬((t_multiply t_a t_b) = (t_multiply t_b t_a))) → False := by
  vampire
