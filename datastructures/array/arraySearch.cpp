#include <iostream>
/*
  array = is a data structure that can hold
          more than one value simultaneously.

          each value is assigned an index

  the for each iteration/control structure behaves
  exactly like the basic for each we know


  example:
    variableType arrayname[]={value,value,value,..}

  this file focuses on search for items in an array 



*/

int searchElem(std::string names[], const int SIZE,std::string search) {

    for (int I=0; I<SIZE; I++) {
        if(search==names[I]) {

            return I;
            break;

        }

    }

    return -1;
};
int main() {

    std::string names[]= {"David","Horris","Joe","Harry","John","Doe"};
    const int SIZE=sizeof(names)/sizeof(std::string);
    std::string search;
    std::cout << "Enter the element you are looking for :" << std::endl;
    std::getline(std::cin,search);


    int location = searchElem(names,SIZE,search);
    if(location!= -1) {
         std::cout << search<< " is located at "<< location << std::endl;
    } else {
    
       std::cout << search<< " not found" << std::endl;
    }
    
    return 0;
}
