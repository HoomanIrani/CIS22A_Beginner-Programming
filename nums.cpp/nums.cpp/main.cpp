//  Houman Irani
//  CIS22A
//
//  nums.cpp
//
//  Created by Houman Irani on 3/21/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;



int main() {
    int num;
    double sum = 0;
    double product = 1;
    
    cout << "Enter the number of numbers: ";
    cin >> num;
    double number[num];
    
    cout << "Enter " << num << " numbers: " << endl;
    
    for(int i = 1; i <= num; i++) {
        double value;
        
        cout << "Number " << i << ":";
        cin >> value;
        number[i] = value;
        
        
        sum += value;
        product *= value;
        
    }
    
    
    
        cout << fixed << setprecision(1) << endl;
        cout << "The sum of the numbers is: " << sum << endl;
        cout << "And the product is: " << product << endl;

    
    return 0;
 }
