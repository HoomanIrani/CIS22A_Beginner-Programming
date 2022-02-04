//  Houman Irani
//  CIS22A
//
//
//  email1.cpp
//
//  Created by Houman Irani on 3/13/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;


bool containsSpace(string email) {
    bool space = false;
    for (int i = 0; i < email.length(); i++) {
        if (email[i] == ' ') {
            
            space = true;
        }
        
    }
    
    return space;
}

bool containsAt(string email) {
    bool at = false;
    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            at = true;
        }
    }
    
    return at;
}


bool correctExtension(string email) {
    bool extension = false;
    if(email.substr(email.length()-4,4) != ".com" && email.substr(email.length()-4,4) != ".org" && email.substr(email.length()-4,4) != ".edu") {
        
        extension = true;
        
    }
    return extension;
}


int main() {
    
    string email;
    bool validEmail = true;
    
    cout << "Please enter an email address: ";
    getline(cin, email);
    
    
    if (containsSpace(email)) {
        cout << "Your email address cannot contain a space." << endl;
        validEmail = false;
    }
    
    if (!containsAt(email)) {
        cout << "Your email address must contain an @ symbol." << endl;
        validEmail = false;
    }
    
    if(correctExtension(email)) {
        cout << "Your email address must end with .com, .edu or .org" << endl;
        validEmail = false;
    }
    
    if (validEmail) {
        cout << "Your email address is valid." << endl;
    } else {
        cout << "Your email address is not valid." << endl;
    }
    
    return 0;
}
