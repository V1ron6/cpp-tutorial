#include <iostream>
#include <string>


//since all the retun ttpes follow the same structure i will ommit the rest
/*

   a function returning string

    steps:
        declare a function
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
