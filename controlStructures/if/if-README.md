# Mini-lesson: `if`, `else if`, and `else`

## The idea

A condition is a question that evaluates to `true` or `false`. `if` allows a program to take an action only when that question is true. `else` provides a fallback, while `else if` checks another condition when earlier conditions were false.

Read `basicIf.cpp`, `basic_if_else.cpp`, and `basic_if_elseif_else.cpp` in that order. Notice how each file adds another possible path.

## Read a condition carefully

- `age >= 18` means age is at least 18.
- `score == 100` checks equality.
- `score != 0` checks inequality.
- `&&` means both conditions must be true; `||` means at least one must be true; `!` reverses a Boolean value.

A common beginner mistake is writing `=` where `==` is intended. Assignment changes a value; equality asks whether two values are equal.

## Try it

Compile an example from the repository root:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o decision controlStructures/if/basic_if_else.cpp
./decision
```

Change the condition and test values on both sides of the boundary. If the rule is “18 or older,” test 17, 18, and 19 rather than testing only one age.

## Practice

1. Check whether a number is positive, negative, or zero.
2. Classify a score into three ranges.
3. Combine two conditions, such as “the user is logged in **and** the account is active.”

**Challenge:** Ask for an age and explain the result for values below, equal to, and above 18. Consider what should happen if the user enters text instead of a number.
