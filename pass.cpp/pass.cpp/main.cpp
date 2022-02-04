//Houman Irani
//CIS22A
//
//
//  pass.cpp
//
//  Created by Houman Irani on 2/3/18.
//  Copyright © 2018 Houman Irani. All rights reserved.

#include <iostream>
using namespace std;

int main () {
    
    cout << "Enter your score : ";
    int score;
    cin >> score;
    
    if (score >= 60) {
        
        cout << "Pass !" << endl;
        
    }
    else {
        
        cout << "Fail :)" << endl;
        
    }
    
    
    
    return 0;
}
