# Lesson 5: Control the Flow of a Program

## The idea

So far, examples mostly run from top to bottom. Control structures let a program choose what to do or repeat an action. This is where programs start responding to different situations instead of producing the same output every time.

## Learn in this order

| Folder | Question it answers | Examples |
|---|---|---|
| `if/` | Should this block run when a condition is true? | `basicIf.cpp`, `basic_if_else.cpp`, `basic_if_elseif_else.cpp` |
| `ternary/` | How can a simple two-way choice be expressed as an expression? | `ternary.cpp` |
| `switch/` | Which action matches one of several discrete cases? | `switch.cpp` |
| `while/` | Should a condition be checked before each repetition? | `while.cpp`, `do-while.cpp` |
| `for/` | How can a loop keep its counter and stopping condition together? | `for/forloop.cpp` |
| `nestedloops/` | How can one loop run inside another? | `nestedforloop.cpp`, `nestedwhileloop.cpp` |

## Conditions are questions

A condition such as `score >= 50` evaluates to `true` or `false`. An `if` statement runs its body when the condition is true; `else` provides an alternative. Use `else if` when more than two outcomes are possible. Be careful not to confuse assignment (`=`) with equality comparison (`==`).

The ternary operator `condition ? valueIfTrue : valueIfFalse` is best for a short choice between expressions. If each branch needs several statements, use `if/else` because it is easier to read. A `switch` is useful when comparing one expression against several specific cases, such as menu choices.

## Repetition and loops

- A `while` loop checks its condition before each pass, so it may run zero times.
- A `do-while` loop runs its body once before checking the condition, so it runs at least once.
- A `for` loop commonly puts initialization, continuation condition, and update in one place.
- Nested loops are useful for grids and tables. The inner loop completes its work for each pass of the outer loop.

Every loop needs a path toward stopping. If the condition never becomes false and there is no `break`, the program may run forever.

## Run, predict, change

Compile one example at a time from the repository root. For example:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o loop controlStructures/for/forloop.cpp
./loop
```

Before running, write down how many times you expect the loop to execute. Then change the starting value, condition, or update and compare the result.

## Practice

1. Use `if/else` to classify a number as positive or non-positive.
2. Use `switch` to print a message for a menu choice.
3. Print the numbers from 1 to 10 using a `while` loop, then a `for` loop.
4. Use nested loops to print a small rectangle of characters.
5. Explain why a `do-while` loop is useful for a menu that should appear at least once.

**Challenge:** Make a console menu that keeps showing until the user chooses Exit. Validate the choice and explain which loop and decision structure you used and why.

## How to trace a decision or loop

For every condition, ask: **What value is checked? What makes it true? Which block runs?** In the age examples, test values just below, exactly at, and just above the boundary. The `else if` example checks invalid ages first, then checks the age limit, and finally reaches `else` only when neither earlier condition matched.

For every loop, write down its condition and the value that changes. A `for` loop keeps initialization, condition, and update together; a `while` loop checks before each repetition; a `do-while` checks after the body. In the rectangle example, the outer loop counts rows and the inner loop prints each column.

**Practice:** Draw a flowchart for one `if/else` example, then trace a loop using a small input so each repetition can be followed manually.
