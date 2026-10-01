#include <iostream>
#include <string>


int main() {

    /*
      while = is a control structure that performs a
      particular action until a specific condition is met

      while(condition){
        action
        };



    */

    std::string name;


    while(name.empty()) {
        std::cout << "what is your name " ;
        std::getline(std::cin,name);
        
    };
    std::cout <<"hello "<<name;
    

    return 0;
};








