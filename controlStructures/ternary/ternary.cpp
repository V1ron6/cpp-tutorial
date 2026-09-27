#include <iostream>

/*
  ternary is a control structure that works similar to if/else,
  just that ternary is an inline CONDITIONAL EXPRESSION, not a
  statement -- it evaluates to a value.

  eg: condition ? valueIfTrue : valueIfFalse;
*/

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
