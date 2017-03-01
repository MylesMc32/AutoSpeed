//
//  Player.cpp
//  AutoSpeed
//
//  Created by Myles McKendell on 2/24/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#include <stdio.h>
#include "Player.h"
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;

Player::Player(string playerName)
{
    srand(time(0));
    name = playerName;
    guess = "";
    point= 0;
}


void Player::makeGuess()
{
    const int MIN_VALUE = 0;
 
    const int MAX_VALUE = 1;

    int guessNumber;

    guessNumber = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    
    if (guessNumber ==0)
    
    
    guess = "Even";
        
        
        else
        guess = "Odd";
}


void Player::addPoint(int newPoint)
{
    point += newPoint;
}

string Player::getName()
{
    return name;
}


string Player::getGuess()
{

    return guess;
}

int Player::getPoint()
{
    return point;
}

Player::~Player()
{

}




Player::Player()
{
name = "New Player";
}

/*Player::Player(string name) :name(name)
{

}*/




/*std::string Player::GetName()
{

    return name;

}*/
