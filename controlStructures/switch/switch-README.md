# Mini-lesson: `switch` and Menu Choices

## The idea

A `switch` compares one expression with a set of `case` labels. It works well for discrete choices such as numbered menu options. Each case describes what to do when the expression matches that value.

Open `switch.cpp`. Trace one possible input from the expression in `switch` to the matching `case` and its statements.

## Why `break` matters

In a traditional `switch`, `break` exits the switch statement. Without it, execution can continue into the next case (fall-through). A `default` branch handles values that do not match any listed case; it is a useful place to explain that a menu choice was invalid.

## Run and experiment

Compile the file from the repository root:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o choices controlStructures/switch/switch.cpp
./choices
```

Try a valid choice, another valid choice, and a value not listed in the cases. Notice whether each input reaches the expected branch.

## Practice

1. Add a menu option and its matching case.
2. Add or improve the `default` message.
3. Explain why `switch` is a better fit for a numbered menu than for checking whether a score is greater than 50.

**Challenge:** Create a four-option mini calculator menu. The goal is to practise selection, not to build a complete calculator yet.
