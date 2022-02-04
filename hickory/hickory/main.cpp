// Houman Irani
// CIS22A
//
//  hickory.cpp
//
//  Created by Houman Irani on 2/19/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
   
    
    for ( int hickory = 0; hickory <= 150; hickory++) {
        
        
        
        if(hickory % 15 == 0) {
            
            cout << "Dock! The Mouse Ran Up the Clock!" << endl;
            
        }
        
        else if (hickory % 5 == 0) {
            
            cout << "Dickory!" << endl;
        }
        
        else if (hickory % 3 == 0)   {
            
            
            cout << "Hickory!" << endl;
        }
        
        else {
            
             cout << hickory << endl;
            
        }
        
        
    }
    
    
    return 0;
}
