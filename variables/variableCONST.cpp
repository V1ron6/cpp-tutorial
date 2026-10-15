/*
 * LESSON: Constants and circumference
 *
 * What to learn: const prevents a value from being reassigned after initialization. A named constant also makes formulas easier to read.
 * Try it: Change radius to 2.5 and calculate the new circumference. Try assigning a new value to PI and observe the compiler error.
 * Check your understanding: Why is PI a good candidate for const?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>

// this code focuses on making use of variables that remain fixed (constants)

int main() {
    // const makes PI read-only after this initialization.
    const double PI = 3.14159;
    double radius = 7;
    double circumference = 2 * PI * radius;

    std::cout << "circumference " << circumference << " cm" << std::endl;

    return 0;
}
