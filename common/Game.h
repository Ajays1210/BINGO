#ifndef GAME_H
#define GAME_H

class Game {
private:
    int board[5][5];
    bool marked[5][5] = {};

public:
    Game();

    void generateBoard();
    void displayBoard();
    bool markNumber(int number);

    int countCompletedRows();
    int countCompletedColumns();
    int countCompletedDiagonals();

    bool checkWinner();
};

#endif
