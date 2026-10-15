/*
 * LESSON: A do-while loop runs at least once
 *
 * What to learn: Unlike while, do-while checks its condition after executing the body. This makes it useful for menus or prompts that must appear at least once.
 * Try it: Make the condition false on the first check and observe that the body still ran once.
 * Check your understanding: How does its execution order differ from while?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>

int main() {
    /*
      do-while = is a control structure that performs an initial
      action and repeats until a specific condition is met

      do{
        action
      }
      while(condition);
    */

    int number;
    // A do-while loop executes this body once before checking its condition.
    do {
        std::cout << "guess a number between 1-10 \n";
        std::cin >> number;
        // BUG FIX: "try again!!!" used to print unconditionally, every
        // iteration -- including the one where the guess was correct,
        // right before the "hurray" message. Only print it on a miss.
        if (number != 7) {
            std::cout << "try again!!! \n";
        }
    } while (number != 7);

    std::cout << "hurray you got the number";
    return 0;
}
