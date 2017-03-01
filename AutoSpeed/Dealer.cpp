//
//  Dealer.cpp
//  AutoSpeed
//
//  Created by Myles McKendell on 3/1/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#include <stdio.h>
#include "Dealer.h"
#include "Dice.h"
#include <string>

using namespace std;

Dealer::Dealer()
{

    dice1Value = 0;
    dice2Value =0;


}

void Dealer::rollDice()
{
    dice1.roll();
    dice2.roll();

    dice1Value = dice1.getValue();
    dice2Value = dice2.getValue();
}

string Dealer::getEvenOrOdd()
{

    string result;
    
    int sum = dice1Value + dice2Value;
    
    
if(sum % 2 ==0)
   result = "Even";
   
else
        result = "Odd";
    
    return result;


}


int Dealer::getDice1Value()
{
    return dice1Value;
}


int Dealer::getDice2Value()
{

    return dice2Value;

}





Dealer::~Dealer()
{}







