-- SYN070-1, from TPTP v9.3.1 (SYN).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN070-1.p`, beside this file. This is its statement in Lean:
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
variable {t_f : ι → ι}
variable {t_big__f t_big__g : ι → Prop}
variable {t_big__h t_big__j : ι → ι → Prop}

theorem T_SYN070m1 : (∀ v0 : ι, ((¬(t_big__f v0)) ∨ (t_big__f (t_f v0)) ∨ (t_big__g v0))) → (∀ v1 : ι, ((¬(t_big__f v1)) ∨ (t_big__h (t_f v1) v1) ∨ (t_big__g v1))) → (∀ v2 : ι, ((¬(t_big__f v2)) ∨ (¬(t_big__g (t_f v2))) ∨ (t_big__g v2))) → (∀ v3 : ι, ((¬(t_big__f v3)) ∨ (t_big__g v3) ∨ (t_big__f t_a))) → (∀ v4 : ι, ((¬(t_big__f v4)) ∨ (t_big__g v4) ∨ (¬(t_big__g t_a)))) → (∀ v5 v6 : ι, ((¬(t_big__f v5)) ∨ (t_big__g v5) ∨ (¬(t_big__f v6)) ∨ (t_big__g v6) ∨ (t_big__j t_a v6))) → (∀ v7 v8 : ι, ((¬(t_big__f v7)) ∨ (¬(t_big__f v8)) ∨ (¬(t_big__h v7 v8)) ∨ (¬(t_big__j v8 v7)))) → (t_big__f t_b) → (¬(t_big__g t_b)) → False := by
  vampire
