#include "Player.h"

Player::Player()
{
    name = "";
    location = 0;
    score = 0;
    loseTurn = false;
}

Player::Player(string n)
{
    name = n;
    location = 0;
    score = 0;
    loseTurn = false;
}

string Player::getName()
{
    return name;
}

int Player::getLocation()
{
    return location;
}

void Player::setLocation(int newLocation)
{
    location = newLocation;
}

int Player::getScore()
{
    return score;
}

void Player::move(int steps, int numOfSquaresInBoard)
{
    location = location + steps;

    if (location > numOfSquaresInBoard - 1)
    {
        location = location - numOfSquaresInBoard;
        score++;
    }
}

bool Player::hasWon()
{
    return score >= 3;
}

void Player::setName(string n)
{
    name = n;
}

bool Player::getLoseTurn()
{
    return loseTurn;
}

void Player::setLoseTurn(bool loseT)
{
    loseTurn = loseT;
}

void Player::switchPlaces(Player& otherPlayer)
{
    int temp;
    temp = location;
    location = otherPlayer.getLocation();
    otherPlayer.setLocation(temp);
}
