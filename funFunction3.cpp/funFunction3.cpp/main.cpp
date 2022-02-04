//  Houman Irani
//  CIS22A
//
//  funFunction3.cpp
//
//  Created by Houman Irani on 3/17/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//


#include <iostream>
using namespace std;

bool isLetter(char letter)  {
    bool sletter;
    
    if(letter >= 65 && letter <= 90)    {
        
        sletter = true;
        
    }
  else if(letter >= 97 && letter <= 122)  {
        
        sletter = true;
        
    }

  else   {
      
      
      sletter = false;
  }
    
    
    return sletter;
}



bool isNumber(char num)  {
    bool xnum;
    
    if(num >= 48 && num <= 57) {
        
        xnum = true;
        
    }
    
    else {
        
        xnum = false;
        
    }
    
    return xnum;
}



void capitalizeLetter(char& letter)  {
    
        if(letter >= 90 && letter <= 122)   {
            
            
            letter -= 32;
        }
    
        else if(letter >= 65 && letter <= 90)  {
            
            letter;
            
        }
    

    return;
}



void capitalizeString(string& str)  {
    
    for(int i = 0; i < str.length(); i++)  {
        
        if(str[i] >= 90 && str[i] <= 122)  {
            
            str[i] -= 32;
            
        }
        
    }
        return;
}


    void spaceToComma(string& list) {
        for(int i = 0; i < list.length(); i++)  {
            if(list[i] == ' ') {
                
                list[i] = ',';
                
            }
            
        }
        
        return;
    }


    void plusOut(string& str) {
        for(int i = 0; i < str.length(); i++)  {
            if(str[i] >= 48 && str[i] <= 57) {
                
                str[i] = '+';
                
            }
            
        }
        
        return;
        
        
    }

    

    int main()    {

    int result;
    bool answer;
    string value;
    
    cout << boolalpha << "***Testing isLetter***"<< endl << endl;
    answer = isLetter('d');
    cout << "Should be true: " << answer << endl;
    answer = isLetter('D');
    cout << "Should be true: " << answer << endl;
    answer = isLetter('!');
    cout << "Should be false: " << false << endl;
    
    cout << "***Testing isNumber***"<< endl << endl;
    answer = isNumber('a');
    cout << "Should be false: " << answer << endl;
    answer = isNumber('9');
    cout << "Should be true: " << answer << endl << endl;
    
    cout << "***Testing capitalizeLetter***"<< endl << endl;
    char lower = 'a';
    capitalizeLetter(lower);
    cout << "Should print A: " << lower << endl;
    char upper = 'A';
    capitalizeLetter(upper);
    cout << "Should print A: " << upper << endl << endl;
    
    cout << "***Testing capitalizeString***"<< endl << endl;
    string str = "I love cookies!";
    capitalizeString(str);
    cout << "Should print I LOVE COOKIES!: " << str << endl;
    str = "124 East Central Ave";
    capitalizeString(str);
    cout << "Should print 124 EAST CENTRAL AVE: " << str << endl << endl;
    
    cout << "***Testing spaceToComma***"<< endl << endl;
    str = "cats hats bats";
    spaceToComma(str);
    cout << "Should be cats,hats,bats: " << str << endl;
    str = "I love cookies! ";
    spaceToComma(str);
    cout << "Should be I,love,cookies!,: " << str << endl << endl;
    
    
    cout << "***Testing plusOut***"<< endl << endl;
    str = "123 East 9th St";
    plusOut(str);
    cout << "+++ East +th St: " << str << endl;
    str = "Agent 007";
    plusOut(str);
    cout << "Should be Agent +++: " << str << endl << endl;
    
    cout << "***End of Tests***" << endl;
    
    return 0;
        
    }

