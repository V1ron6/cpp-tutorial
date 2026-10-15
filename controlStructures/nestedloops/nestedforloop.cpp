/*
 * LESSON: Nested loops draw a rectangle
 *
 * What to learn: The outer loop controls rows; the inner loop prints the characters in each row. The inner loop completes all its repetitions before the outer loop advances.
 * Try it: Try breadth 3 and length 5, then reverse them.
 * Check your understanding: Which loop controls the number of rows, and which controls columns?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>

int main() {
    /*
      nested for loop = is just another for loop
      placed inside a for loop

      for(start;stop;step){
         action

         for(start;stop;step){
           action
         }
      }
    */

    int posX;
    int posY;

    std::cout << "****Rectangle generator****\n";
    std::cout << "enter the breadth value \n";
    std::cin >> posX;
    std::cout << "enter the length value \n";
    std::cin >> posY;

    // Outer loop: one repetition for each row.
    for (int i = 1; i < (posX + 1); i++) {
        // Inner loop: print the requested number of columns on this row.
        for (int j = 1; j < (posY + 1); j++) {
            std::cout << "*";
        }
        // BUG FIX: this used to be `std::cout << "* \n";`, printing one
        // extra "*" after every row on top of the posY already printed
        // by the inner loop -- every row came out one character wider
        // than requested. This should only end the line.
        std::cout << "\n";
    }

    return 0;
}
