// Houman Irani
// CIS22A
//
//
//  salary.cpp
//
//  Created by Houman Irani on 3/10/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;


double weekly(int a, double b)  {
    
    double sum1 = a * b;
    
    return sum1;
}

double montly(int a, double b)   {
    
    double sum2 = a * b * 4;
    
    return sum2;
}

double yearly(int a, double b)  {
    
    double sum3 = a * b * 50;
    
    return sum3;
}


int main() {
    
    int hours;
    double hourly_wage;
    double weekly_salary = 0;
    double monthly_salary = 0;
    double yearly_salary = 0;
    
    cout << "This program will calculate your weekly, monthly and yearly salary!\n";
    cout << "Please enter your hourly wage: ";
    cin >> hourly_wage;
    
    cout << "Please enter the number of hours you work each week: ";
    cin >> hours;
    

    
  weekly_salary = weekly(hours, hourly_wage);
  monthly_salary = montly(hours, hourly_wage);
  yearly_salary = yearly(hours, hourly_wage);
   
    cout << fixed << setprecision(2);
    
    cout << "You make $" << weekly_salary << " per week.\n";
    cout << "You make $" << monthly_salary << " per month.\n";
    cout << "You make $" << yearly_salary << " per year.\n";
    
    
    return 0;
}

