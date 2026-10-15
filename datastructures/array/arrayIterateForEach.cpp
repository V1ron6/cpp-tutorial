#include <iostream>
/*
  array = is a data structure that can hold
          more than one value simultaneously.

          each value is assigned an index

  the for each iteration/control structure behaves
  exactly like the basic for each we know


  example:
    variableType arrayname[]={value,value,value,..}

  this file focuses on iteration of an array
  using the forEach loop

  for(datatype ElementName : ArrayName){
      std::cout << ElementName << std::endl;
  }


*/
int main() {
    // to iterate we don't need the total number of elements
    std::string names[]= {"Viron","Byteband1t","Joe","Stephen"};
    
    for(std::string name : names) {
        std::cout << name<< std::endl;
    };
    return 0;
}
