#include <iostream>
#include <string>


int main() {
    /*
      nested for loop= is just another for loop
      place inside a for loop

      for(start;stop;step){
         action

         for(start;stop;step){
         action

       };
      }


    */

    int posX;
    int posY;

    std::cout << "****Rectangle generator****\n";
    std::cout<<"enter the breath value \n";
    std::cin>>posX;
    std::cout<<"enter the length value \n";
    std::cin>>posY;

    for(int i=1; i<(posX+1); i++) {

        for(int j=1; j<(posY+1); j++) {
            std::cout << "*";

        };
        std::cout << "* \n";
    };
    return 0;
};








