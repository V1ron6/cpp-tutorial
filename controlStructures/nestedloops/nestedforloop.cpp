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

    for (int i = 1; i < (posX + 1); i++) {
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
