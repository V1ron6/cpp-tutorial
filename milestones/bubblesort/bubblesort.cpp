#include <iostream>

void sorted(int numbers[],const int SIZE) {
    int temp;
    for(int I=0; I<SIZE -1; I++) {

        for(int j=0; j<SIZE -1 ; j++) {
            if(numbers[j]>numbers[j+1]) {
                temp =numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=temp;
            }
        };


    };
    std::cout << "\n" << std::endl;
    std::cout<<"sorted : " ;
    for(int s=0; s<SIZE; s++) {
        std::cout<<numbers[s];
        std::cout << ",";
    };

}

int main() {
    int numbers[]= {9,7,6,5,4,3,2,10,8,1};
    const int SIZE = sizeof(numbers)/sizeof(int);
    std::cout<<"raw : " ;
    for(int number : numbers) {
        std::cout << number ;
        std::cout << ",";
    }
    sorted(numbers,SIZE);

    return 0;
};
