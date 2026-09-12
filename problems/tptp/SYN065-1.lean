-- SYN065-1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN065-1.p`, beside this file. This is its statement in Lean:
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
variable {t_a : ι}
variable {t_f t_g : ι → ι}
variable {t_big__f t_big__g t_big__h : ι → ι → Prop}

theorem T_SYN065m1 : (∀ v0 : ι, (t_big__f v0 (t_f v0))) → (∀ v1 : ι, (t_big__g v1 (t_g v1))) → (∀ v2 v3 v4 : ι, ((¬(t_big__f v2 v3)) ∨ (¬(t_big__f v3 v4)) ∨ (t_big__h v2 v4))) → (∀ v5 v6 v7 : ι, ((¬(t_big__f v5 v6)) ∨ (¬(t_big__g v6 v7)) ∨ (t_big__h v5 v7))) → (∀ v8 v9 v10 : ι, ((¬(t_big__g v8 v9)) ∨ (¬(t_big__f v9 v10)) ∨ (t_big__h v8 v10))) → (∀ v11 v12 v13 : ι, ((¬(t_big__g v11 v12)) ∨ (¬(t_big__g v12 v13)) ∨ (t_big__h v11 v13))) → (∀ v14 : ι, (¬(t_big__h t_a v14))) → False := by
  vampire
