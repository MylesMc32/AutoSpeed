//
//  main.cpp
//  AutoSpeed
//
//  Created by Myles McKendell on 2/23/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//
#include <iostream>
#include <iostream>
#include "Dealer.h"
#include "Player.h"

using namespace std;
void roundResults(Dealer &, Player &, Player &);
void checkGuess(Player&, Dealer &);
void displayGrandWinner(Player, Player);




int main()
{
   
     const int MAX_ROUNDS = 5;
    string player1Name;
    string player2Name;
    
    
    cout << "Enter the first player's name: ";
    cin >> player1Name;
    
    cout << "Enter the second player's name: ";
    cin >> player2Name;
    
    Dealer dealer;
    
    
    Player player1(player1Name);
    Player player2(player2Name);
    
    for (int round = 0; round < MAX_ROUNDS; round++)
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "We are now starting round " << (round +1) << endl;
  
        dealer.rollDice();
    
    
        
        player1.makeGuess();
        player2.makeGuess();
        
        
        roundResults(dealer, player1, player2);
    
    }
    
    displayGrandWinner(player1, player2);
    
    return 0;


}


void roundResults(Dealer &dealer, Player &player1, Player &player2)
{

cout << "The Dealer rolled " << dealer.getDice1Value()
    << " and " << dealer.getDice2Value() << endl;

    cout << "Result: " << dealer.getEvenOrOdd() << endl;
    
    
    checkGuess(player1, dealer);
    checkGuess(player2, dealer);
}


void checkGuess(Player &player, Dealer &dealer)
{
    const int POINT_TO_ADD = 1;
    
    string guess = player.getGuess();
    string EvenOddResult = dealer.getEvenOrOdd();
    
    
    cout << "The player " << player.getName()
    << " guessed " << player.getGuess() << endl;
    
    if (guess == EvenOddResult)
    {
    
        player.addPoint(POINT_TO_ADD);
        cout << "Awarding " << POINT_TO_ADD << " point(s) to " <<player.getName() << endl;
    
    }
    

}


void displayGrandWinner(Player player1, Player player2)
{

cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Race Is Over. Here are the results:\n";
    
    
    cout << player1.getName() << ": " << player2.getPoint() << ":  points\n";
    cout << player2.getName() << ": " <<player2.getPoint() << ": points\n";

if(player1.getPoint() > player2.getPoint())
{

cout << player1.getName() << " is the winner!!\n";

}
    
    
    else if (player2.getPoint() > player1.getPoint())
    {
    cout << player2.getName() << "is the winner!!\n";
    }
    
    else
    {
    cout << "Both Players have tied\n";
    }
    
    
    
}



