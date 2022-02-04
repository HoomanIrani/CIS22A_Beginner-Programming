// Houman Irani
// CIS22A
//
//
//  multiplication.cpp
//
//  Created by Houman Irani on 2/28/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//


#include <iostream>
using namespace std;

int main()   {
    
        
    int size = 0;
    cout << "***Time to Learn The Times Table!***\n\n";
    
    cout << "Enter the size of the times table: ";
    cin >> size;
    
    
    for (int row = 1; row <= 12; row++) {
        for (int col = 1; col <= size; col++) {
            
            cout << col << " * " << row << " = " << col * row << "\t""\t";
        }
        cout << endl;
        
    }
    
    
    
    return 0;
}
