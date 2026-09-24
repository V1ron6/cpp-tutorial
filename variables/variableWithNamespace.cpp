#include <iostream> 

/*
 namespace allows you to assign a  variable different 
 base on purpose and circumstance




*/
namespace first {
  int x =1;
}
namespace second{
 int x=2;
}

int main(){

  int x=0;

  std::cout<<"x first namespace value "<< first::x<<std::endl;
  std::cout<<"x second namespace value "<< second::x<<std::endl;
  std::cout<<"x  value without namespace "<< x<<std::endl;


}
