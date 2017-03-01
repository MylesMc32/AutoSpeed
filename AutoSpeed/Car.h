//
//  Car.h
//  AutoSpeed
//
//  Created by Myles McKendell on 2/24/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef Car_h
#define Car_h
#include "Player.h"
#include <string>



class Car
{
private:


    std::string name;
    int speed;
   //int accelerate;
  //  int brake;
 
    
public:
    
    Car(std::string name = " ", int speed = 00)
    {
        name = "";
        speed = 00;
    }
    
    
    ~Car();
    
    void setName(std::string name);
    //void setSpeed(int);
    //void setAcclerate(int);

    std::string getName();
    int getSpeed() const;
  //  int getAccelerate() const;
  //  int getBrake() const;
 

    
    
};









#endif /* Car_h */
