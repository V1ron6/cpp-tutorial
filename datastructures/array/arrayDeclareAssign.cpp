#include <iostream>
/*
  array = is a data structure that can hold
          more than one value simultaneously.

          each value is assigned an index


  example:
    variableType areayname[]={value,value,value,..}




*/
int main() {
    /*
    if you choose to Declare you array variable first before assigning values.
    you must explicitly state the number of items expecting
    */
    std::string cars[4];
// remember arrays are always indexed from 0
    cars[0]="Volvo";
    cars[1]="BMW";
    cars[2]="Koenigsegg";
    cars[3]="Benz";
    std::cout <<cars[0]<< std::endl;
    std::cout <<cars[1]<< std::endl;
    std::cout <<cars[2]<< std::endl;
    std::cout <<cars[3]<< std::endl;
    return 0;
}
