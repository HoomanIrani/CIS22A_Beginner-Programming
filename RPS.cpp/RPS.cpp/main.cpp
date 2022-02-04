// Houman Irani
// CIS22A
//
//  RPS.cpp
//
//  Created by Houman Irani on 2/21/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main()  {
    
     cout << "Let's play Rock-Paper-Scissors!\n\n";
    
    int x = 1;
    string repeat = "y";
    
    
    while("y" == repeat) {
   
   
    
        
    string p1, p2;
    string s1, s2;
    
  
        
    cout << "\nRock-Paper-Scissors Round " << x << "!\n\n";

    cout << "Player one, please enter your name: ";
    cin >> p1;
    
    cout << "Player two, please enter your name: ";
    cin >> p2;
    
    cout << p1 << ",  enter \"Rock\", \"Paper\", or \"Scissors\": ";
    cin >> s1;
    
     cout << p2 << ",  enter \"Rock\", \"Paper\", or \"Scissors\": ";
    cin >> s2;

    
   
        
           if(s1 == "rock" && s2 == "paper") {
               
               cout << "\nPaper covers rock!\n";
               cout << p2 << " wins !\n";
               
           }
        
          else if(s2 == "rock" && s1 == "paper") {
               
               cout << "\nPaper covers rock!\n";
               cout << p1 << " wins !\n";
               
           }
        
          else if(s2 == "rock" && s1 == "scissors") {
              
              cout << "\nRock breaks scissors!\n";
              cout << p2 << " wins !\n";
        
          }
        
          else if(s1 == "rock" && s2 == "scissors") {
              
              cout << "\nRock breaks scissors!\n";
              cout << p1 << " wins !\n";
              
          }
        
          else if(s1 == "paper" && s2 == "scissors") {
              
              cout << "\nScissors cut paper!\n";
              cout << p2 << " wins !\n";
              
          }
           
          else if(s2 == "paper" && s1 == "scissors") {
              
              cout << "\nScissors cut paper!\n";
              cout << p1 << " wins !\n";
              
          }
           
          else {
              
              cout << "\nIt's a tie!" << endl;
          }
           
           
           cout << "Do you want to play again (y/n): ";
           cin >> repeat;
        
           x++;
    
       }
        
        
        
        
         cout << "\nThanks for playing!" << endl;
    
    return 0;
}
