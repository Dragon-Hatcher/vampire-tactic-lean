/-!
# FFI boundary to the embedded Vampire

Everything crossing this boundary is structured: integers now, and Vampire's own term
and clause representations later. Problems, formulas and proofs are never serialised
to text and reparsed — that is precisely what the `--input_syntax`/`--proof leancheck`
route does, and what this exists to replace.

The C++ side is `ffi/vampire_ffi.cpp`, linked against a static archive of Vampire
(`vampire_lib`). Vampire's shared mutable state is audited in
`docs/vampire-global-state.md`; the short version is that `Lib::env` and friends are
process-global and never reset, so this currently supports one prover run per process.
-/

namespace Vampire.Ffi

/-- Status of an FFI call. Mirrors the enum in `ffi/vampire_ffi.cpp`. -/
inductive Status where
  /-- The call succeeded. -/
  | ok
  /-- Vampire's global environment was not constructed. -/
  | noEnv
  /-- A C++ exception escaped into the shim. -/
  | exception
  /-- The C++ side returned a code this side does not know. -/
  | unknown (code : UInt32)
  deriving Repr, DecidableEq, Inhabited

/-- Decode a raw status code from the shim. -/
def Status.ofCode : UInt32 → Status
  | 0 => .ok
  | 1 => .noEnv
  | 2 => .exception
  | c => .unknown c

instance : ToString Status where
  toString
    | .ok => "ok"
    | .noEnv => "vampire environment not constructed"
    | .exception => "C++ exception crossed the FFI boundary"
    | .unknown c => s!"unknown status {c}"

@[extern "lean_vampire_init"]
private opaque initRaw : BaseIO UInt32

@[extern "lean_vampire_signature_functions"]
private opaque signatureFunctionsRaw : BaseIO UInt32

@[extern "lean_vampire_signature_type_cons"]
private opaque signatureTypeConsRaw : BaseIO UInt32

/-- Confirm the embedded prover is linked and its environment is live. -/
def init : BaseIO Status := do
  return Status.ofCode (← initRaw)

/-- Number of function symbols in Vampire's current signature. -/
def signatureFunctions : BaseIO UInt32 := signatureFunctionsRaw

/-- Number of type constructors (sorts) in Vampire's current signature. -/
def signatureTypeCons : BaseIO UInt32 := signatureTypeConsRaw

end Vampire.Ffi
