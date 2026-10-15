# game — tic-tac-toe

Two console implementations of a two-player tic-tac-toe game. They combine arrays, functions, loops, conditionals, character values, and input validation.

| File | What it demonstrates |
|---|---|
| `ticgame.cpp` | A direct implementation with a `makeMove()` helper and named Player 1 / Player 2 turns. |
| `ticgameUpdate.cpp` | An updated iteration that retains `switchPlayer()`, `signassign()`, `Move()`, and `newgame()` helpers. |

## Build and run

From the repository root:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o ticgame milestones/game/ticgame.cpp
./ticgame

g++ -std=c++17 -Wall -Wextra -Wpedantic -o ticgame-update milestones/game/ticgameUpdate.cpp
./ticgame-update
```

Choose positions 1–9, matching the numbered board from left to right and top to bottom. Players alternate between `X` and `O`. The game announces a win or draw and asks whether to play again.

## Fixes and behavior

- Corrected the row-win check to use column index `2`, not the out-of-bounds index `3`.
- Validate that input is a whole number from 1 through 9 before calculating a board index.
- Reject occupied cells and keep asking until the current player makes a valid move.
- Use logical `||` for logical conditions.
- Check rows, columns, and both diagonals for a win.
- Detect a draw after nine valid moves and support replay by resetting the board.
- Handle end-of-input cleanly rather than using an invalid or uninitialized position.
- Removed unused parameters and headers so strict compiler-warning checks are clean.

## Try changing it

- Change the symbols used for the players.
- Add a move counter or score across rounds.
- Experiment with the win-checking function and test each row, column, and diagonal.

The project is a learning exercise; its board and game state are kept in memory only.
