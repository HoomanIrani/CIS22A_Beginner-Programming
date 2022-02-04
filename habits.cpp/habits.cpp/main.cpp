// Houman Irani
// CIS22A
// M - W 9:30 - 11:20
//
//  main.cpp
//  habits.cpp
//  Created by Houman Irani on 1/24/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Lets calculate your costly Habits up to your 75 !" << endl;
    cout << "\nPlease enter your age here : ";
    int age;
    cin >> age;
    
    cout << "Please enter amount of your coslty habits per day : ";
    double cost;
    cin >> cost;

    cout << "\nCurrent age (years) : " << age << endl;
    cout << "Cost of daily habits : $" << cost << endl;
    
    cout << "\nThis year your habits will cost you : $" << cost * 365 << "!" << endl;
    cout << "Between now and age 75, it will cost you : $" << (75 - age) * cost * 365 << "!" << endl;
    cout << "Cost in millions of Dollors is : $" << ((75 - age) * cost * 365)/1000000 << "!" <<endl;
    
    return 0;
}
