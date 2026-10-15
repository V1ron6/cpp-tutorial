# C++ Tutorial

A beginner-friendly collection of self-contained C++ examples, organized by the topics and folders already used in this repository. The examples progress from basic output and input through variables, arithmetic, functions, control structures, and small console projects.

The goal is to learn by reading, compiling, changing, and running each example. These are learning exercises rather than production banking or game software.

## Learning path

| Order | Folder | Topics | Guide |
|---:|---|---|---|
| 1 | `helloworld/` | `main`, headers, console output | [Hello World guide](helloworld/helloworld-README.md) |
| 2 | `input/` | `std::cin`, `std::getline`, whitespace | [Input guide](input/input-README.md) |
| 3 | `variables/` | Types, initialization, constants, namespaces, aliases | [Variables guide](variables/variables-README.md) |
| 4 | `arithimetic/` | Arithmetic operators and `<cmath>` | [Arithmetic guide](arithimetic/arithimetic-README.md) |
| 5 | `controlStructures/` | Conditions, `switch`, ternary, loops, nested loops | [Control structures guide](controlStructures/controlStructures-README.md) |
| 6 | `functions/` | Function calls, parameters, return values, overloading | [Functions guide](functions/functions-README.md) |
| 7 | `milestones/` | Practice projects: tic-tac-toe and a console banking simulation | [Milestones guide](milestones/milestones-README.md) |

## Requirements

- A C++ compiler such as GCC (`g++`) or Clang.
- A terminal or command prompt.
- Basic familiarity with navigating folders.

Check that a compiler is installed with `g++ --version`.

## Compile and run an example

Run the commands from the repository root. Replace the paths and output name with the example you want to try.

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o hello helloworld/hello.cpp
./hello
```

On Windows, run the generated program as `hello.exe`. Every `.cpp` file is intended to be compiled independently; do not compile all examples into one executable because many contain their own `main()` function.

## Practice projects

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o ticgame milestones/game/ticgame.cpp
./ticgame

g++ -std=c++17 -Wall -Wextra -Wpedantic -o bankapp milestones/bank/bankapp.cpp
./bankapp
```

The banking program is a local learning simulation. It does not connect to a real account, persist data, or implement transfers.

## Learning workflow

1. Open the topic's README before the source file.
2. Compile and run the example unchanged.
3. Predict what a small change will do, then try it.
4. Test ordinary input and edge cases, including invalid input where relevant.
5. Read compiler warnings instead of ignoring them.

## Repository conventions

- Keep new examples inside the existing topic folders; do not create unrelated topics.
- Keep examples self-contained and beginner-readable.
- Include the standard headers actually used by each file and prefer explicit `std::` names.
- Update the relevant README whenever an example changes.
- Build outputs should not be committed; see [`.gitignore`](.gitignore).

## Recent maintenance

The examples and their guides have been reviewed for compile warnings, unsafe input handling, misleading comments, unused headers, and documentation gaps. Both tic-tac-toe versions now handle turns, occupied cells, invalid input, wins, draws, and replay. The banking exercise now validates menu and amount input and records transactions within its fixed history capacity. See each topic README for details.

## License

AGPL-3.0. See [LICENSE](LICENSE).
