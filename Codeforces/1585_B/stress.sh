#!/usr/bin/env bash
# Usage: stress.sh <dir> <base_name> <full_solution_file>
DIR="$1"
NAME="$2"
SOLUTION="$3"
BIN_DIR="$DIR/.bin"
mkdir -p "$BIN_DIR"

SOL_BIN="$BIN_DIR/$NAME"
BRUTE_BIN="$BIN_DIR/brute"
GEN_BIN="$BIN_DIR/gen"

/opt/homebrew/bin/g++-15 -std=c++17 -O2 -o "$SOL_BIN" "$SOLUTION" || exit 1
/opt/homebrew/bin/g++-15 -std=c++17 -O2 -o "$BRUTE_BIN" "$DIR/brute.cpp" || exit 1
/opt/homebrew/bin/g++-15 -std=c++17 -O2 -o "$GEN_BIN" "$DIR/gen.cpp" || exit 1

for ((tc = 1; tc <= 1000; tc++)); do
    "$GEN_BIN" > "$DIR/input.txt"
    "$SOL_BIN" < "$DIR/input.txt" > "$DIR/output.txt"
    "$BRUTE_BIN" < "$DIR/input.txt" > "$DIR/expected.txt"

    if ! diff -w "$DIR/output.txt" "$DIR/expected.txt" > /dev/null; then
        echo "Mismatch found on test $tc"
        echo "--- input.txt ---"
        cat "$DIR/input.txt"
        echo "--- output.txt ---"
        cat "$DIR/output.txt"
        echo "--- expected.txt ---"
        cat "$DIR/expected.txt"
        exit 1
    fi
done

echo "Stress passed 1000 tests"
