#include <iostream>
#include <ctime>


char getUserChoice() {
    char choice;
    bool proceed=false;
    do {
        std::cout << "******************" << std::endl;
        std::cout << "available choices " << std::endl;
        std::cout << "r represents Rock" << std::endl;
        std::cout << "p represents Paper" << std::endl;
        std::cout << "s represents scissors" << std::endl;
        std::cout << "******************" << std::endl;
        std::cout << "Enter your choice :";
        std::cin >> choice;
        switch(choice) {
        case 'r':
            return choice;
            proceed=true;
            break;

        case 'p':
            return choice;
            proceed=true;
            break;

        case 's':
            return choice;
            proceed=true;
            break;

        default:
            std::cout << "wrong choice" << std::endl;
            break;
        };
    } while (proceed!= true);
};

char getConputerChoice() {
    srand(time(NULL));
    int   selection = rand()%3;
    char choices[3]= {'r','p','s'};
    char choice=choices[selection];

    return choice;
};

void checkWin(char player,char computer) {
    switch(player) {
    case 'r':
        if(computer==player) {
            std::cout << "it's a tie" << std::endl;
        } else if(computer== 's') {
            std::cout << "you win" << std::endl;
        } else {
            std::cout<<"Computer wins"<<std::endl;
        };
        break;
    case 'p':
        if(computer==player) {
            std::cout << "it's a tie" << std::endl;
        } else if(computer== 's') {
            std::cout << "Computer win" << std::endl;
        } else {
            std::cout<<"you wins"<<std::endl;
        };
        break;
    case 's':
        if(computer==player) {
            std::cout << "it's a tie" << std::endl;
        } else if(computer== 'r') {
            std::cout << "Computer wins" << std::endl;
        } else {
            std::cout<<"You win"<<std::endl;
        };
        break;
    };

};

void showChoices(char player,char computer) {
    switch(player) {
    case 'r':
        std::cout << "You chose : Rock"<< std::endl;
        break;
    case 'p':
        std::cout << "You chose : Paper"<< std::endl;
        break;
    case 's':
        std::cout << "You chose : Scissors"<< std::endl;
        break;

    };

    switch(computer) {
    case 'r':
        std::cout << "Computer chose : Rock"<< std::endl;
        break;
    case 'p':
        std::cout << "Computer chose : Paper"<< std::endl;
        break;
    case 's':
        std::cout << "Computer chose : Scissors"<< std::endl;
        break;

    };


};

std::string Message() {
    std::string welcome="welcome to Rock•Paper•Scissors";

    return welcome;
};

int main()
{
    std::cout << Message() << std::endl;
    char player;
    char computer;
    player=getUserChoice();
    computer=getConputerChoice();
    showChoices(player,computer);
    checkWin(player, computer);
    return 0;
}




