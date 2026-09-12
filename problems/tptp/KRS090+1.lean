-- KRS090+1, from TPTP v9.3.1 (KRS).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `KRS090+1.p`, beside this file. This is its statement in Lean:
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
variable {t_i2003__11__14__17__19__57994 : ι}
variable {t_cA t_cA0 t_cA1 t_cA10 t_cA11 t_cA12 t_cA13 t_cA14 t_cA15 t_cA16 t_cA17 t_cA18 t_cA19 t_cA2 t_cA20 t_cA21 t_cA22 t_cA23 t_cA24 t_cA25 t_cA26 t_cA27 t_cA28 t_cA29 t_cA3 t_cA30 t_cA31 t_cA4 t_cA5 t_cA6 t_cA7 t_cA8 t_cA9 t_cB t_cB0 t_cB1 t_cB10 t_cB11 t_cB12 t_cB13 t_cB14 t_cB15 t_cB16 t_cB17 t_cB18 t_cB19 t_cB2 t_cB20 t_cB21 t_cB22 t_cB23 t_cB24 t_cB25 t_cB26 t_cB27 t_cB28 t_cB29 t_cB3 t_cB30 t_cB31 t_cB4 t_cB5 t_cB6 t_cB7 t_cB8 t_cB9 t_cC1 t_cC2 t_cC3 t_cC4 t_cC5 t_cTEST t_cowlNothing t_cowlThing t_xsd__integer t_xsd__string : ι → Prop}
variable {t_rR : ι → ι → Prop}

theorem T_KRS090p1 : (∀ v0 : ι, ((t_cowlThing v0) ∧ (¬(t_cowlNothing v0)))) → (∀ v1 : ι, ((t_xsd__string v1) ↔ (¬(t_xsd__integer v1)))) → (∀ v2 : ι, ((t_cC1 v2) → (((t_cB5 v2) ∨ (t_cA5 v2)) ∧ ((t_cB13 v2) ∨ (t_cA13 v2)) ∧ ((t_cA1 v2) ∨ (t_cB1 v2)) ∧ ((t_cA27 v2) ∨ (t_cB27 v2)) ∧ ((t_cA4 v2) ∨ (t_cB4 v2)) ∧ ((t_cB12 v2) ∨ (t_cA12 v2)) ∧ ((t_cB30 v2) ∨ (t_cA30 v2)) ∧ ((t_cA20 v2) ∨ (t_cB20 v2)) ∧ ((t_cB14 v2) ∨ (t_cA14 v2)) ∧ ((t_cB28 v2) ∨ (t_cA28 v2)) ∧ ((t_cA3 v2) ∨ (t_cB3 v2)) ∧ ((t_cB7 v2) ∨ (t_cA7 v2)) ∧ ((t_cB21 v2) ∨ (t_cA21 v2)) ∧ ((t_cB22 v2) ∨ (t_cA22 v2)) ∧ ((t_cB17 v2) ∨ (t_cA17 v2)) ∧ ((t_cB11 v2) ∨ (t_cA11 v2)) ∧ ((t_cB19 v2) ∨ (t_cA19 v2)) ∧ ((t_cA8 v2) ∨ (t_cB8 v2)) ∧ ((t_cA26 v2) ∨ (t_cB26 v2)) ∧ ((t_cA25 v2) ∨ (t_cB25 v2)) ∧ ((t_cA29 v2) ∨ (t_cB29 v2)) ∧ ((t_cB23 v2) ∨ (t_cA23 v2)) ∧ ((t_cB18 v2) ∨ (t_cA18 v2)) ∧ ((t_cB10 v2) ∨ (t_cA10 v2)) ∧ ((t_cB2 v2) ∨ (t_cA2 v2)) ∧ ((t_cA16 v2) ∨ (t_cB16 v2)) ∧ ((t_cB0 v2) ∨ (t_cA0 v2)) ∧ ((t_cB31 v2) ∨ (t_cA31 v2)) ∧ ((t_cB9 v2) ∨ (t_cA9 v2)) ∧ ((t_cB6 v2) ∨ (t_cA6 v2)) ∧ ((t_cB24 v2) ∨ (t_cA24 v2)) ∧ ((t_cB15 v2) ∨ (t_cA15 v2))))) → (∀ v3 : ι, ((t_cC2 v3) → (((¬(t_cB v3)) ∨ (t_cA v3)) ∧ ((t_cB v3) ∨ (t_cA v3))))) → (∀ v4 : ι, ((t_cC3 v4) → (((¬(t_cB v4)) ∨ (¬(t_cA v4))) ∧ ((t_cB v4) ∨ (¬(t_cA v4)))))) → (∀ v5 : ι, ((t_cC4 v5) → (∃ v6 : ι, ((t_rR v5 v6) ∧ (t_cC2 v6))))) → (∀ v7 : ι, ((t_cC5 v7) → (∀ v8 : ι, ((t_rR v7 v8) → (t_cC3 v8))))) → (∀ v9 : ι, ((t_cTEST v9) → ((t_cC4 v9) ∧ (t_cC1 v9) ∧ (t_cC5 v9)))) → (t_cTEST t_i2003__11__14__17__19__57994) → False := by
  vampire
