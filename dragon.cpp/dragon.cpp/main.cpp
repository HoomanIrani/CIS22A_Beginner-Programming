//Houman Irani
//CIS22A
//
//  dragon.cpp
//
//  Created by Houman Irani on 2/1/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main () {
  
    cout << "Want to learn your \"Dragon name?\"\n\n";
    
    cout  << "Please enter your First and Last name : ";
    string firstName, lastName;
    cin >> firstName;
    cin >> lastName;
    
    cout << "Please enter your mother's First name : ";
    string motherName;
    cin >> motherName;
    
    cout  << "Please enter your father's First name : ";
    string fatherName;
    cin >> fatherName;
    
    string dragonName = lastName.substr(0,2) + firstName.substr(firstName.length()-2,2) + motherName.substr(0,2) + fatherName.substr(fatherName.length()-1,1);
    cout << "Your \"dragon name\" is :" << dragonName << endl;
    
    
    
    
    
    
    return 0;
}

