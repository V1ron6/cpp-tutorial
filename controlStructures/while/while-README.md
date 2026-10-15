# Mini-lesson: `while` and `do-while` Loops

## The idea

Loops repeat work. A `while` loop checks a condition before each repetition. A `do-while` loop checks after running the body, which guarantees at least one execution.

Read `while.cpp` first, then `do-while.cpp`. Identify three things in each loop: the condition, the work being repeated, and the update that eventually makes the condition false.

## Avoid an endless loop

If a loop's condition stays true forever, the program may never stop. For example, if a counter starts at 1 and the loop condition is `counter <= 5`, the body must change the counter so it eventually becomes greater than 5.

A `while` loop suits repetition that might not happen at all. A `do-while` loop suits an action that should happen at least once, such as showing a menu before asking whether to continue.

## Run it

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o while-example controlStructures/while/while.cpp
./while-example

g++ -std=c++17 -Wall -Wextra -Wpedantic -o do-while-example controlStructures/while/do-while.cpp
./do-while-example
```

## Practice

1. Count from 1 to 5.
2. Count down from 5 to 1.
3. Change the initial value so the `while` condition is false at the start. What happens?
4. Try the same condition with `do-while`. How does the result differ?

**Challenge:** Make a menu repeat until the user enters 0. Explain how the input changes the loop's condition.
