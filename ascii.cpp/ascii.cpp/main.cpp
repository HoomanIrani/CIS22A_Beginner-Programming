// Houman Irani
//  main.cpp
//  ascii.cpp
//
//  Created by Houman Irani on 2/22/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//


#include <iostream>
using namespace std;

int main() {
    cout << "Displaying the characters from 32 to 127:\n\n";
    for (int i = 32; i <=127; i++)
    {
        cout << i << '\t' << (char) i << endl;
    }
}
