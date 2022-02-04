//Houman Irani
//CIS22A
//
//
//  monthdays.cpp
//
//  Created by Houman Irani on 2/10/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;
int main () {
    
    cout << "I will print the number of days in a month.\n";
    cout << "Enter the month (1-12): ";
    int month;
    cin >> month;
    
    if(month < 1 || month > 12) {
        
        cout << "Invalid entry!\n";
        cout << "Enter a number between 1 to 12." << endl;
        
    }
    
    
    else if(month == 1) {
        
        cout << "30 days" << endl;
        
    }
    
    else if(month == 2) {
        
        cout << "28 or 29 days" << endl;
    
    }
    
else if(month == 3) {

cout << "31 days" << endl;

}
    
else if(month == 4) {
    
    cout << "30 days" << endl;
    
}
    
else if(month == 5) {
    
    cout << "31 days" << endl;
    
}
    
else if(month == 6) {
    
    cout << "30 days" << endl;
    
}
    
else if(month == 7) {
    
    cout << "31 days" << endl;
    
}
    
else if(month == 8) {
    
    cout << "31 days" << endl;
    
}
    
else if(month == 9) {
    
    cout << "30 days" << endl;
    
}
    
else if(month == 10) {
    
    cout << "31 days" << endl;
    
}
    
else if(month == 11) {
    
    cout << "30 days" << endl;
    
}
    
else   {
    
    cout << "31 days" << endl;
    
}
    
    
    
    
    
    return 0;
}
