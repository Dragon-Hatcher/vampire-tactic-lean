-- MGT029+1, from TPTP v9.3.1 (MGT).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.14s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `MGT029+1.p`, beside this file. This is its statement in Lean:
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
variable {t_efficient__producers t_first__movers t_zero : ι}
variable {t_equilibrium : ι → ι}
variable {t_growth__rate : ι → ι → ι}
variable {t_environment t_stable : ι → Prop}
variable {t_greater t_greater__or__equal t_in__environment : ι → ι → Prop}
variable {t_subpopulations : ι → ι → ι → ι → Prop}

theorem T_MGT029p1 : (∀ v0 v1 v2 : ι, (((t_greater v0 v1) ∧ (t_greater v1 v2)) → (t_greater v0 v2))) → (∀ v3 v4 v5 : ι, (((t_in__environment v3 v4) ∧ (t_in__environment v3 v5)) → ((t_greater v5 v4) ∨ (v5 = v4) ∨ (t_greater v4 v5)))) → (∀ v6 v7 : ι, ((t_greater__or__equal v6 v7) ↔ ((t_greater v6 v7) ∨ (v6 = v7)))) → (∀ v8 v9 : ι, (((t_environment v8) ∧ (t_subpopulations t_first__movers t_efficient__producers v8 v9) ∧ (t_greater__or__equal v9 (t_equilibrium v8))) → ((((t_growth__rate t_first__movers v9) = t_zero) ∧ ((t_growth__rate t_efficient__producers v9) = t_zero)) ∨ ((t_greater (t_growth__rate t_first__movers v9) t_zero) ∧ (t_greater t_zero (t_growth__rate t_efficient__producers v9))) ∨ ((t_greater (t_growth__rate t_efficient__producers v9) t_zero) ∧ (t_greater t_zero (t_growth__rate t_first__movers v9)))))) → (∀ v10 : ι, (((t_environment v10) ∧ (t_stable v10)) → (∃ v11 : ι, ((t_in__environment v10 v11) ∧ (∀ v12 : ι, (((t_subpopulations t_first__movers t_efficient__producers v10 v12) ∧ (t_greater__or__equal v12 v11)) → (t_greater (t_growth__rate t_efficient__producers v12) (t_growth__rate t_first__movers v12)))))))) → (∀ v13 : ι, (((t_environment v13) ∧ (t_stable v13)) → (∃ v14 : ι, ((t_in__environment v13 v14) ∧ (t_greater__or__equal v14 (t_equilibrium v13)))))) → (∀ v15 : ι, (((t_environment v15) ∧ (t_stable v15)) → (∃ v16 : ι, ((t_in__environment v15 v16) ∧ (∀ v17 : ι, (((t_subpopulations t_first__movers t_efficient__producers v15 v17) ∧ (t_greater__or__equal v17 v16)) → ((t_greater (t_growth__rate t_efficient__producers v17) t_zero) ∧ (t_greater t_zero (t_growth__rate t_first__movers v17))))))))) := by
  vampire
