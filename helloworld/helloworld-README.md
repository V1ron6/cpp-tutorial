# Lesson 1: Your First C++ Program

## The idea

A program is a set of instructions the computer follows. In C++, execution begins in `main()`. The first example is deliberately small so that every line can be understood.

Open [`hello.cpp`](hello.cpp) and look at its parts:

- `#include <iostream>` makes standard input/output tools available, including `std::cout`.
- `int main()` defines the starting point of this program.
- The braces `{ }` mark the body of the function.
- `std::cout` sends text to the console.
- `<<` passes the text to the output stream; it is not the same as a comparison operator.
- `"..."` creates a string literal, and `;` ends the statement.
- `return 0;` signals that the program finished successfully.

## Run it

From the repository root:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -o hello helloworld/hello.cpp
./hello
```

Read the output, then locate the exact line responsible for producing it. The compiler translates the source code into a program; the program then runs and follows the instructions in `main()`.

## Experiment

1. Change the message inside the quotation marks.
2. Add a second `std::cout` statement.
3. Put `
` inside a string to create a line break, or use `std::endl` to print a newline and flush the stream.
4. Remove a semicolon temporarily and compile. Read the diagnostic, restore the semicolon, and compile again.

## Check your understanding

- Why is `<iostream>` included?
- Where does execution begin?
- What is the difference between the source file and the program produced by the compiler?

**Challenge:** Print a three-line introduction using three output statements. Do not move to the next lesson until you can explain what each line in `hello.cpp` does.

## Walk through the actual source

In `hello.cpp`, read the program in this order:

1. `#include <iostream>` makes the standard console stream available.
2. `int main()` defines the function where execution begins.
3. The braces group the statements belonging to `main`.
4. `std::cout << "hello world\n";` sends the text to the console. The `\n` escape starts a new line.
5. `return 0;` ends the program and reports successful completion.

**Predict first:** What changes if `\n` is removed? What happens if a second `std::cout` statement is added?
