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
