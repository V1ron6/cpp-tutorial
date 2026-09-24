#include <iostream>
using namespace std;

//  Declaring a Variable - declared variable

int main(){
  //integers
 int age=21;
 int year=2026;
 int day=6;


 //character
 char grade='A';
 char initial ='E';
 char currency='$';

// double
 double temperature=15.6;
 double gpa=5.2;
 double price=12.34;

//bolean
 bool free=true;
 bool student=false;
 bool poweredon=true;

//string
std::string fullname="byte bro";
std::string greeting="good morning";
std::string food="pizza";

std::cout<<"----integers--" <<endl;
std::cout<<"int age "<< age <<endl;
std::cout<<"int year "<< year <<endl;
std::cout<<"int day "<< day <<endl;
std::cout<<"----character-- " <<endl;
std::cout<<"char grade "<< grade <<endl;
std::cout<<"char initial "<< initial <<endl;
std::cout<<"char currency "<<currency <<endl;
std::cout<<"----double-- " <<endl;
std::cout << "double temperature"<< temperature<< endl;
std::cout << "double gpa "<< gpa<< endl;
std::cout << "double price "<< price<< endl;
std::cout<<"----boolean-- " <<endl;
std::cout << "bool free "<<free << endl;;
std::cout << "bool student "<<student << endl;

std::cout << "I'm tired of printing them" << endl;
 return 0;
}
