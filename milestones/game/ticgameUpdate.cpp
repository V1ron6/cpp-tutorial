#include <iostream>
#include <limits>
#include <string>

// Updated version: keeps the named player/sign helpers from the original
// iteration while making turns, input validation, wins, draws, and replay work.
using str_t = std::string;

void displayBoard(const char board[3][3]) {
    std::cout << '\n';
    for (int row = 0; row < 3; ++row) {
        std::cout << ' ' << board[row][0] << " | " << board[row][1]
                  << " | " << board[row][2] << '\n';
        if (row < 2) std::cout << "---+---+---\n";
    }
    std::cout << '\n';
}

bool checkWin(const char board[3][3], char sign) {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == sign && board[i][1] == sign && board[i][2] == sign) ||
            (board[0][i] == sign && board[1][i] == sign && board[2][i] == sign)) return true;
    }
    return (board[0][0] == sign && board[1][1] == sign && board[2][2] == sign) ||
           (board[0][2] == sign && board[1][1] == sign && board[2][0] == sign);
}

char switchPlayer(char currentPlayer) {
    return currentPlayer == '1' ? '2' : '1';
}

char signassign(char currentPlayer) {
    return currentPlayer == '1' ? 'X' : 'O';
}

bool Move(char board[3][3], char currentPlayer) {
    const char sign = signassign(currentPlayer);
    while (true) {
        std::cout << "Player " << currentPlayer << " (" << sign
                  << "), select a free number between 1 and 9: ";
        int position = 0;
        if (!(std::cin >> position)) {
            if (std::cin.eof()) return false;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Enter a whole number from 1 to 9.\n";
            continue;
        }
        if (position < 1 || position > 9) {
            std::cout << "Position must be between 1 and 9.\n";
            continue;
        }
        const int index = position - 1;
        char& cell = board[index / 3][index % 3];
        if (cell == 'X' || cell == 'O') {
            std::cout << "That cell is already occupied. Try again.\n";
            continue;
        }
        cell = sign;
        return true;
    }
}

void newgame(char board[3][3]) {
    char value = '1';
    for (int row = 0; row < 3; ++row)
        for (int col = 0; col < 3; ++col)
            board[row][col] = value++;
}

int main() {
    char board[3][3];
    bool playAgain = true;
    while (playAgain) {
        newgame(board);
        char currentPlayer = '1';
        int moves = 0;
        bool finished = false;
        while (!finished && moves < 9) {
            displayBoard(board);
            if (!Move(board, currentPlayer)) {
                std::cout << "Input ended. Goodbye!\n";
                return 0;
            }
            ++moves;
            if (checkWin(board, signassign(currentPlayer))) {
                displayBoard(board);
                std::cout << "Player " << currentPlayer << " wins!\n";
                finished = true;
            } else if (moves == 9) {
                displayBoard(board);
                std::cout << "It's a draw!\n";
                finished = true;
            } else {
                currentPlayer = switchPlayer(currentPlayer);
            }
        }
        char answer;
        std::cout << "Do you want to play again? (y/n): ";
        if (!(std::cin >> answer)) break;
        playAgain = (answer == 'y' || answer == 'Y');
    }
    std::cout << "Goodbye, catch you later!\n";
    return 0;
}
