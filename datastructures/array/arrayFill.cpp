#include <iostream>
/*
  fill() = is a function that populates an array with a specified value
  example:
    variableType arrayname[]={value,value,value,..}

  struct :
      fill(start,end,value);

*/

int main() {

    std::string Foods[10];

    fill(Foods,Foods+10/2,"pizza");
    fill(Foods+10/2,Foods+10,"hotdog");
    //mostly useful in populating random numbers
    
    for(std::string Food : Foods) {
        std::cout << Food << std::endl;
    };


    return 0;
}
