#ifndef GAME_H
#define GAME_H
#include "BoardSquare.h"
#include "Player.h"

class Game
{
    private:
        const int NUMBER_OF_SQUARES_IN_BOARD = 25;
        BoardSquare* board;
        int numOfPlayers;
        Player* players;

    public:
        Game();
        ~Game();
        void play();
        void setNumberOfPlayers();
        int getNumberOfPlayers();
        void createPlayers();
        void displayBoard();
        void displayRules();
        void showState(Player& player);
        int spinDie();
        int determineWhoGoesFirst();
};

#endif // GAME_H
