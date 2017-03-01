//
//  Player.h
//  AutoSpeed
//
//  Created by Myles McKendell on 2/23/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef Player_h
#define Player_h

#include <string>


class Player
{
private:
    std::string name;
    std::string guess;
    int point;
    
public:
    Player();
    Player(std::string name);
   
    void makeGuess();
    void addPoint(int);
    std::string getName();
    std::string getGuess();
    int getPoint();
    
    
    
    ~Player();
    
    



  // std::string GetName();






};





#endif /* Player_h */
