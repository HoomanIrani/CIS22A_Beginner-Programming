// Houman Irani
// CIS22A
//
//  astrology.cpp
//
//  Created by Houman Irani on 2/22/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main()  {
    
    int month, day;
    string repeat = "y";
    
    
    while("y" == repeat) {
        
    
    cout << "Whats your sign?\n"
    << "Please enter month of your birth (1-12) : ";
    cin >> month;
    
    cout << "Please enter day of your birth (1-31) : ";
    cin >> day;
    
        
        if(month == 3 && day >= 21)   {
            
            cout << "Your sign is Aries." << endl;
            
        }
    
        
       else if(month == 4 && day <= 19)   {
            
            cout << "Your sign is Aries." << endl;
            
        }
    
        
       else if(month == 4 && day >= 20)   {
           
           cout << "Your sign is Taurus." << endl;
           
       }
        
        
       else if(month == 5 && day <= 20)   {
           
           cout << "Your sign is Taurus." << endl;
           
       }
        
        
       else if(month == 5 && day >= 21)   {
           
           cout << "Your sign is  Gemini." << endl;
           
       }
        
        
       else if(month == 6 && day <= 21)   {
           
           cout << "Your sign is  Gemini." << endl;
           
       }
        
        
       else if(month == 6 && day >= 22)   {
           
           cout << "Your sign is Cancer." << endl;
           
       }
        
        
        
       else if(month == 7 && day <= 22)   {
           
           cout << "Your sign is Cancer." << endl;
           
       }
        
        
       else if(month == 7 && day >= 23)   {
           
           cout << "Your sign is Loe." << endl;
           
       }
        
        
       else if(month == 8 && day <= 22)   {
           
           cout << "Your sign is Loe." << endl;
           
       }
        
        
       else if(month == 8 && day >= 23)   {
           
           cout << "Your sign is Virgo." << endl;
           
       }
        
        
       else if(month == 9 && day <= 22)   {
           
           cout << "Your sign is Virgo." << endl;
           
       }
        
        
       else if(month == 9 && day >= 23)   {
           
           cout << "Your sign is Libra." << endl;
           
       }
        
        
       else if(month == 10 && day <= 22)   {
           
           cout << "Your sign is Libra." << endl;
           
       }
        
        
       else if(month == 10 && day >= 23)   {
           
           cout << "Your sign is Scorpio." << endl;
           
       }
        
        
       else if(month == 11 && day <= 21)   {
           
           cout << "Your sign is Scorpio." << endl;
           
       }
        
        
       else if(month == 11 && day >= 22)   {
           
           cout << "Your sign is  Sagittarius." << endl;
           
       }
        
        
       else if(month == 12 && day <= 21)   {
           
           cout << "Your sign is  Sagittarius." << endl;
           
       }
        
       else if(month == 12 && day >= 21)   {
           
           cout << "Your sign is  Capricorn." << endl;
           
       }
        
        
        
       else if(month == 1 && day <= 19)   {
           
           cout << "Your sign is  Capricorn." << endl;
           
       }
        
        
        
       else if(month == 1 && day >= 20)   {
           
           cout << "Your sign is Aquarius." << endl;
           
       }
        
        
       else if(month == 2 && day <= 18)   {
           
           cout << "Your sign is Aquarius." << endl;
           
       }
        
        
       else  {
           
           cout << "Your sign is Pisces." << endl;
           
       }
        
        
        
        cout << "Would you like to run this program again? (y/n) ";
        cin >> repeat;
        
    }
    
    
    return 0;
}
