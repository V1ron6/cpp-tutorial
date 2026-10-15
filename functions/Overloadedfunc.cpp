/*
 * LESSON: Function overloading
 *
 * What to learn: Overloaded functions share a name but have different parameter lists. The compiler chooses the version that matches the arguments in the call.
 * Try it: Add a version that accepts three integers, using a distinct parameter list.
 * Check your understanding: Why can’t two overloads differ only by return type?
 *
 * Learning tip: Read the program once before running it. Predict what it will do,
 * compile and run it, then explain any difference between your prediction and output.
 */

#include <iostream>
#include <string>

/*
    an overloaded function is just a function
     bearing the same name but different parameters making
     it behave like separate funcs

    struct:
        declare a function
        returntype overloaded(){
          //action or code
          return returnvalue;
        }

        returntype overloaded(std::string name){
          //action or code
          return returnvalue;
        }

        returntype overloaded(std::string name, int age){
          //action or code
          return returnvalue;
        }


       even though this functions have the same name
       they are treated as separate functions

*/

typedef std::string str_t;

str_t greet() {
    str_t message = "hello world";
    return message;

};


void greet(str_t name) {
    std::cout<<"hello "<<name<<"!\n";

};



void greet(str_t name,int age) {
    std::cout<<"hello "<<name<<" you are " <<age<<" years old!\n";


};

// The compiler selects an overload based on the argument types and count.
int main() {
    /*
     there are different ways to handle a returned
     value

    */
    std::cout<<"all have the same function name  \n";

    std::cout<<"\n first function without parameters\n";
    std::cout << greet() << "\n";

    std::cout<<"\nsecond function with a parameters\n";
    greet("V1ron6");

    std::cout<<"\nthird function with 2 parameters\n";
    greet("V1ron6",12);




    return 0;
};
