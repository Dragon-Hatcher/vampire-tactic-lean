-- GRP604-1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.04s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP604-1.p`, beside this file. This is its statement in Lean:
-- one type variable for TPTP's single sort, functors as functions into it, predicates
-- as functions into `Prop`, and the whole problem as `axiom₁ → … → axiomₙ → goal`.
-- `False` as the goal means the problem states no conjecture and asks for a refutation.
--
-- Nothing is imported, so this file typechecks on its own.
set_option maxHeartbeats 0
set_option maxRecDepth 100000000
set_option linter.all false
universe u
variable {ι : Type u}
variable [inst : Inhabited ι]
variable {t_a t_b : ι}
variable {t_inverse : ι → ι}
variable {t_double__divide t_multiply : ι → ι → ι}

theorem T_GRP604m1 : (∀ v0 v1 v2 : ι, ((t_inverse (t_double__divide (t_inverse (t_double__divide v0 (t_inverse (t_double__divide v1 (t_double__divide v0 v2))))) v2)) = v1)) → (∀ v3 v4 : ι, ((t_multiply v3 v4) = (t_inverse (t_double__divide v4 v3)))) → (¬((t_multiply t_a t_b) = (t_multiply t_b t_a))) → False := by
  sorry
