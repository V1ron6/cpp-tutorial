#include<iostream>



int main()
{
    std::string cars[5];
    std::string userinput;
    std::cout << "Enter you top 5 favorite cars" << std::endl;
    for(int I=0; I<5; I++) {
        std::cout << "Enter the name of the car or 'q' to exit: ";
        std::getline(std::cin, userinput);
        if(userinput == "q") {
            break;
        } else {
            cars[I]=userinput;
        }
    };

    std::cout<<"*******************"<<std::endl;

    for(std::string car : cars) {
        if(car.empty()) {
            break;
        } else {
            std::cout<<" # "<< car<<std::endl;
        };
    };
    return 0;
}
