//  Houman Irani
//  CIS22A
//
//
//  email.cpp
//
//  Created by Houman Irani on 3/7/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    string email;
    bool containsAt = false;
    bool containsSpace = false;
    bool validEmail = true;
    
    cout << "Please enter an email address: ";
    getline(cin, email);
    
    
    for (int i = 0; i < email.length(); i++) {
        if (email[i] == ' ') {
            containsSpace = true;
        }
    }
    
    
    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            containsAt = true;
        }
    }
    
    if (containsSpace == true) {
        cout << "Your email address cannot contain a space." << endl;
        validEmail = false;
    }
    
    if (containsAt == false) {
        cout << "Your email address must contain an @ symbol." << endl;
        validEmail = false;
    }
    
    if(email.substr(email.length()-4,4) != ".com" && email.substr(email.length()-4,4) != ".org" && email.substr(email.length()-4,4) != ".edu") {
        validEmail = false;
        cout << "Your email address must end with .com, .edu or .org" << endl;
        
    }
    
    if (validEmail == true) {
        cout << "Your email address is valid." << endl;
    } else {
        cout << "Your email address is not valid." << endl;
    }
    
    return 0;
}
