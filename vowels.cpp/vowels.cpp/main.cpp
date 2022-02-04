//  Houman Irani
//  CIS22A
//
//
//  vowels.cpp
//
//  Created by Houman Irani on 3/11/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//


#include <iostream>
using namespace std;
int main()    {
    
    string sentence;
    int numWords = 0;
    
    cout << "Welcome! Give me a sentence and I will count its vowels.\n";
    cout << "PLease enter a sentence : ";
    getline(cin, sentence);
    
    for(int i=0; i < sentence.length(); i++)  {
        
        if(sentence[i] == 'a' || sentence[i] == 'A' ||
           sentence[i] == 'e' || sentence[i] == 'E' ||
           sentence[i] == 'i' || sentence[i] == 'I' ||
           sentence[i] == 'o' || sentence[i] == 'O' ||
           sentence[i] == 'u' || sentence[i] == 'U')   {
                
           
                
            numWords++;
                
            }
        
    }
   
    
    cout << "There are "<< numWords <<" vowels in your sentence." << endl;
    
    
    
    return 0;
    
}
