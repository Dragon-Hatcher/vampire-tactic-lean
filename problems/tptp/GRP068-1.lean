-- GRP068-1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.14s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP068-1.p`, beside this file. This is its statement in Lean:
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
variable {t_a1 t_a2 t_a3 t_b3 t_c3 t_identity : ι}
variable {t_inverse : ι → ι}
variable {t_divide t_multiply : ι → ι → ι}

theorem T_GRP068m1 : (∀ v0 v1 v2 : ι, ((t_divide v0 (t_divide (t_divide (t_divide t_identity v1) v2) (t_divide (t_divide (t_divide v0 v0) v0) v2))) = v1)) → (∀ v3 v4 : ι, ((t_multiply v3 v4) = (t_divide v3 (t_divide t_identity v4)))) → (∀ v5 : ι, ((t_inverse v5) = (t_divide t_identity v5))) → (∀ v6 : ι, (t_identity = (t_divide v6 v6))) → ((¬((t_multiply (t_inverse t_a1) t_a1) = t_identity)) ∨ (¬((t_multiply t_identity t_a2) = t_a2)) ∨ (¬((t_multiply (t_multiply t_a3 t_b3) t_c3) = (t_multiply t_a3 (t_multiply t_b3 t_c3))))) → False := by
  vampire
