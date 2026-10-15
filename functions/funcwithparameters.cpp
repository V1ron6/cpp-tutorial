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
