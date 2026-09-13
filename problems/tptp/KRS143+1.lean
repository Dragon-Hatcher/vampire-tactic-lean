-- KRS143+1, from TPTP v9.3.1 (KRS).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `KRS143+1.p`, beside this file. This is its statement in Lean:
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
variable {t_cc t_cowlNothing t_cowlThing t_xsd__integer t_xsd__string : ι → Prop}
variable {t_rp : ι → ι → Prop}

theorem T_KRS143p1 : (∀ v0 v1 : ι, (((v0 = v1) ∧ (t_cc v0)) → (t_cc v1))) → (∀ v2 v3 : ι, (((v2 = v3) ∧ (t_cowlNothing v2)) → (t_cowlNothing v3))) → (∀ v4 v5 : ι, (((v4 = v5) ∧ (t_cowlThing v4)) → (t_cowlThing v5))) → (∀ v6 v7 v8 : ι, (((v6 = v7) ∧ (t_rp v6 v8)) → (t_rp v7 v8))) → (∀ v9 v10 v11 : ι, (((v9 = v10) ∧ (t_rp v11 v9)) → (t_rp v11 v10))) → (∀ v12 v13 : ι, (((v12 = v13) ∧ (t_xsd__integer v12)) → (t_xsd__integer v13))) → (∀ v14 v15 : ι, (((v14 = v15) ∧ (t_xsd__string v14)) → (t_xsd__string v15))) → (∀ v16 : ι, ((t_cowlThing v16) ∧ (¬(t_cowlNothing v16)))) → (∀ v17 : ι, ((t_xsd__string v17) ↔ (¬(t_xsd__integer v17)))) → (∀ v18 : ι, ((t_cc v18) → (∃ v19 : ι, (t_rp v18 v19)))) → (∀ v20 : ι, ((t_cc v20) → (∀ v21 v22 : ι, (((t_rp v20 v21) ∧ (t_rp v20 v22)) → (v21 = v22))))) → ((∀ v23 : ι, ((t_cowlThing v23) ∧ (¬(t_cowlNothing v23)))) ∧ (∀ v24 : ι, ((t_xsd__string v24) ↔ (¬(t_xsd__integer v24)))) ∧ (∀ v25 : ι, ((t_cc v25) → ((∃ v26 : ι, (t_rp v25 v26)) ∧ (∀ v27 v28 : ι, (((t_rp v25 v27) ∧ (t_rp v25 v28)) → (v27 = v28))))))) := by
  vampire
