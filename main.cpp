#include <iostream>
#include "common/Game.h"

int main() {
	std::cout << "Welcome to BINGO!" << std::endl;
	
    Game game;
    
    game.displayBoard();

    int number;
    
    std::cout << "\nEnter the five numbers from the first diagonal: ";

    for (int i = 0; i < 5; ++i) {
        std::cin >> number;
        game.markNumber(number);
    }

    std::cout << "\nCompleted diagonals: "
              << game.countCompletedDiagonals() << std::endl;

    std::cout << "\nWinner: "
              << (game.checkWinner() ? "Yes" : "No")
              << std::endl;

	return 0;
}
