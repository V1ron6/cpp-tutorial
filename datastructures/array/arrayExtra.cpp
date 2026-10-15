#include <iostream>
/*
  array = is a data structure that can hold
          more than one value simultaneously.

          each value is assigned an index


  example:
    variableType areayname[]={value,value,value,..}


  This extra focuses on determining the size of an array
  using the sizeof() function.

*/
int main() {
    //first of all let's find the size of each data type
    std::cout<<"size of each data type"<<std::endl;
    std::cout << "****************" << std::endl;
    std::cout << "int has the size of "<< sizeof(int) <<  std::endl;
    std::cout << "char has the size of "<< sizeof(char) << std::endl;
    std::cout << "bool has the size of "<< sizeof(bool) << std::endl;
    std::cout << "string has the size of "<< sizeof(std::string) << std::endl;
    std::cout << "****************" << std::endl;

    /*
      if an array contains data and uses a defined data type
      it's size if the summation of all the individual elements present


    */

    std::cout<<"size of an array with different data type "<<std::endl;
    std::cout << "****************" << std::endl;

    char character[]= {'A','B','C','D'};
    std::cout<<"char array :"<< sizeof(character) <<std::endl;


    int number[]= {1,2,3,4};
    std::cout<<"int array :"<< sizeof(number) <<std::endl;


    bool truefalse[]= {true,false,true,true};
    std::cout<<"bool array :"<< sizeof(truefalse) <<std::endl;


    std::string names[]= {"Viron","byteband1t","joe","Stephen"};
    std::cout<<"string array :"<< sizeof(names) <<std::endl;

    std::cout << "****************" << std::endl;
    std::cout << "it works by multiple the size of a data type by the size of elements  present in the  array" << std::endl;
    std::cout << "****************" << std::endl;
    std::cout << "to get the number of items or elements present. \n just divide the total size by the size of the data type" << std::endl;
    std::cout << "****************" << std::endl;
    std::cout << "something like this : sizeof(names)/sizeof(std::string)" << std::endl;
    return 0;
}
