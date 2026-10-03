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

    srand(time(NULL));
    std::string name;
    bool game = true;
    int guess = (rand() % 10 + 1);
    int number;

    std::cout << " let's play a game \n";
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
