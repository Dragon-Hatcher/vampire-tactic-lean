import Vampire

-- The unused-variable linter cannot see through `vampire [*]`, which takes the whole
-- local context: every hypothesis below *is* used, just not by name in a proof term.
set_option linter.unusedVariables false
set_option linter.unusedSectionVars false

/-!
More than one large problem per process.

Vampire's state is process-global and `Lib::resetGlobalState` puts it back between runs.
What makes this a test rather than a formality is that the reset used to be incomplete:
`TermPartialOrdering` cached relations in function-local statics, and a cached relation
keeps a `const Ordering&`, so the second problem was handed the first problem's ordering
and died on a vtable call into freed memory (`docs/vampire-global-state.md` §6).

Two properties made that hard to catch, and are why this file is shaped as it is. It
needs a problem large enough to reach forward demodulation — nothing in the propositional
end of the suite goes near the term-ordering machinery. And it needs a *second* such
problem: the first leaves the stale cache behind, but nothing reads it until the next
run, so one large goal on its own looks perfectly healthy.

Two goals is the whole test. It reproduced 4 times out of 4 against the unfixed prover,
where the twelve goals of `Test/GroupTheory.lean` only managed 2 out of 3.
-/

set_option vampire.timeout 30
set_option maxHeartbeats 0

variable {G : Type} [Inhabited G] (m : G → G → G) (i : G → G) (e : G)

/-- A group of exponent two is abelian, stated first-order. -/
theorem exponent_two_abelian_fo
    (A : ∀ a b c, m (m a b) c = m a (m b c)) (L : ∀ a, m e a = a)
    (V : ∀ a, m (i a) a = e) (R : ∀ a, m a (i a) = e) (O : ∀ a, m a e = a)
    (H : ∀ x, m x x = e) : ∀ a b, m a b = m b a := by
  vampire [*]

/-- And if squaring is a homomorphism. The second large search in the process is the one
that used to die. -/
theorem square_hom_abelian_fo
    (A : ∀ a b c, m (m a b) c = m a (m b c)) (L : ∀ a, m e a = a)
    (V : ∀ a, m (i a) a = e) (R : ∀ a, m a (i a) = e) (O : ∀ a, m a e = a)
    (H : ∀ a b, m (m a b) (m a b) = m (m a a) (m b b)) : ∀ a b, m a b = m b a := by
  vampire [*]

#print axioms exponent_two_abelian_fo
#print axioms square_hom_abelian_fo
