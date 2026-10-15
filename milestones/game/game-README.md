# Project Lesson: Tic-tac-toe

## The goal

Tic-tac-toe is a small game with a surprising number of programming ideas: a two-dimensional board, alternating turns, input validation, repeated play, and checking several possible winning lines. The project brings together variables, conditions, loops, and input handling.

## How to explore the code

There are two implementations in this folder:

- `ticgame.cpp`
- `ticgameUpdate.cpp`

Read one version at a time. Start with the board representation, then find where a move is requested, how the chosen cell is checked, how the current player changes, and how the game decides to stop. Compare the two files only after understanding one complete turn.

## The logic of a turn

A typical turn follows this sequence:
1. Display the current board.
2. Ask the current player for a row and column.
3. Check that the input is valid and the selected cell is empty.
4. Place the player's mark only after validation succeeds.
5. Check the rows, columns, and diagonals for a win.
6. If nobody has won, check whether the board is full. If not, change turns.

The order matters. For example, an invalid move should not change the board or switch the player. A full board with no winning line is a draw.

## Build and play

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o ticgame milestones/game/ticgame.cpp
./ticgame
```

If you want to compare the other version, use a different output name and compile it separately.

## Learn by testing

Try to reproduce these cases deliberately:

- a player chooses an occupied cell;
- a player enters an out-of-range row or column;
- one player wins across a row;
- one player wins down a column or diagonal;
- the board fills without a winner;
- a player chooses to play again or stop.

## Practice extensions

1. Change the board display so the row and column coordinates are obvious.
2. Add a short message when a move is rejected and explain why.
3. Identify the repeated winning-line checks. Could a helper function make the code easier to read?
4. Keep score across replayed games without confusing the score with the current board.

**Challenge:** Before editing, draw a flowchart of one turn. Then compare your flowchart with the order of operations in the code. This project is complete when the logic can be explained as clearly as it can be played.

## Trace one complete turn

In either source file, start at `main()` and follow the call to display the board, request a move, count the move, check for a win, and either finish or switch players. Then open each helper function when it is called:

- `displayBoard` turns the 2D array into readable rows and columns.
- `Move` / `makeMove` checks that input is numeric, within 1–9, and not already occupied.
- `checkWin` checks rows, columns, and diagonals.
- `newgame` / `resetBoard` restores the labels for a fresh round.

The conversion `index = position - 1` matters because the user sees positions 1–9 while C++ arrays use indexes 0–8. `index / 3` selects the row and `index % 3` selects the column.

**Practice:** Write down a sequence of moves that wins diagonally. Then test an occupied square, an out-of-range number, and a full board with no winner.
