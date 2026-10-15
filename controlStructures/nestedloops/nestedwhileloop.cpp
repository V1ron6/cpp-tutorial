/*
 * LESSON: Nested loops and a guessing game
 *
 * What to learn: The outer loop keeps the game running; the inner loop asks for a name until it is not empty. A random number is selected for the guessing challenge.
 * Try it: Add a hint for guesses that are too high or too low. Validate that the input is a number from 1 to 10.
 * Check your understanding: Why does the program use two different loop conditions?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
#include <string>
#include <cstdlib>   // BUG FIX: srand()/rand() need this -- it only compiled
#include <ctime>     // BUG FIX: ...and time() needs this -- both were missing,
                      // relying on another header dragging them in by accident.

int main() {
    /*
      nested while loop = is just another while loop
      placed inside a while loop

      while(condition){
        action
        while(condition){
          action
        }
      }
    */

    // Seed the pseudo-random generator so runs are not always identical.
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::string name;
    bool game = true;
    int guess = (std::rand() % 10 + 1);
    int number;

    std::cout << " let's play a game \n";
    // The outer loop repeats until a correct guess ends the game.
    while (game) {
        while (name.empty()) {
            std::cout << "what is your name ";
            std::getline(std::cin, name);
        }
        std::cout << "hello " << name << std::endl;

        std::cout << "pick a number from 1-10 \n";
        std::cin >> number;
        if (number == guess) {
            std::cout << "hurray you got it \n";
            game = false;
        } else {
            std::cout << "try again \n";
        }
    }
    return 0;
}
