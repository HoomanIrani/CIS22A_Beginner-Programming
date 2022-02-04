//  Houman Irani
//  CIS22A
//
//  main.cpp
//  numWords.cpp
//
//  Created by Houman Irani on 2/28/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main()  {
    
string sentence;

    cout << "Give me a sentence, and I will count the number of words." << endl;
    cout << "Please enter your sentence: ";
    getline(cin, sentence);
    
    int numWords = 1;
    
    for (int i = 0; i < sentence.length(); i++) {
        
        if (sentence[i] == ' ') {
            numWords++;
        }
        
    }
    
    cout << "There are " << numWords << " words in \"" << sentence << "\"" << endl;
    
    return 0;
}
