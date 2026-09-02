// FFI shim: embed Vampire in the Lean process.
//
// Vampire is written to be a one-shot executable, and `vampire.cpp` main does three
// things a library must not do:
//
//   * System::setSignalHandlers()  -- installs handlers for SIGSEGV, SIGINT, SIGABRT,
//     ... which would hijack Lean's own handling;
//   * Lib::setMemoryLimit(...)     -- calls setrlimit(RLIMIT_DATA), a process-wide cap
//     that would clamp Lean's heap;
//   * Timer::reinitialise()        -- opens a perf_event fd and installs a wall clock.
//
// None of these live in the core, so an entry point that simply does not call them is
// safe. See docs/vampire-global-state.md for the full audit of shared mutable state,
// which is what constrains calling this more than once per process.

#include <lean/lean.h>

#include "Lib/Environment.hpp"
#include "Kernel/Signature.hpp"
#include "Shell/Options.hpp"
#include "Lib/Reset.hpp"

using namespace Lib;

extern "C" {

/// Status codes returned across the boundary. Structured, never text.
enum : uint32_t {
  VAMPIRE_OK = 0,
  VAMPIRE_ERR_NO_ENV = 1,
  VAMPIRE_ERR_EXCEPTION = 2,
};

/**
 * Check that Vampire's global environment is live in this process.
 *
 * `Lib::env` is a global whose constructor allocates the options, signature, term
 * sharing structure and statistics, and registers the built-in sorts, so it is already
 * set up by the time any Lean code runs. There is nothing to initialise; this only
 * confirms the archive is linked and its static initialisers ran.
 */
uint32_t lean_vampire_init(lean_obj_arg /* w */) {
  try {
    if (env.options == nullptr || env.signature == nullptr || env.statistics == nullptr)
      return VAMPIRE_ERR_NO_ENV;
    return VAMPIRE_OK;
  } catch (...) {
    return VAMPIRE_ERR_EXCEPTION;
  }
}

/**
 * Number of function symbols in the current signature.
 *
 * A freshly constructed environment already holds the built-in type constructors, so
 * this is non-zero: it reads real Vampire state rather than a constant, which is the
 * point of the probe.
 */
uint32_t lean_vampire_signature_functions(lean_obj_arg /* w */) {
  try {
    if (env.signature == nullptr) return 0;
    return static_cast<uint32_t>(env.signature->functions());
  } catch (...) {
    return 0;
  }
}

/** Number of type constructors (sorts) in the current signature. */
uint32_t lean_vampire_signature_type_cons(lean_obj_arg /* w */) {
  try {
    if (env.signature == nullptr) return 0;
    return static_cast<uint32_t>(env.signature->typeCons());
  } catch (...) {
    return 0;
  }
}

/**
 * Reset Vampire's process-global state so another problem can be solved.
 *
 * Without this the library is one-shot: nothing restores the environment, the unit
 * numbering, the term sharing table or the proof singletons between runs. See
 * docs/vampire-global-state.md.
 */
uint32_t lean_vampire_reset(lean_obj_arg /* w */) {
  try {
    Lib::resetGlobalState();
    return VAMPIRE_OK;
  } catch (...) {
    return VAMPIRE_ERR_EXCEPTION;
  }
}

/**
 * Self-test hook: dirty the signature by adding a fresh function symbol, and return
 * the resulting symbol count. Used to show that `lean_vampire_reset` really restores
 * the environment rather than reporting a constant.
 */
uint32_t lean_vampire_selftest_dirty(lean_obj_arg /* w */) {
  try {
    if (env.signature == nullptr) return 0;
    env.signature->addFreshFunction(0, "leanffi_probe");
    return static_cast<uint32_t>(env.signature->functions());
  } catch (...) {
    return 0;
  }
}

} // extern "C"
