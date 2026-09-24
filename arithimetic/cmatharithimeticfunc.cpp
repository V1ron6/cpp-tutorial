#include <iostream>
#include <cmath>

int main(){
 int x=3;
 int y=6;
 int z;
 
 z=fmax(x,y);
 std::cout<<"max :" <<z<<std::endl;
 z=fmin(x,y);
 std::cout << "min :"<<z<< std::endl;
z=pow(x,y);
std::cout << "pow :"<<z<< std::endl;
z=sqrt(x);
std::cout << "sqr :"<<z<< std::endl;
z=abs(-y);
std::cout << "absolute :"<<z<< std::endl;
z=round(3.87);
std::cout << "round :"<<z<< std::endl;
z=ceil(3.87);
std::cout << "round upwards :"<<z<< std::endl;
z=floor(3.87);
std::cout << "round downward :"<<z<< std::endl;


return 0;
}





