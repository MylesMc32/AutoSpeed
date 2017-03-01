//
//  Dice.h
//  AutoSpeed
//
//  Created by Myles McKendell on 2/26/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef Dice_h
#define Dice_h




class Dice
{
private:

    int sides;
    int value;
    
    
    
    
public:



    Dice(int = 6);
    void roll();
    int getSides();
    int getValue();

    ~Dice();



};




#endif /* Dice_h */
