/*
 * LESSON: Repeating while a condition is true
 *
 * What to learn: A while loop checks its condition before each repetition. The body must eventually change something that makes the condition false, or the loop may never end.
 * Try it: Trace the variable that controls the loop and write down its value after every repetition.
 * Check your understanding: What is the loop’s stopping condition?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
#include <string>

int main() {
    /*
      while = is a control structure that performs a
      particular action until a specific condition is met

      while(condition){
        action
      };
    */

    std::string name;

    // The condition is checked before the loop body runs.
    while (name.empty()) {
        std::cout << "what is your name ";
        std::getline(std::cin, name);
    }
    std::cout << "hello " << name;

    return 0;
}
