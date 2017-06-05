#include "BoardSquare.h"

BoardSquare::BoardSquare()
{
}

BoardSquare::BoardSquare(Action a, string c)
{
    action = a;
    color = c;
}

Action BoardSquare::getAction()
{
   return action;
}

string BoardSquare::getColor()
{
    return color;
}
