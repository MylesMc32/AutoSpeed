//
//  Dice.cpp
//  AutoSpeed
//
//  Created by Myles McKendell on 3/1/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#include <stdio.h>
#include "Dice.h"
#include <cstdlib>
#include <ctime>

using namespace std;


Dice::Dice(int numSides)
{
   unsigned seed = time(0);

  srand(seed);
    sides = numSides;
    
    roll();
    


}

void Dice::roll()
{
    const int MIN_VALUE = 1;
    value =(rand() % (sides - MIN_VALUE +1)) +MIN_VALUE;
}

int Dice::getSides()
{
    return sides;
}

int Dice::getValue()
{
    return value;

}




Dice::~Dice()
{}
