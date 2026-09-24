#include<iostream>
#include <vector>

typedef std::string str_t;


int main()
{
  str_t name;
  int age;
    std::cout << "Hello !,\nwhat is your full name?" << std::endl;
    std::getline(std::cin>>std::ws,name);
    std::cout << name<<" how old are you?" << std::endl;
    std::cin >> age;
    std::cout <<age<< " nice" <<std::endl;
    return 0;
}
