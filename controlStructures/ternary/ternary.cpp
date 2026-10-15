/*
 * LESSON: The conditional operator
 *
 * What to learn: The ternary expression `condition ? value_if_true : value_if_false` chooses one of two values. It is best when the choice is short; use if/else for more complex actions.
 * Try it: Use a ternary expression to choose a label such as "adult" or "minor", then print the selected label.
 * Check your understanding: What value does the expression produce?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>

/*
  ternary is a control structure that works similar to if/else,
  just that ternary is an inline CONDITIONAL EXPRESSION, not a
  statement -- it evaluates to a value.

  eg: condition ? valueIfTrue : valueIfFalse;
*/

// Keep the ternary choice small: it produces one of two values.
int main() {
    int age;

    std::cout << "Enter age: ";
    std::cin >> age;

    // Works, but abuses the ternary: each branch is a whole `std::cout`
    // statement chosen for its side effect, not a value. Legal because
    // `operator<<` returns the stream, but it reads like an if/else
    // wearing a ternary costume.
    age >= 18 ? std::cout << "Welcome" << std::endl : std::cout << "Go home" << std::endl;

    // Idiomatic use: the ternary picks which VALUE to print, and there's
    // a single std::cout call either way.
    std::cout << (age >= 18 ? "Welcome" : "Go home") << std::endl;

    return 0;
}
