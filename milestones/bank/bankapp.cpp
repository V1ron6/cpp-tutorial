#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

using str_t = std::string;

namespace balance_ns {
double balance = 0.00;
}

namespace history_ns {
str_t HList[20] = {"Account created"};
int history_count = 1;
}

void addHistory(const str_t& entry) {
    if (history_ns::history_count < 20) {
        history_ns::HList[history_ns::history_count++] = entry;
    } else {
        std::cout << "Transaction history is full; this transaction was not recorded.\n";
    }
}

bool readAmount(double& amount) {
    if (std::cin >> amount && amount > 0.0) return true;
    if (std::cin.eof()) return false;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter a valid amount greater than zero.\n";
    return false;
}

void translist() {
    std::cout << "\n----- Transaction History -----\n";
    for (int i = 0; i < history_ns::history_count; ++i) {
        std::cout << (i + 1) << ". " << history_ns::HList[i] << '\n';
    }
    std::cout << "-------------------------------\n";
}

void welcome() {
    std::cout << "==================\n"
              << "    Black Box     \n"
              << "==================\n"
              << "1. Balance\n2. Withdraw\n3. Deposit\n4. Transfer\n"
              << "5. History\n6. Info\n7. Exit\n"
              << "------------------\n";
}

void withdraw() {
    std::cout << "Enter amount to withdraw (GHC): ";
    double amount = 0.0;
    if (!readAmount(amount)) return;
    if (amount > balance_ns::balance) {
        std::cout << "Insufficient funds.\n";
        return;
    }
    balance_ns::balance -= amount;
    addHistory("Withdrawal: -GHC " + std::to_string(amount));
    std::cout << "Withdrawal successful.\n";
}

void deposit() {
    std::cout << "Enter amount to deposit (GHC): ";
    double amount = 0.0;
    if (!readAmount(amount)) return;
    balance_ns::balance += amount;
    addHistory("Deposit: +GHC " + std::to_string(amount));
    std::cout << "Deposit successful.\n";
}

int main() {
    bool running = true;
    welcome();
    while (running) {
        std::cout << "\nChoose an option (1-7): ";
        int option = 0;
        if (!(std::cin >> option)) {
            if (std::cin.eof()) break;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Enter a number from 1 to 7.\n";
            continue;
        }
        switch (option) {
            case 1:
                std::cout << std::fixed << std::setprecision(2)
                          << "Current balance: GHC " << balance_ns::balance << '\n';
                break;
            case 2:
                withdraw();
                break;
            case 3:
                deposit();
                break;
            case 4:
                std::cout << "Transfer feature is under development.\n";
                break;
            case 5:
                translist();
                break;
            case 6:
                std::cout << "Black Box Banking System v1.0\n"
                          << "Demo console application; no real account is connected.\n";
                break;
            case 7:
                running = false;
                std::cout << "Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Select a number from 1 to 7.\n";
        }
    }
    return 0;
}
