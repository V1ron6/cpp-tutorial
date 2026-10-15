/*
 * LESSON: Returning a value from a function
 *
 * What to learn: A return type describes the kind of value a function sends back. A returned string can be stored, printed, or passed to another function.
 * Try it: Change the returned message and store the result in a variable before printing it.
 * Check your understanding: How is returning a value different from printing inside the function?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
#include <string>


//since all the retun ttpes follow the same structure i will ommit the rest
/*

   a function returning string

    steps:
        declare a function
        // This function sends a string back to its caller with return.
std::string functionname(){
          //action or code
          return string;
        }


*/

typedef std::string str_t;

str_t greet() {
    str_t message = "hello world";
    return message;
};

int main() {
    /*
     there are different ways to handle a returned
     value

    */

    std::cout << "1. assign a variable" << std::endl;
    str_t text=greet();

    std::cout << text << std::endl;

    std::cout << "2. use directly from the function" << std::endl;

    std::cout<<greet()<<std::endl;

    return 0;
};
