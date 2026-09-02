# `vampire` tactic for Lean 4

A Lean tactic that discharges goals with the Vampire theorem prover and replays
the result as a kernel-checked Lean proof.

**Status: FFI reachable, no goal translation.** The tactic calls into an embedded
Vampire and reads its live signature, then admits the goal — so anything it "proves"
depends on `sorryAx`. `Test/Basic.lean` pins that.

    info: vampire: embedded prover live (signature: 0 function symbols, 5 sorts)

The 5 sorts are `$i, $o, $int, $real, $rat`, registered by `Environment::Environment()`
during static initialisation: real Vampire state read from inside Lean's elaborator.

## Design

- **No lean-smt dependency.** The prototype in
  `../bodingbauer-etall/demo/Demo/Hammer.lean` showed the loop works by borrowing
  lean-smt's SMT-LIB printer, but that route means Lean → text → parser → Vampire,
  and a matching inverse mapping to get the proof back onto the original goal.
- **Talk to Vampire over an FFI instead.** Build Vampire's term representation
  directly from `Expr`, so the symbol correspondence is held in memory rather than
  recovered from mangled identifiers, and there is no printing or reparsing.
- **Replay through VampLean.** Proof checking uses the upstream reconstruction
  lemmas (`vamp_lean`), so this library owns translation and replay, not the
  inference-level lemmas.

## Layout

    Vampire.lean         library root
    Vampire/Ffi.lean     typed bindings to the embedded prover
    Vampire/Tactic.lean  the `vampire` frontend (calls the FFI, then admits)
    ffi/vampire_ffi.cpp  the C++ shim
    Test/Basic.lean      smoke tests; `#print axioms` shows `sorryAx` until the
                         translation and replay layers land
    docs/vampire-global-state.md
                         audit of Vampire's shared mutable state

## Building against Vampire

The shim links `libvampire_lib.a`, a static archive added to the fork's `CMakeLists`:

    add_library(vampire_lib STATIC $<TARGET_OBJECTS:common>)

Build it before `lake build`:

    cmake --build ../bodingbauer-etall/vampire-leancheck/build --target vampire_lib

`Vampire` is compiled with `precompileModules := true` so the FFI symbols are available
to the interpreter, which is where tactics run.

## Build

    lake build

Requires Lean 4.33.0 (pinned in `lean-toolchain`).
