# Learn C++ by Building and Experimenting

Welcome to this hands-on C++ tutorial. The repository is organised as a learning path: start with small programs, understand each new idea, practise it, and then combine those ideas in projects.

The goal is not simply to get code to compile. The goal is to understand **why the code works, how to change it, and how to write a similar program independently**.

## How to learn from each lesson

Use this routine for every example:

1. **Read the lesson README.** Learn the purpose of the concept and the vocabulary used.
2. **Open the `.cpp` file.** Read the code from top to bottom and identify what each important line contributes.
3. **Predict first.** Write down what you think the program will print or do before running it.
4. **Run the example.** Compare the actual result with your prediction.
5. **Experiment.** Change one value, condition, loop limit, or input method at a time.
6. **Explain it back.** In your own words, explain why the output changed.
7. **Practise without copying.** Complete the exercises in the lesson README, then try the challenge.

When a program surprises you, trace the data: **what value enters, what operation happens, and what value leaves?** You do not need to memorise every symbol at once. Understanding grows by repeatedly reading, testing, and explaining.

## Learning roadmap

Follow the stages in order if you are new to C++. If you already understand a stage, use its practice questions to check your knowledge before moving on.

| Stage | Existing folder | Main ideas | Start here |
|---:|---|---|---|
| 1 | `helloworld/` | Program structure, `main()`, console output | [Hello World lesson](helloworld/helloworld-README.md) |
| 2 | `input/` | Reading a word or a complete line | [Input lesson](input/input-README.md) |
| 3 | `variables/` | Types, variables, constants, namespaces, aliases | [Variables lesson](variables/variables-README.md) |
| 4 | `arithimetic/` | Arithmetic operators, expressions, math functions | [Arithmetic lesson](arithimetic/arithimetic-README.md) |
| 5 | `controlStructures/` | Decisions, loops, nested loops, and alternative branches | [Control structures lesson](controlStructures/controlStructures-README.md) |
| 6 | `functions/` | Defining functions, parameters, return values, overloading | [Functions lesson](functions/functions-README.md) |
| 7 | `datastructures/array/` | Arrays, indexes, iteration, searching, passing arrays to functions | [Array lesson](datastructures/README.md) |
| 8 | `milestones/` | Combine earlier concepts in complete console projects | [Project lessons](milestones/milestones-README.md) |

The folder name `arithimetic/` is intentionally preserved so existing paths continue to work.

## What is inside each topic?

### `helloworld/` — Start with a complete program

Learn what `#include <iostream>`, `main()`, braces, `std::cout`, and `return 0;` do. Begin with [the first lesson](helloworld/helloworld-README.md).

### `input/` — Let a program receive information

Compare `std::cin` with `std::getline`, and learn why reading a single token differs from reading a full line. The [input lesson](input/input-README.md) includes experiments and practice.

### `variables/` — Store and name information

Explore `int`, `double`, `char`, `bool`, `std::string`, constants, namespaces, and type aliases. Use [the variables guide](variables/variables-README.md) to connect declarations to the values printed by each program.

### `arithimetic/` — Make calculations

Practise arithmetic operators, expression evaluation, operator precedence, and standard math functions. Start with [the arithmetic guide](arithimetic/arithimetic-README.md).

### `controlStructures/` — Control the flow of a program

This folder is divided into smaller lessons:

- [`if/`](controlStructures/if/if-README.md) — make decisions with `if`, `else if`, and `else`.
- [`switch/`](controlStructures/switch/switch-README.md) — select an action from several cases.
- [`ternary/`](controlStructures/ternary/ternary-README.md) — write a short conditional expression.
- [`for/`](controlStructures/for/for-README.md) — repeat work with a `for` loop.
- [`while/`](controlStructures/while/while-README.md) — repeat while a condition remains true, including `do-while`.
- [`nestedloops/`](controlStructures/nestedloops/nestedloops-README.md) — place one loop inside another and trace how the iterations interact.

Read the [control structures overview](controlStructures/controlStructures-README.md) before exploring individual lessons.

### `functions/` — Give reusable work a name

Learn to define and call functions, pass arguments through parameters, return values, and overload a function name. Read [the functions guide](functions/functions-README.md).

### `datastructures/array/` — Work with collections of values

The array examples build from declaring and assigning an array to reading user input, filling and iterating over elements, searching, passing arrays to functions, and using a multidimensional array. Read [the array lesson](datastructures/README.md) and work through the examples in sequence.

### `milestones/` — Combine concepts into projects

Projects are where earlier ideas begin to work together. Read each project guide before changing the source.

- [Milestone overview](milestones/milestones-README.md)
- [Tic-tac-toe](milestones/tictactoe/game-README.md) — board state, valid moves, turns, win detection, and draws.
- [Console banking simulation](milestones/bank/bank-README.md) — menu choices, balances, validation, and transaction history.
- [`bubblesort.cpp`](milestones/bubblesort/bubblesort.cpp) — practise sorting values by repeatedly comparing neighbouring elements.
- [`rockpaperscissors.cpp`](milestones/rockpaperscissors/rockpaperscissors.cpp) — practise game rules, user input, and conditional outcomes.

The project folders are practice areas, not unrelated additions to the learning path.

## Set up a compiler

You need a C++ compiler such as GCC (`g++`) or Clang and a terminal. Check whether GCC is available:

```sh
g++ --version
```

From the repository root, compile and run the first example:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o hello helloworld/hello.cpp
./hello
```

On Windows, run `hello.exe` instead of `./hello`. The flags select the C++17 language standard and ask the compiler to report common issues. Compiler commands are tools for testing your understanding; they are not a substitute for studying the code.

Each `.cpp` file is a separate example and may contain its own `main()`. **Compile one example at a time** rather than combining all source files into one executable.

## Build and run a project

For example, compile tic-tac-toe from the repository root:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o ticgame milestones/tictactoe/ticgame.cpp
./ticgame
```

Compile the updated version separately if you want to compare it:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o ticgame-update milestones/tictactoe/ticgameUpdate.cpp
./ticgame-update
```

Build the banking simulation:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o bankapp milestones/bank/bankapp.cpp
./bankapp
```

Use the exact paths shown in the repository. If you are unsure about a command, open that topic's README and adapt its example.

**Safety note:** the banking program is a local learning simulation. It does not connect to real accounts, provide authentication, persist information between runs, or implement transfers. Never use it to manage real money.

## How to know you are ready to move on

Before leaving a topic, try to do these things without looking at the solution:

- Explain the central concept in plain language.
- Predict what a short example will do.
- Make a small change and explain its effect.
- Identify at least one invalid or boundary case.
- Complete a practice task using the concept in a slightly different situation.

If you cannot do one yet, revisit the example and experiment again. Needing several attempts is part of learning programming.

## Repository habits

- Keep new examples inside the existing topic folders.
- Use descriptive names and comments that explain important reasoning.
- Update the relevant README when adding or changing an example.
- Keep generated executable files out of the repository; see [`.gitignore`](.gitignore).
- Prefer understanding and explaining a program over copying it until it works.

## License

This project is licensed under AGPL-3.0. See [LICENSE](LICENSE).
