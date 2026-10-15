#include <iostream>
/*
  array = is a data structure that can hold
          more than one value simultaneously.

          each value is assigned an index


  example:
    variableType areayname[]={value,value,value,..}




*/
int main() {
    std::string cars[]= {"Volvo","BMW","Koenigsegg","Benz"};

// remember arrays are always indexed from 0

    std::cout <<cars[0]<< std::endl;
    std::cout <<cars[1]<< std::endl;
    std::cout <<cars[2]<< std::endl;
    std::cout <<cars[3]<< std::endl;
    return 0;
}
