//
//  Dealer.h
//  AutoSpeed
//
//  Created by Myles McKendell on 3/1/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef Dealer_h
#define Dealer_h

#include <string>
#include "Dice.h"

using namespace std;

class Dealer
{
private:

    Dice dice1;
    Dice dice2;
    int dice1Value;
    int dice2Value;


public:
    Dealer();
    void rollDice();
    string getEvenOrOdd();
    int getDice1Value();
    int getDice2Value();

    ~Dealer();

};





#endif /* Dealer_h */
