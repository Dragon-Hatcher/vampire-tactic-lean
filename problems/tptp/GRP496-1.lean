-- GRP496-1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.00s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP496-1.p`, beside this file. This is its statement in Lean:
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
variable {t_a1 t_identity : ι}
variable {t_inverse : ι → ι}
variable {t_double__divide t_multiply : ι → ι → ι}

theorem T_GRP496m1 : (∀ v0 v1 v2 : ι, ((t_double__divide (t_double__divide t_identity (t_double__divide v0 (t_double__divide v1 t_identity))) (t_double__divide (t_double__divide v1 (t_double__divide v2 v0)) t_identity)) = v2)) → (∀ v3 v4 : ι, ((t_multiply v3 v4) = (t_double__divide (t_double__divide v4 v3) t_identity))) → (∀ v5 : ι, ((t_inverse v5) = (t_double__divide v5 t_identity))) → (∀ v6 : ι, (t_identity = (t_double__divide v6 (t_inverse v6)))) → (¬((t_multiply (t_inverse t_a1) t_a1) = t_identity)) → False := by
  vampire
