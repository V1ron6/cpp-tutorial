/*
 * LESSON: Using a constant in formulas
 *
 * What to learn: This example uses a constant to calculate a circle’s area and perimeter (circumference). The formula for area is pi times radius squared; circumference is 2 times pi times radius.
 * Try it: Change radius and predict both answers before compiling.
 * Check your understanding: Why is radius squared used for area but not circumference?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
// BUG FIX: dropped `using namespace std;` in favor of explicit std::

int main() {
    const float pi = 3.14f;

    float radius = 5, area, perimeter;

    // Area uses radius × radius × pi.
    area = (radius * radius) * pi;
    // Circumference uses 2 × pi × radius.
    perimeter = 2 * (pi * radius);

    std::cout << "area :" << area << std::endl;
    std::cout << "perimeter :" << perimeter << std::endl;
    return 0;
}
