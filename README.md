# Learn C++ by Building and Experimenting

Welcome! This repository is a hands-on C++ learning path, not merely a collection of files to compile. Each folder introduces an idea, explains why it matters, and gives small experiments to try before moving on. **Read, predict, run, change, and explain**—that cycle is how the concepts become yours.

## How to use this tutorial

For every lesson:
1. Read the explanation and identify the new idea.
2. Open the named `.cpp` example and read it from top to bottom.
3. Before running it, predict what it will print or how it will behave.
4. Compile and run it. Compare the result with the prediction.
5. Change one thing at a time and run it again.
6. Complete the practice tasks without copying the original example line for line.

You do not need to understand every symbol immediately. When something is unfamiliar, trace it: what value enters, what operation happens, and what value leaves?

## Learning path

| Stage | Existing folder | What you will learn | Start here |
|---:|---|---|---|
| 1 | `helloworld/` | Program structure, `main()`, output | [Hello World lesson](helloworld/helloworld-README.md) |
| 2 | `input/` | Getting text and numbers from a person | [Input lesson](input/input-README.md) |
| 3 | `variables/` | Storing values, types, constants, names | [Variables lesson](variables/variables-README.md) |
| 4 | `arithimetic/` | Calculations and math functions | [Arithmetic lesson](arithimetic/arithimetic-README.md) |
| 5 | `controlStructures/` | Decisions, repetition, and flow | [Control structures lesson](controlStructures/controlStructures-README.md) |
| 6 | `functions/` | Reusable code, parameters, return values | [Functions lesson](functions/functions-README.md) |
| 7 | `milestones/` | Apply the concepts in console projects | [Project lessons](milestones/milestones-README.md) |

The folder name `arithimetic/` is intentionally preserved to avoid breaking existing paths.

## Set up your compiler

You need a C++ compiler such as GCC (`g++`) or Clang and a terminal. Check the installation with:

```sh
g++ --version
```

From the repository root, compile and run the first example:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o hello helloworld/hello.cpp
./hello
```

On Windows, run `hello.exe` instead of `./hello`. These flags select C++17 and ask the compiler to report common problems. They are useful, but **they are not the lesson itself**: spend most of your time understanding and changing the code.

Each `.cpp` file is a small, separate program and may contain its own `main()`. Compile one example at a time rather than combining every file into one executable.

## What the examples are teaching

- `helloworld/`: how a C++ program starts and sends text to the console.
- `input/`: the difference between reading one token and reading a whole line.
- `variables/`: how values are represented and named, and why types matter.
- `arithimetic/`: how expressions calculate new values and how precedence affects results.
- `controlStructures/`: how a program chooses between paths and repeats work.
- `functions/`: how to give a task a name, pass information in, and return a result.
- `milestones/`: how smaller concepts work together in games and a banking simulation.

## The most useful habit: ask “why?”

If an example prints `12`, do not stop at knowing that it prints `12`. Ask which values were used, which operator was applied, whether the values were integers or decimals, and what would happen if one value changed. Try to explain the answer in your own words before checking the README again.

## Practice projects

Build and run these only after reviewing their project lessons:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o ticgame milestones/game/ticgame.cpp
./ticgame

g++ -std=c++17 -Wall -Wextra -Wpedantic -o bankapp milestones/bank/bankapp.cpp
./bankapp
```

The banking program is a local learning simulation. It does not connect to real accounts, save data between runs, or implement transfers. Do not use it for real money.

## Repository habits

Keep new examples in the existing topic folders, use descriptive comments when they explain *why* something happens, and update the relevant README when a lesson changes. Build outputs should not be committed; see [`.gitignore`](.gitignore).

## License

AGPL-3.0. See [LICENSE](LICENSE).
