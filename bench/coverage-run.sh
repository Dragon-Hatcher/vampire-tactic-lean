#!/bin/bash
# coverage-run.sh <log>: the test suite with VAMPIRE_COVERAGE set to <log> --
# every test module, rebuilt so that it runs, and the smoke and dev problems.
# Then `bench/coverage.py <log>`.
set -u
cd "$(dirname "$0")/.."
log=$(python3 -c 'import os,sys; print(os.path.abspath(sys.argv[1]))' "$1"); : > "$log"
export VAMPIRE_COVERAGE="$log"
for f in test/*.lean; do
  m=$(basename "$f" .lean)
  rm -f .lake/build/lib/lean/test/$m.* .lake/build/ir/test/$m.*
  echo "== test.$m"; lake build test.$m 2>&1 | grep -E "error|Build completed" | head -3
done
python3 scripts/run-problems.py --split smoke -j 1 2>&1 | tail -1
python3 scripts/run-problems.py --split dev -j 1 2>&1 | tail -1
