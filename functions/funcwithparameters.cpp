/*
 * LESSON: Passing information to functions
 *
 * What to learn: Parameters are local variables that receive arguments from a function call. They let one function work with different inputs.
 * Try it: Call the function with different names or values.
 * Check your understanding: What is the difference between a parameter in a definition and an argument in a call?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
#include <string>

/*

   a function with parameters is a function that
   allow a function to accept variables from other code
   scopes

    steps:
        declare a function
        returntype functionname(paramType paramname,paramType paramname){
          //action or code
          return returnvalue;
        }

       remember param acts as a place holder for the func.


*/

typedef std::string str_t;

// A parameter is a local input to a function; callers supply its argument.
void greet(str_t name,int age) {
    std::cout<<"hello "<<name<<" you are " <<age<<"years old!\n";

    
};

int main() {
    /*
     there are different ways to handle a returned
     value

    */

    greet("V1ron6",12);

    


    return 0;
};
