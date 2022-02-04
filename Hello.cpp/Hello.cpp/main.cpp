//  Houman Irani
//  CIS22A
//
//
//  Hello.cpp
//
//  Created by Houman Irani on 3/8/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main()  {
    string sentence;
    int guess;
    int numwords = 1;
    int numletters = 0;
    
    cout << "Think of a sentence in your mind." << endl;
    cout << "Later I will tell you how many words and letters are in your sentence." << endl << endl;
    
    cout << "Enter a guess for number of letters in your sentence. (don't count): ";
    cin >> guess;
    
    cout << "Please enter your sentence :" ;
    cin >> ws;
    getline(cin, sentence);
    
    cout << endl;
    
    for(int i = 0;i < sentence.length();i++)  {
        if(sentence[i] == ' ') {
            
            numwords++;
            
        }
        
        else {
            
            numletters++;
            
        }
        
    }
    
    cout << "There are " << numwords << " words in \"" << sentence << "\"" << endl;
    cout << "And " << numletters << " letters." << endl;
    
    if(numletters == guess) {
        
        cout << "You guessed right!" << endl;
    }
    
    else {
        
        cout << "You guessed wrong!" << endl;
        
    }
    
    
    
    
    return 0;
}

