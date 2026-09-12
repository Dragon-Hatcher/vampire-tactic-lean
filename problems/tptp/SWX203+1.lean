-- SWX203+1, from TPTP v9.3.1 (SWX).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.02s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWX203+1.p`, beside this file. This is its statement in Lean:
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
variable {t_nil t_z : ι}
variable {t_head t_lengthNat t_proj1S t_rev t_s t_tail : ι → ι}
variable {t_append t_cons : ι → ι → ι}
variable {t_sorted t_unique : ι → Prop}
variable {t_elemNat t_leqNat : ι → ι → Prop}

theorem T_SWX203p1 : (∀ v0 v1 : ι, ((t_head (t_cons v0 v1)) = v0)) → (∀ v2 v3 : ι, ((t_tail (t_cons v2 v3)) = v3)) → (∀ v4 v5 : ι, (¬(t_nil = (t_cons v4 v5)))) → (∀ v6 : ι, ((t_proj1S (t_s v6)) = v6)) → (∀ v7 : ι, (¬(t_z = (t_s v7)))) → (∀ v8 : ι, (t_leqNat t_z v8)) → (∀ v9 : ι, (¬(t_leqNat (t_s v9) t_z))) → (∀ v10 v11 : ι, ((t_leqNat (t_s v10) (t_s v11)) ↔ (t_leqNat v10 v11))) → (t_sorted t_nil) → (∀ v12 : ι, (t_sorted (t_cons v12 t_nil))) → (∀ v13 v14 v15 : ι, ((t_sorted (t_cons v13 (t_cons v14 v15))) ↔ ((t_leqNat v13 v14) ∧ (t_sorted (t_cons v14 v15))))) → ((t_lengthNat t_nil) = t_z) → (∀ v16 v17 : ι, ((t_lengthNat (t_cons v16 v17)) = (t_s (t_lengthNat v17)))) → (∀ v18 : ι, (¬(t_elemNat v18 t_nil))) → (∀ v19 v20 v21 : ι, ((t_elemNat v19 (t_cons v20 v21)) ↔ ((v19 = v20) ∨ (t_elemNat v19 v21)))) → (t_unique t_nil) → (∀ v22 v23 : ι, ((t_unique (t_cons v22 v23)) ↔ ((¬(t_elemNat v22 v23)) ∧ (t_unique v23)))) → (∀ v24 : ι, ((t_append t_nil v24) = v24)) → (∀ v25 v26 v27 : ι, ((t_append (t_cons v26 v27) v25) = (t_cons v26 (t_append v27 v25)))) → ((t_rev t_nil) = t_nil) → (∀ v28 v29 : ι, ((t_rev (t_cons v28 v29)) = (t_append (t_rev v29) (t_cons v28 t_nil)))) → (∃ v30 : ι, (¬((t_sorted (t_rev v30)) → ((t_unique v30) → (t_leqNat (t_lengthNat v30) (t_s (t_s (t_s t_z)))))))) := by
  vampire
