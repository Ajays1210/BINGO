#include <iostream>
#include "common/Game.h"

int main() {
	std::cout << "Welcome to BINGO!" << std::endl;
	
    Game game;
    
    game.displayBoard();

    if (game.markNumber(12))
        std::cout << "\n12 marked successfully\n";
    else
        std::cout << "\nInvlaid move\n";

    if (game.markNumber(12))
        std::cout << "12 marked successfully!\n";
    else
        std::cout << "12 was already marked\n";
    
    if (game.markNumber(30))
        std::cout << "\n30 marked successfully\n";
    else
        std::cout << "\n30 is Invlaid\n";

    game.displayBoard();

	return 0;
}
