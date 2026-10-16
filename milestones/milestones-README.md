# Milestones: Put the Concepts Together

A milestone is a small project that combines ideas from earlier lessons. Use the projects to practise planning, reading code, testing decisions, and making a change without losing track of how the program works.

## Projects

### 1. Tic-tac-toe

Read the [tic-tac-toe project lesson](tictactoe/game-README.md). The program tracks a board, alternating turns, valid moves, winning lines, and draws. Start with one complete turn and follow it from input to output before comparing the two implementations.

### 2. Console banking simulation

Read the [banking project lesson](bank/bank-README.md). This project practises menu choices, variables, arithmetic, validation, and transaction history. It is a learning simulation only, not real banking software.

### 3. Bubble sort

Open [`bubblesort/bubblesort.cpp`](bubblesort/bubblesort.cpp). This example uses nested loops and comparisons to arrange numbers in ascending order by swapping neighbouring values that are in the wrong order.

As you read it, trace one pass through the inner loop. Which two values are compared? Under what condition are they swapped? What happens to the largest value after a complete pass?

### 4. Rock, paper, scissors

Open [`rockpaperscissors/rockpaperscissors.cpp`](rockpaperscissors/rockpaperscissors.cpp). This game combines input, functions, a random computer choice, `switch` statements, and conditional logic.

Try each possible player choice and explain how the program decides between a win, loss, and tie. Then consider how invalid input is handled and what would be needed to play multiple rounds.

## A method for understanding a larger program

1. Find `main()` and identify the order in which the program's steps run.
2. Identify the important data: what does the program need to remember?
3. Find each function call and read the function's definition when it is reached.
4. Trace one complete action from input through decisions and state changes to output.
5. Test a normal case, a boundary case, and invalid input.
6. Explain the result before looking at the source again.

## Project practice

For each project, run the original version first. Choose one small improvement, write down what you expect it to change, implement it, and test it. Examples:

- **Tic-tac-toe:** make the board coordinates easier to understand.
- **Banking simulation:** improve the message shown when an operation is rejected.
- **Bubble sort:** print the array after each pass so the sorting process is visible.
- **Rock, paper, scissors:** let the user play another round and keep a score.

Keep notes about what changed and why. A useful project is one whose behaviour and logic can be explained, not merely one that happens to run.

## Build examples

Run these from the repository root:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o ticgame milestones/tictactoe/ticgame.cpp
./ticgame

g++ -std=c++17 -Wall -Wextra -Wpedantic -o bankapp milestones/bank/bankapp.cpp
./bankapp

g++ -std=c++17 -Wall -Wextra -Wpedantic -o bubblesort milestones/bubblesort/bubblesort.cpp
./bubblesort

g++ -std=c++17 -Wall -Wextra -Wpedantic -o rps milestones/rockpaperscissors/rockpaperscissors.cpp
./rps
```

**Safety note:** the banking program is a local learning exercise. It does not connect to real accounts, provide authentication, or save information between runs. Do not use it to manage real money.
