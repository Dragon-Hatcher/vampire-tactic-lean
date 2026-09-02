/-
Ported from lean-smt (`Smt/Attribute.lean`), Copyright (c) 2021-2022 by the authors
listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
Changes: the attribute is `vampire_translate` and it registers `Vampire.Translator`.
-/
import Lean

/-!
# The translator registry

Translation from Lean to first-order logic is open: each fragment of Lean that Vampire
understands contributes a `Translator` and tags it with `@[vampire_translate]`. The
translation loop tries them all, so adding support for a new fragment is a new file, not
a change to the traversal.

This is lean-smt's design, and it is kept deliberately: the same shape lets its
translators for the theories we do not handle yet be ported one at a time.
-/

namespace Vampire.Attribute

open Lean

/-- Environment extension holding the tagged declarations, keyed by the type they have
(`Vampire.Translator`). -/
abbrev VampireExtension :=
  SimpleScopedEnvExtension (Name × Name) (Std.HashMap Name (Std.HashSet Name))

/-- Add a declaration to the set for its type. -/
def addVampireEntry (d : Std.HashMap Name (Std.HashSet Name)) (e : Name × Name) :=
  d.insert e.fst ((d.getD e.fst {}).insert e.snd)

initialize vampireExt : VampireExtension ← registerSimpleScopedEnvExtension {
  name     := `VampireExt
  initial  := {}
  addEntry := addVampireEntry
}

/-- Throw an unexpected type error. -/
def throwUnexpectedType (t : Name) (n : Name) : AttrM Unit :=
  throwError s!"unexpected type at '{n}', `{t}` expected"

/-- Check that the tagged declaration has the type the attribute expects. -/
def validate (n : Name) (t : Name) : AttrM Unit := do
  match (← getEnv).find? n with
  | none      => throwError s!"unknown constant '{n}'"
  | some info =>
    match info.type with
    | Expr.const c .. => if c != t then throwUnexpectedType t n
    | _               => throwUnexpectedType t n

/-- Register an attribute that collects declarations of type `typeName`. -/
def registerVampireAttr (attrName : Name) (typeName : Name) (attrDescr : String) : IO Unit :=
  registerBuiltinAttribute {
    name  := attrName
    descr := attrDescr
    applicationTime := AttributeApplicationTime.afterTypeChecking
    add   := fun decl stx _ => do
      Attribute.Builtin.ensureNoArgs stx
      validate decl typeName
      setEnv (vampireExt.addEntry (← getEnv) (typeName, decl))
    erase := fun declName => do
      let s := vampireExt.getState (← getEnv)
      let s := s.erase declName
      modifyEnv fun env => vampireExt.modifyState env fun _ => s
  }

initialize registerVampireAttr `vampire_translate `Vampire.Translator "Use this function to translate Lean expressions into first-order terms for Vampire."


end Vampire.Attribute
