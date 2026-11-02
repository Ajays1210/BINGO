#include "Game.h"
#include <iostream>
#include <random>
#include <algorithm>

Game::Game() {
    generateBoard();
}

void Game::generateBoard() {
    int numbers[25];

    // Fill the array with numbers from 1 to 25
    for (int i = 0; i < 25; ++i) {
        numbers[i] = i + 1;
    }

    // Randomly shuffle the numbers
    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(numbers, numbers + 25, generator);

    //Copy shuffled numbers into the 5x5 board
    int index = 0;

    for (int row = 0; row < 5; ++row) {
        for (int column = 0; column < 5; ++column) {
            board[row][column] = numbers[index];
            index++;
        }
    }
}

void Game::displayBoard() {
    std::cout << "\nB  I  N  G  O\n";
    std::cout << "----------------\n";

    for (int row = 0; row < 5; ++row) {
        for (int column = 0; column < 5; ++column) {
            if (marked[row][column]) {
                std::cout << "##\t";
            } else {
                std::cout << board[row][column] << "\t";
            }
        }

        std::cout << "\n";
    }
}

bool Game::markNumber(int number) {
    // Check whether the number is within range
    if (number < 1 || number > 25) {
        return false;
    }

    for (int row = 0; row < 5; ++row) {
        for (int column = 0; column < 5; ++column) {
            if (board[row][column] == number) {
                // Check whether it was already marked
                if (marked[row][column]) {
                    return false;
                }
                marked[row][column] = true;
                return true;
            }
        }
    }

    return false;
}
