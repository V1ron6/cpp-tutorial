/*
 * LESSON: Creating and calling a function
 *
 * What to learn: A function names a reusable task. Defining a function describes what it does; calling it runs its body.
 * Try it: Call the function twice and change its message.
 * Check your understanding: Why might a function be preferable to copying the same lines repeatedly?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

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

// `void` means this function performs an action but does not return a value.
void greet() {
    std::cout << "hello world" << std::endl;
};

// main() calls the helper function; defining greet alone would not run it.
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
