//  Houman Irani
//  CIS22A
//
//
//  upperLower.cpp
//
//  Created by Houman Irani on 3/1/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main()  {
    
    
    cout << "Welcome to Upper Lower !\n";
    
    string word;
    cout << "Please enter a sentence : ";
    getline(cin, word);
    
    for(int i = 0; i < word.length(); i++)  {
        
        if(word[i] >= 90 && word[i] <= 122)  {
            
            word[i] -= 32;
           
        }
    }
    
    cout << "Your sentence in all upper case: " << word << endl;
    
    
   for(int i = 0; i < word.length(); i++)  {
    
       if(word[i] >= 65 && word[i] <= 90)  {
           
           word[i] += 32;
           
                  }
       
   }
       
       
       cout << "Your sentence in all upper case: " << word << endl;
   
    return 0;
}

