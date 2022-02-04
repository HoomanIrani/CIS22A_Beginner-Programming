//Houman Irani
//CIS22A
//
//
//  studentId.cpp
//
//  Created by Houman Irani on 2/10/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//


#include <iostream>
using namespace std;
int main ()  {
    
    cout << "Please enter your 8 digits student id number: ";
    string studentId;
    cin >> studentId;
    
    if(studentId.length() != 8 ) {
        
        cout << "Sorry! That ID is invalid." << endl;
        cout << "Please run the programm again.\n";
    }

    else {
        
        cout << "You entered: " << studentId.substr(0,3) << " - " << studentId.substr(3,3)
        << " - " << studentId.substr(6,2) << endl;
        
    }
    
    
    return 0;
}
