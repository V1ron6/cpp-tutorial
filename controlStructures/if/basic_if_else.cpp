#include<iostream>
#include <vector>
#include <string>

typedef std::string str_t;

/*
  if statement is a condition control structure 
   with the form 
    if(condition){
     action
     }else{
     action
     }

*/

int main()
{
    str_t name;
    int age;
    
    std::cout << "what is your name \n" << std::endl;
    std::getline(std::cin>>std::ws,name);
    
    std::cout << "how old are you?\n" << std::endl;
    std::cin>>age;
    
    
    if(age<= 18){
     std::cout << "you cannot be apart of this organization Mr." <<name<< std::endl;
    
    }else{
     std::cout << "welcome aboard"<<std::endl;
    }
    
    return 0;
}
