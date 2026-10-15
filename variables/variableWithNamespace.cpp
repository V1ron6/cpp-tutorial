/*
 * LESSON: Namespaces prevent naming collisions
 *
 * What to learn: A namespace groups names under a label. The scope operator :: selects which name you mean, such as first::x.
 * Try it: Add a third namespace containing its own x, then print it.
 * Check your understanding: How does the compiler distinguish first::x from second::x?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>

/*
 namespace allows you to give the same variable name a different
 value depending on the context/purpose it belongs to.
*/

// The namespace name qualifies x, allowing another namespace to also define x.
namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    int x = 0;

    std::cout << "x first namespace value " << first::x << std::endl;
    std::cout << "x second namespace value " << second::x << std::endl;
    std::cout << "x value without namespace " << x << std::endl;

    return 0;
}
