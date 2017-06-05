#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player
{

    private:
        string name;
        int location;
        int score;
        bool loseTurn;

    public:
        Player();
        Player(string n);
        string getName();
        void setName(string n);
        bool getLoseTurn();
        void setLoseTurn(bool loseT);
        int getLocation();
        int getScore();
        void setLocation(int newLocation);
        void move(int steps, int numOfSquaresInBoard);
        void switchPlaces(Player& otherPlayer);
        bool hasWon();
};

#endif // PLAYER_H
