//Houman Irani
//CIS22A
//
//
//  letterGreade.cpp
//
//  Created by Houman Irani on 2/10/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;
int main () {
    
    
    cout << "Enter a letter grade: ";
    string grade;
    cin >> grade;
    
    if(grade == "A") {
        
        cout << "The numeric valeu is 4.00" << endl;
        
    }
    
    else if(grade == "A-") {
        
        cout << "The numeric valeu is 3.67" << endl;
    }
    
    else if(grade == "B+") {
        
        cout << "The numeric valeu is 3.33" << endl;
    }
    
    else if(grade == "B") {
        
        cout << "The numeric valeu is 3.00" << endl;
    }
    
    else if(grade == "B-") {
        
        cout << "The numeric valeu is 2.67" << endl;
    }
    
    else if(grade == "c+") {
        
        cout << "The numeric valeu is 2.33" << endl;
    }
    
    else if(grade == "c") {
        
        cout << "The numeric valeu is 2.00" << endl;
    }
    
    else if(grade == "C-") {
        
        cout << "The numeric valeu is 1.67" << endl;
    }
    
    else if(grade == "D+") {
        
        cout << "The numeric valeu is 1.33" << endl;
    }
    
    else if(grade == "D") {
        
        cout << "The numeric valeu is 1.00" << endl;
    }
    
    else if(grade == "D-") {
        
        cout << "The numeric valeu is 0.67" << endl;
    }
    
    else {
        
        cout << "The numeric valeu is 0.00" << endl;
    }
    
    
    return 0;
}
