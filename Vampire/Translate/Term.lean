/-
The `Term` datatype is ported from lean-smt (`Smt/Translate/Term.lean`), Copyright (c)
2021-2022 by the authors listed in that project's AUTHORS file. Released under
Apache 2.0; see `NOTICE`. The rendering to SMT-LIB s-expressions is dropped; this one
is compiled into Vampire's own structures instead.
-/
import Lean

/-!
# The intermediate representation

Translation runs in two stages. Translators map Lean `Expr`s onto this small applicative
term language, and `Vampire/Translate/Build.lean` compiles it into Vampire's `Term`s,
`Literal`s and `Formula`s across the FFI.

The stage exists for the same reason it does in lean-smt: it lets a translator be a
pure `MetaM` function returning data, which is testable and cacheable, and confines
every dealing with the prover to one place.

## Why the built-in symbols have SMT-LIB names

`and`, `or`, `not`, `=>`, `=`, `Bool` and friends are spelled as in SMT-LIB rather than
as in TPTP. The translators in `Translate/Prop.lean` and `Translate/Bool.lean` are
ported from lean-smt, and keeping its vocabulary means the ones we have not ported yet
(arithmetic, bit-vectors, datatypes) drop in unchanged. Nothing downstream reads these
names except `Build.lean`, which maps them to Vampire connectives; they are an internal
alphabet, not a serialisation format.

Note in particular that `Bool` marks a *formula* position. Vampire, unlike SMT-LIB,
keeps terms and formulas apart, so a symbol whose result sort is `Bool` becomes a
predicate and everything else becomes a function.
-/


namespace Vampire

/-- A term in the translation's intermediate language. Constructors are postfixed with
`T` to keep them clear of Lean keywords and of `Lean.Expr`. -/
inductive Term where
  /-- A theory literal, e.g. a numeral. -/
  | literalT : String → Term
  /-- A sort, function or predicate symbol, by name. -/
  | symbolT  : String → Term
  /-- A function sort `α → β`. Only appears in declarations. -/
  | arrowT   : Term → Term → Term
  /-- Application, one argument at a time. -/
  | appT     : Term → Term → Term
  /-- Universal quantification over one variable of the given sort. -/
  | forallT  : String → Term → Term → Term
  /-- Existential quantification over one variable of the given sort. -/
  | existsT  : String → Term → Term → Term
  /-- A `let` binding. Vampire has no `$let` in the fragment we build, so `Build.lean`
  rejects this; it exists because the generic traversal can produce it. -/
  | letT     : String → Term → Term → Term
  deriving Inhabited, Repr, BEq

namespace Term

def mkApp2 (f a b : Term) : Term := appT (appT f a) b

def mkApp3 (f a b c : Term) : Term := appT (appT (appT f a) b) c

/-- Split a term into its head and arguments. -/
def asApp (t : Term) : Term × Array Term :=
  go t #[]
where
  go : Term → Array Term → Term × Array Term
    | appT f a, acc => go f (#[a] ++ acc)
    | t, acc => (t, acc)

/-- Split an arrow chain `α₁ → ⋯ → αₙ → β` into `(#[α₁, …, αₙ], β)`. -/
def asArrow (t : Term) : Array Term × Term :=
  go t #[]
where
  go : Term → Array Term → Array Term × Term
    | arrowT a b, acc => go b (acc.push a)
    | t, acc => (acc, t)

/-- A readable rendering, used in error messages and in the `vampire?` dump of the
translation. It is never given back to the prover. -/
protected partial def toString : Term → String
  | literalT l => l
  | symbolT n => n
  | t@(arrowT ..) =>
    let (args, res) := asArrow t
    String.intercalate " → " ((args.map Term.toString).toList ++ [res.toString])
  | t@(appT ..) =>
    match asApp t with
    | (hd, args) => s!"{hd.toString}({String.intercalate ", " (args.map Term.toString).toList})"
  | forallT n s b => s!"∀ {n} : {s.toString}, {b.toString}"
  | existsT n s b => s!"∃ {n} : {s.toString}, {b.toString}"
  | letT n v b => s!"let {n} := {v.toString}; {b.toString}"

instance : ToString Term := ⟨Term.toString⟩

instance : Lean.ToMessageData Term := ⟨fun t => Lean.MessageData.ofFormat (toString t)⟩

end Term

/-- Names the translation gives a meaning to itself, as opposed to symbols standing for
Lean declarations. `Query` will not try to declare these to Vampire. -/
def builtins : Std.HashSet String :=
  Std.HashSet.ofList
    ["Bool", "true", "false", "not", "and", "or", "=>", "=", "distinct", "ite",
     "forall", "exists"]

end Vampire
