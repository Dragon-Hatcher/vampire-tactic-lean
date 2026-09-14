#!/bin/bash
# One problem of `problems/`, elaborated with the tactic's tracing on.
#
#     ./scripts/trace-problem.sh ALG033+1 [> trace.log]
#
# The trace holds the TPTP problem the tactic sent, vampire's proof, what
# vampire said for itself, and what each step of the replay cost -- which is
# what to read when a problem fails. The copy is elaborated inside the package
# so that `lean-toolchain` and `LEAN_PATH` are the package's own.
set -e
cd "$(dirname "$0")/.."
stem=$1
[ -n "$stem" ] || { echo "usage: ${0##*/} <problem>" >&2; exit 2; }
src=$(ls problems/*/"$stem".lean)
dir=$(dirname "$src")
work=$(mktemp -d "$PWD/.trace-XXXXXX")
trap 'rm -rf "$work"' EXIT
# After `import Vampire`, which is what registers the trace class.
awk '/^import Vampire$/ { print; print "set_option trace.vampire true"; next } { print }' \
  "$src" > "$work/problem.lean"
# The problem file itself, which the tactic reads from beside the Lean file.
cp "$dir/$stem".p "$work/" 2>/dev/null || cp "$dir/$stem".smt2 "$work/" 2>/dev/null || true
# The libraries lake would load: the worker is started by a native function,
# which `lean` can only call out of a library it has been given.
libs=$(python3 -c "
import json
setup = json.load(open('.lake/build/ir/Vampire/Frontend.setup.json'))
def paths(key):
    return [x['path'] if isinstance(x, dict) else x for x in setup.get(key, [])]
print(' '.join(['--load-dynlib=' + p for p in paths('dynlibs')]
             + ['--plugin=' + p for p in paths('plugins')]))")
LEAN_PATH=$(lake env printenv LEAN_PATH) lean $libs "$work/problem.lean"
