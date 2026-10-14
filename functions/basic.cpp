#include <iostream>

/*

   Function= a function is a block of code that can be
             reused any where in the app without
             duplicating the code.

    steps:
        declare a function
        returntype functionname(){
          //action or code
          return returnvalue;
        }

      returntype can be :
         string - this has a returnvalue of string
         int. - this has a returnvalue of int
         bool -this has a returnvalue of boolean
         char -this has a returnvalue of char
         void -this has no returnvalue hence
                it doesn't need the return block

*/

void greet() {
    std::cout << "hello world" << std::endl;
};

int main() {
    /*
    let's say we want to print the word hello world
     a number of times .
    */
    std::cout<<"--------------------\n";
    std::cout << "without a function " << std::endl;
    std::cout << "hello world" << std::endl;
    std::cout << "hello world" << std::endl;
    std::cout << "hello world" << std::endl;
    std::cout << "hello world" << std::endl;
    std::cout << "hello world" << std::endl;


    std::cout<<"--------------------\n";
    std::cout << "with a function" << std::endl;
    greet();
    greet();
    greet();
    greet();
    greet();

    /*
     this way the code can be changes and edited
     easily without much struggles


    */

    return 0;
};
