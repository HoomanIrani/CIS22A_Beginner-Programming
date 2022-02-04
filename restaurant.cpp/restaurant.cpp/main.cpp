//  Houman Irani
//  CIS22A
//
//
//  restaurant.cpp
//
//  Created by Houman Irani on 3/18/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;


void addTax(double& price);
//Calculate the tax rate


void calculateTip(double&  );
//Calculate the amount of tip


void formatPrice(double price);
//Set number of decimals


void calculateBill(double& price, double percent);
//Calculate the final amount of bill



int main()   {
    
    
    cout << "Welcome to the Restaurant Calculator\n";
    cout << "\nEnter the price of your meal: ";
    double price;
    cin >> price;
    
    
    while (cin.fail()) {
        
        cout << "Please enter numbers not letters." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        
        cout << "\nEnter the price of your meal: ";
        cin >> price;
        
        
    }
    
    double percent;
    cout << "Enter the percent tip (10-25): ";
    cin >> percent;
    
    while (cin.fail()) {
        
        cout << "Please enter numbers not letters." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        
        cout << "Enter the percent tip (10-25): ";
        cin >> percent;
        
    }
    
    
    calculateBill(price, percent);
    cout << "Goodbye!";
    
    
    return 0;
}




void addTax(double& price)   {
    price *= 1.0925;
    
    
    return;
}



void calculateTip(double& price, double percent)  {
    
    price *= (percent / 100 + 1);
    
    
    return;
}


void formatPrice(double price)  {
    
    cout << fixed << setprecision(2) << endl;
    
    cout << "With tax and tip, your total comes to... $ " << price << endl;
    
    return;
}



void calculateBill(double& price, double percent){
    addTax(price);
    calculateTip(price, percent);
    formatPrice(price);
    
    
    
    return;
}

