//  Houman Irani       Safwan Siddiqi
//  CIS22A
//
//
//  dateTime.cpp
//
//  Created by Houman Irani on 3/12/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include<iostream>
using namespace std;


void DateAmerican(int a, int b, int c)  {
    
    cout << c << "/" << b << "/" << a <<endl;
    
    
    return;
}

void DateEuropean (int a, int b, int c) {
    cout << b << "/" << c << "/" << a <<endl;
    return;
}

void TimeAmerican (int hour, int minutes, string time) {
    if (hour >= 0 && hour <= 12) {
        cout << hour << ":" << minutes << " am";
    }
    else {
        cout << hour - 12 << ":" << minutes << " pm";
    }
    return;
}

void TimeEuropean (int hour, int minutes) {
    cout << hour << ":" << minutes;
    return;
}

int main() {
    int year;
    int day;
    int month;
    int hour;
    int minutes;
    string dayEve;
    
    cout << "Welcome! This program will print dates and times in both the American and European styles!\n\n";
    
    cout <<"First, let's print a formatted date.\n\n";
    
    cout << "Please enter the current year: ";
    cin >> year;
    cout << "Please enter the current month: ";
    cin >> month;
    cout << "Please enter the current day: ";
    cin >> day;
    cout << endl;
    
    DateAmerican(year, day, month);
    DateEuropean(year, day, month);
    
    cout << "\nNow, let's print a formatted time.\n\n";
    
    cout << "Please enter the current hour: ";
    cin >> hour;
    cout << "Please enter the current minutes: ";
    cin >> minutes;
    cout << "Please enter whether it is \"morning\" or \"evening\": ";
    cin >> dayEve;
    cout << endl;
    
    cout << "The current time in American style is: ";
    TimeAmerican(hour, minutes, dayEve);
    cout << "\nThe current time in European style is: ";
    TimeEuropean(hour, minutes);
    
    cout << "\nBye! See you another day!" << endl;
    
    return 0;
}
