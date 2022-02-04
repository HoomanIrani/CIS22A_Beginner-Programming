//  Houman Irani
//  CIS22A
//
//
//  vowels2.cpp
//
//  Created by Houman Irani on 3/12/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int countVowels(string sentence)     {
    
    int numWords = 0;
    
    for(int i=0; i < sentence.length(); i++)  {
        
        if(sentence[i] == 'a' || sentence[i] == 'A' ||
           sentence[i] == 'e' || sentence[i] == 'E' ||
           sentence[i] == 'i' || sentence[i] == 'I' ||
           sentence[i] == 'o' || sentence[i] == 'O' ||
           sentence[i] == 'u' || sentence[i] == 'U')   {
            
            numWords++;
            
        }
    }
    
    return numWords;
}



 int countLetters(string s)   {
 int numLetters = 0;
     
     for(int i = 0; i < s.length(); i++) {
         if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 90 && s[i] <= 122))
            {
                
                numLetters++;
            }
         
         
         
         
     }
     return numLetters;
 }

 int main()
{
    string sentence;
    int numVowels;
    int numLetters;
    cout << "Enter a sentence or q to quit: ";
    getline(cin, sentence);
    
    while(sentence != "q" && sentence != "Q" && sentence != "QUIT" && sentence != "Quit")  {
        numVowels = countVowels(sentence);
        numLetters = countLetters(sentence);
        cout << "There are vowels " << numVowels << " in your sentence, and " << numLetters << " letters\n";
        
        
        cout << "Enter a sentence or q to quit: ";
        getline(cin, sentence);
            
    }
    
    
    cout << "Goodbye";
    return 0;
}
