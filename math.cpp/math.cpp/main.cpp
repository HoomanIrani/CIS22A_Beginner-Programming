//Houman Irani
//CIS22A
//
//  math.cpp
//  Created by Houman Irani on 1/29/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main () {
 
    cout << "Please enter your number : ";
    double num;
    cin >> num;
    
    cout << "\nThe Square of " << num << " is : " << pow(num, 2) << endl;
    cout << "The cube of " << num << " is : " << pow(num, 3) << endl;
    cout << "The quartic of " << num << " is : " << pow(num, 4) << endl;
    cout << "The ceiling of " << num << " is : " << ceil(num) << endl;
    cout << "The floor of " << num << " is : " << floor(num) << endl;
    cout << "The square root of " << num << " is : " << sqrt(num) << endl;
    cout << "The logharithem of " << num << " is : " << log(num) << endl;
    
    return 0;
}
