#include <iostream>
/*
  array = is a data structure that can hold
          more than one value simultaneously.

          each value is assigned an index


  example:
    variableType areayname[]={value,value,value,..}

  this file focuses on iteration of an array 
  using the forloop
  
  for(start;end;step){
  action
  }
  

*/
int main() {
    // to iterate we need the total number of elements 
    std::string names[]= {"Viron","Byteband1t","Joe","Stephen"};
    const int SIZE =sizeof(names)/sizeof(std::string);
    for(int I =0;I < SIZE;I++){
       std::cout << names[I]<< std::endl;
    };
        return 0;
} 
