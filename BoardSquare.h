#ifndef BOARDSQUARE_H
#define BOARDSQUARE_H
#include <string>
using namespace std;

enum Action
{
    DO_NOTHING,
    SWITCH_PLACES,
    LOSE_TURN,
    GO_AGAIN,
    MOVE_FOUR_FORWARD,
    MOVE_FOUR_BACKWARD
};

class BoardSquare
{
    private:
        Action action;
        string color;
    public:
        BoardSquare();
        BoardSquare(Action a, string c);

        Action getAction();
        string getColor();
};

#endif // BOARDSQUARE_H
