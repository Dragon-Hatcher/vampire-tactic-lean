// Building a problem in Vampire's own data structures, running saturation, and handing
// the refutation back as structured data.
//
// Nothing here goes through a text format. Clauses are built with Signature/Literal/
// Clause directly, and the proof is walked as a DAG of Units, not printed and reparsed.
//
// The problem is hard-coded for now: the propositional refutation
//
//     (p ∨ q),  ¬p,  ¬q  ⊢  ⊥
//
// which in Lean is `(p ∨ q) → ¬p → ¬q → False`. Goal translation comes next; this
// exists to establish the run-and-reconstruct path end to end.

#include <lean/lean.h>

#include "vampire_lock.hpp"

#include <vector>

#include "Lib/Environment.hpp"
#include "Lib/Reset.hpp"
#include "Lib/Timer.hpp"
#include "Kernel/Clause.hpp"
#include "Kernel/Inference.hpp"
#include "Kernel/Problem.hpp"
#include "Kernel/Signature.hpp"
#include "Kernel/Term.hpp"
#include "Kernel/Unit.hpp"
#include "Saturation/ProvingHelper.hpp"
#include "Shell/Options.hpp"
#include "Shell/Statistics.hpp"

using namespace Lib;
using namespace Kernel;

namespace vampire_ffi {

/// One step of the refutation, flattened for the boundary.
struct ProofStep {
  unsigned number;                 // Vampire's unit number
  unsigned rule;                   // InferenceRule, as its underlying integer
  std::vector<unsigned> premises;  // unit numbers
  // The clause's literals as (predicate, polarity) pairs. Propositional for now;
  // first-order terms need a richer encoding, which is the next piece of work.
  std::vector<std::pair<unsigned, bool>> literals;
};

// The tactic runs the prover and then reads the steps back in separate FFI calls. The
// entry lock makes each call atomic but not that sequence, so with Lean elaborating in
// parallel another thread could reset Vampire between a thread's run and its reads.
//
// These are therefore per-thread. They hold plain numbers copied out of Vampire's
// structures, so they stay valid after the environment they came from is torn down.
thread_local std::vector<ProofStep> g_proof;
/// Predicate numbers of the problem's propositional atoms, in the order introduced.
thread_local std::vector<unsigned> g_atoms;
/// The problem outlives the call: env keeps a pointer to it via setMainProblem, so it
/// must not be a stack local. Released on the next run's reset.
Problem *g_problem = nullptr;

static void collectProof(Unit *refutation) {
  g_proof.clear();
  // Post-order over the inference DAG, so premises precede their conclusions.
  std::vector<std::pair<Unit *, bool>> todo{{refutation, false}};
  std::vector<Unit *> seen;
  while (!todo.empty()) {
    Unit *u = todo.back().first;
    bool expanded = todo.back().second;
    todo.pop_back();
    if (expanded) {
      ProofStep step;
      step.number = u->number();
      step.rule = static_cast<unsigned>(u->inference().rule());
      for (Unit *p : iterTraits(u->getParents()))
        step.premises.push_back(p->number());
      if (u->isClause())
        for (Literal *l : u->asClause()->iterLits())
          step.literals.push_back({l->functor(), l->polarity()});
      g_proof.push_back(step);
      continue;
    }
    bool already = false;
    for (Unit *s : seen)
      if (s == u) { already = true; break; }
    if (already) continue;
    seen.push_back(u);
    todo.push_back({u, true});
    for (Unit *p : iterTraits(u->getParents()))
      todo.push_back({p, false});
  }
}

} // namespace vampire_ffi

using namespace vampire_ffi;

extern "C" {

/**
 * Build the hard-coded problem and run saturation on it.
 *
 * Returns the number of steps in the refutation, or 0 if none was found. The steps
 * themselves are read back with the accessors below.
 */
uint32_t lean_vampire_run_builtin_problem(lean_obj_arg /* w */);

uint32_t lean_vampire_run_builtin_problem(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  try {
    // Before the reset: the problem's units live in the environment about to be torn
    // down, so destroying it afterwards would reach into freed state.
    delete g_problem;
    g_problem = nullptr;

    Lib::resetGlobalState();
    Lib::Timer::startClock();

    Signature &sig = *env.signature;
    unsigned p = sig.addPredicate("p", 0);
    unsigned q = sig.addPredicate("q", 0);
    g_atoms = {p, q};

    Inference input = NonspecificInference0(UnitInputType::AXIOM, InferenceRule::INPUT);

    Literal *pPos = Literal::create(p, true, {});
    Literal *pNeg = Literal::create(p, false, {});
    Literal *qPos = Literal::create(q, true, {});
    Literal *qNeg = Literal::create(q, false, {});

    Clause *c1 = Clause::fromLiterals({pPos, qPos}, input);   // p ∨ q
    Clause *c2 = Clause::fromLiterals({pNeg}, input);         // ¬p
    Clause *c3 = Clause::fromLiterals({qNeg}, input);         // ¬q

    UnitList *units = nullptr;
    UnitList::push(c3, units);
    UnitList::push(c2, units);
    UnitList::push(c1, units);

    g_problem = new Problem(units);
    // Saturation reaches through env for the problem (getMainProblem()->isHigherOrder()),
    // so this is not optional.
    env.setMainProblem(g_problem);

    // Bound the search cooperatively. Never Timer::reinitialise: that spawns a thread
    // which _Exit()s the process on timeout.
    env.options->setTimeLimitInDeciseconds(50);

    Saturation::ProvingHelper::runVampireSaturation(*g_problem, *env.options);

    Unit *refutation = env.statistics->refutation;
    if (refutation == nullptr) return 0;
    collectProof(refutation);
    return static_cast<uint32_t>(g_proof.size());
  } catch (...) {
    return 0;
  }
}

/** Fields of step `i` of the last refutation. */
uint32_t lean_vampire_step_number(uint32_t i, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return i < g_proof.size() ? g_proof[i].number : 0;
}
uint32_t lean_vampire_step_rule(uint32_t i, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return i < g_proof.size() ? g_proof[i].rule : 0;
}
uint32_t lean_vampire_step_premise_count(uint32_t i, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return i < g_proof.size() ? static_cast<uint32_t>(g_proof[i].premises.size()) : 0;
}
uint32_t lean_vampire_step_premise(uint32_t i, uint32_t j, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  if (i >= g_proof.size() || j >= g_proof[i].premises.size()) return 0;
  return g_proof[i].premises[j];
}
uint32_t lean_vampire_step_literal_count(uint32_t i, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return i < g_proof.size() ? static_cast<uint32_t>(g_proof[i].literals.size()) : 0;
}
/** Predicate number of literal `j` of step `i`. */
uint32_t lean_vampire_step_literal_atom(uint32_t i, uint32_t j, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  if (i >= g_proof.size() || j >= g_proof[i].literals.size()) return 0;
  return g_proof[i].literals[j].first;
}
/** Polarity of literal `j` of step `i`: 1 positive, 0 negated. */
uint32_t lean_vampire_step_literal_polarity(uint32_t i, uint32_t j, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  if (i >= g_proof.size() || j >= g_proof[i].literals.size()) return 0;
  return g_proof[i].literals[j].second ? 1 : 0;
}

/** Index of the `k`th problem atom, so Lean can map predicates back to its own props. */
uint32_t lean_vampire_atom(uint32_t k, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return k < g_atoms.size() ? g_atoms[k] : 0;
}

} // extern "C"
