#include <iostream>
#include <vector>
#include <string>


typedef std::string str_t;

namespace balance_ns {
double balance = 0.00;
}

namespace history_ns {
str_t HList[20] = {"Account Created"};
int history_count = 1;
}

void translist(const str_t list[20]) {
    std::cout << "\n----- Transaction History -----\n";
    for (int i = 0; i < 20; i++) {
        if (!list[i].empty()) {
            std::cout << i << ": " << list[i] << std::endl;
        }
    }
    std::cout << "-------------------------------\n";
}

void welcome() {
    std::cout << "==================\n";
    std::cout << "    Black Box     \n";
    std::cout << "==================\n";
    
    str_t item[7] = {
        ". Balance",
        ". Withdraw",
        ". Deposit",
        ". Transfer",
        ". History",
        ". Info",
        ". Exit"
    };

    for (int i = 0; i < 7; i++) {
        std::cout << i + 1 << item[i] << std::endl;
    }
    std::cout << "------------------\n";
}

double withdraw(double balance, str_t history[20]) {
    std::cout << "\n----- Withdrawal -----\n";
    std::cout << "Enter Amount: GHC ";

    double amount;
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "Invalid amount!\n";
    } else if (balance < amount) {
        std::cout << "Insufficient funds!\n";
    } else {
        balance -= amount;
        std::cout << "Successfully withdrew GHC " << amount << std::endl;

        // Add to history if space permits
        if (history_ns::history_count < 20) {
            history[history_ns::history_count] = "Withdrawal: -GHC " + std::to_string(amount);
            history_ns::history_count++;
        }
    }

    return balance;
}

double deposit(double balance, str_t history[20]) {
    std::cout << "\n----- Deposit -----\n";
    std::cout << "Enter Amount: GHC ";

    double amount;
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "Invalid amount!\n";
    } else {
        balance += amount;
        std::cout << "Successfully deposited GHC " << amount << std::endl;

        // Add to history if space permits
        if (history_ns::history_count < 20) {
            history[history_ns::history_count] = "Deposit: +GHC " + std::to_string(amount);
            history_ns::history_count++;
        }
    }

    return balance;
}

double transfer(double balance) {
    std::cout << "\nTransfer feature is under development.\n";
    return balance;
}

int main() {
    

    welcome();

    double balance = balance_ns::balance;

    // Properly copy history from namespace array
    str_t history[20];
    for (int i = 0; i < 20; i++) {
        history[i] = history_ns::HList[i];
    }

    int option;
    bool initiate = true;

    while (initiate) {
        std::cout << "\n> ";
        std::cin >> option;

        switch (option) {
        case 1:
            std::cout << "Current Balance: GHC " << balance << std::endl;
            break;

        case 2:
            balance = withdraw(balance, history);
            std::cout << "Current Balance: GHC " << balance << std::endl;
            break;

        case 3:
            balance = deposit(balance, history);
            std::cout << "Current Balance: GHC " << balance << std::endl;
            break;

        case 4:
            balance = transfer(balance);
            break;

        case 5:
            translist(history);
            break;

        case 6:
            std::cout << "\nBlack Box Banking System v1.0\n";
            std::cout << "logged in as : viron " << std::endl;
            break;

        case 7:
            std::cout << "Goodbye!\n";
            initiate = false;
            break;

        default:
            std::cout << "Invalid choice! Please select between 1 and 7.\n";
        }
    }

    return 0;
}

