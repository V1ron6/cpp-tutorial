# game — tic-tac-toe

A console tic-tac-toe game combining arrays, functions, loops, and
conditionals. **Still under development** (per the author's own
`.progess.txt` note — kept as-is, typo and all, rather than silently
renamed) — not every known issue below has been fixed, and that's called
out explicitly rather than papered over.

| File | What it is |
|---|---|
| `ticgame.cpp` | The first version: board display, win checking, and placing a move. |
| `ticgameUpdate.cpp` | A later iteration that adds turn-tracking (`switchPlayer`) and sign-assignment (`signassign`) between two sessions/players — the two things `.progess.txt` says were "fixed" — on top of the same board/win/move logic as `ticgame.cpp`. |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o ticgameUpdate ticgameUpdate.cpp && ./ticgameUpdate
```
Enter a number 1-9 to place a mark on the matching board cell (same layout
as a phone keypad, numbered left-to-right, top-to-bottom).

## Bugs fixed (in both files)
- **Out-of-bounds board read** — the row-win check compared
  `board[posX][3]`, but a 3x3 board only has valid columns 0, 1, 2.
  Reading index 3 is undefined behavior and meant a row win could never
  be detected correctly. Fixed to `board[posX][2]`.
- **Segfault from unvalidated input** — `std::cin >> position` was never
  checked. Bad input (a letter) or an exhausted input stream left
  `position` holding garbage, which flowed straight into
  `board[posX][posY]` as an out-of-bounds array index — this reproduced
  as an actual crash while testing. Added a range + stream-state check
  that re-prompts instead of indexing with bad data.
- **`|` instead of `||`** in the occupied-cell check — bitwise OR happened
  to give the same answer here since both sides are boolean, but it
  doesn't short-circuit and is the wrong operator for a logical condition.
- **`ticgame.cpp` only**: `playerSign` and `Cplayer` were declared with no
  initial value and then read (via `checkWin`) before anything ever
  assigned them — undefined behavior. Given starting values
  (`'X'` / `"Player 1"`). `ticgameUpdate.cpp` already initialized its
  equivalents, so it didn't have this bug.
- **`ticgame.cpp` only**: `Move()` detected an already-occupied cell and
  printed a warning, but had no `else` — it placed the mark on top of the
  existing one anyway, silently overwriting it. `ticgameUpdate.cpp` had
  already fixed exactly this (it has the `else`); mirrored that fix back
  into `ticgame.cpp`.

## Known issues (left as-is — these are unfinished features, not bugs to silently "fix")
- In `Move()`, the `while(stillPlaying)` loop's `break` runs
  unconditionally at the end of every pass. Once a move is valid
  (occupied or not), the loop always exits after one iteration — so an
  "already occupied" guess still consumes the player's turn instead of
  letting them pick again. Real retry handling isn't built yet.
- The "play again?" prompt (`con ? "verifying..." : "cannot be empty"`)
  can never actually take the "cannot be empty" branch: `std::cin >> con`
  (reading a `char`) skips whitespace and always lands on some non-zero
  character, so the condition it's checking for can't occur.
- `ticgameUpdate.cpp`'s `switchPlayer()` and `signassign()` each have a
  fallback branch that just prints a placeholder (`"500"`,
  `"$ errno 0x78"`) instead of real error handling. Shouldn't currently be
  reachable given how players are initialized, but it's a placeholder,
  not a handled case.
- `newgame()` in both files is a stub — it prints a message and does
  nothing else (the board is never actually reset).

## Removed
- `tic2.1`, `tic2.2` — compiled ARM64 binaries, same issue as every other
  binary removed from this repo; added to `.gitignore`.
