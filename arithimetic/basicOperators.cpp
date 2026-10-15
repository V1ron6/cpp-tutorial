/*
 * LESSON: Arithmetic operators
 *
 * What to learn: Arithmetic operators calculate values. += and ++ are shorter ways to update a variable; integer division discards the fractional part, so the example uses double for the quotient.
 * Try it: Change the starting values and predict each result. Compare 9 / 2 with 9.0 / 2.
 * Check your understanding: Why does the quotient need a floating-point type to preserve 4.5?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>

// making use of +, -, *, and /

namespace add {
    int students = 0;
}

namespace sub {
    int students = 20;
}

namespace mul {
    int students = 4;
}

// BUG FIX: this namespace was named `div`, which collides with std::div()
// from <cstdlib> (a function that also returns a quotient/remainder pair).
// Renamed to avoid the name clash.
namespace division {
    int students = 9;
}

int main() {

    // addition
    add::students = add::students + 1;
    add::students += 1;
    add::students++;               // increment: increases by 1
    std::cout << "students sum " << add::students << std::endl;

    // subtraction
    sub::students = sub::students - 1;
    sub::students -= 1;
    sub::students--;               // decrement: decreases by 1
    std::cout << "students sub " << sub::students << std::endl;

    // multiplication
    mul::students = mul::students * 2;
    std::cout << "students product " << mul::students << std::endl;

    // division
    // BUG FIX: `students` is an int, so int/int does integer division and
    // truncates any fraction. The original code cast to double and then
    // immediately assigned the result BACK into the int, throwing the
    // fraction away again (9/2 became 4, not 4.5) -- the cast was pointless.
    // The fix: keep the result in a double all the way to output.
    // Convert before division; otherwise integer division would discard the fraction.
    double quotient = static_cast<double>(division::students) / 2;
    std::cout << "students quotient " << quotient << std::endl;

    return 0;
}
