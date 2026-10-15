/*
 * LESSON: Repeating work with a for loop
 *
 * What to learn: A for loop has three parts: initialization, continuation condition, and update. Here i starts at 1, continues through end, and increases by one each round.
 * Try it: Print a table for 7 up to 12. What happens when end is 0?
 * Check your understanding: Which part of the loop makes i increase?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>

int main() {
    /*
      for loop = is a control structure that performs
      an action for a certain number of times.

      for(start;stop;step){
         action
      }
    */

    int number;
    int end;

    std::cout << "*****multiplication table****\n";
    std::cout << "enter the number\n";
    std::cin >> number;
    std::cout << "enter the number to end on\n";
    std::cin >> end;

    // Start i at 1; repeat while i <= end; add 1 after each iteration.
    for (int i = 1; i < (end + 1); i++) {
        // BUG FIX: `times` was declared `double` but computed as
        // `number * i`, an int multiplication performed BEFORE the
        // result was ever widened to double. Declaring it double gave
        // the false impression that overflow was handled; it wasn't --
        // a large enough number/end would overflow as ints first.
        // Casting one operand before multiplying fixes that.
        double times = static_cast<double>(number) * i;

        std::cout << number << "x" << i << "= " << times << std::endl;
    }

    return 0;
}
