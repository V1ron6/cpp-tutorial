#include <iostream>
/*
  array = is a data structure that can hold
          more than one value simultaneously.

          each value is assigned an index

  the for each iteration/control structure behaves
  exactly like the basic for each we know


  example:
    variableType arrayname[]={value,value,value,..}

  this file focuses on the use of arrays as parameters for functions
  


*/

void greetAll(std::string names[] , const int SIZE){
    
    for (int I=0;I<SIZE;I++){
        
        std::cout << names[I] << std::endl;
    
    }


};
int main() {
    
    std::string names[]= {"Viron","Byteband1t","Joe","Stephen"};
    const int SIZE=sizeof(names)/sizeof(std::string);
    
    /* all parameters are treated as pointers.*/
    greetAll(names,SIZE);
    return 0;
}
