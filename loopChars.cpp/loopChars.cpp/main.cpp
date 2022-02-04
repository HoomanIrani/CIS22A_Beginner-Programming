// HoumanIrani
// CIS22A
//
//
//  loopChars.cpp
//
//  Created by Houman Irani on 2/28/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main()  {
    
    
    int n;
    char ch;
    cout << "** Loopy Characters!**\n\n";
    cout << "Enter an integer between 1 and 20: ";
    cin >> n;
    
    cout << "Enter a single character: ";
    cin>> ch;
    
    
    cout << "#1. Printing " << ch << " " << n << " times:\n";
    
    for(int i = 1; i <= n; i++) {
        
        cout << ch;
        
    }
    
    cout << endl << endl;
    
    
    
    cout << "#2. Printing starting with " << ch << " and the following " << n - 1
    << " ASCII characters:\n";
    
    int start = (int) ch;
    
    for(int s = start; s <= (start + n-1); s++) {
    
        cout << (char)s;
        
    }
    
    cout << endl << endl;
    
    
    
    cout << "#3. Printing " << ch << " character " << n
    << " times substituting '*' on odd indexes:\n";
    
    for(int j=1; j <= n; j++)  {
        
        if(j % 2 == 0)
        {
            
            cout << "*";
            
        }
        
        else {
            
            cout << ch;
            
        }
        
        
    }
    
    cout << endl << endl;
    
    
    cout << "#4. Printing " << ch << " character " << n
    << " times substituting (+) every fifth character:\n";
    
    for(int k = 1; k <= n; k++) {
        
        if(k % 5 == 0) {
            
            cout << "+";
            
        }
        
        else {
            
            cout << ch;
            
        }
        
    }
    
    
    cout << endl << endl;
    
    
    cout << "#5. Printing " << n << " lines of the previous loop:\n";

    for (int l = 1; l <= 10; l++)  {
    
    for(int k = 1; k <= n; k++) {
        
        if(k % 5 == 0) {
            
            cout << "+";
            
        }
        
        else {
            
            cout << ch;
            
        }
        
    }
 
        cout << endl;
        
    }
    
    
    return 0;
}
