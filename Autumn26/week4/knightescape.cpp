#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    
    std::srand(std::time(NULL));

    int originRow = std::rand() % 6 + 2;
    int originCol = std::rand() % 6 + 2;
    int moveCount = 0;

    int row = originRow;
    int col = originCol;
    
    while (!((row == 1 || row == 8) && (col == 1 || col == 8))) {
        std::cout << "Current position: (" << row << ", " << col << ")" << std::endl;
        std::cout << "Enter destination coordinates (row col): ";
        int newRow, newCol;
        std::cin >> newRow >> newCol;

        int rowDiff = std::abs(newRow - row);
        int colDiff = std::abs(newCol - col);
        if ((rowDiff == 2 && colDiff == 1) || (rowDiff == 1 && colDiff == 2)) {
            row = newRow;
            col = newCol;
            moveCount++;
            std::cout << "Valid move! New position: (" << row << ", " << col << ")" << std::endl;
        } else {
            std::cout << "Invalid move! Please try again." << std::endl;
        }

        if (row < 1 || row > 8 || col < 1 || col > 8) {
            std::cout << "Out of bounds! Please try again." << std::endl;
            row = originRow;
            col = originCol;
            moveCount = 0;
        }

        if (moveCount > 5) {
            std::cout << "You've reached the maximum number of moves. Try again." << std::endl;
            moveCount = 0;
            row = originRow;
            col = originCol;
        }
    }

    std::cout << "Congratulations! You've reached a corner square: (" << row << ", " << col << ")" << std::endl;
    std::cout << "Total valid moves: " << moveCount << std::endl;

    return 0;
}