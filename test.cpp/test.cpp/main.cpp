// Houman Irani
// CIS22A
//
//  main.cpp
//  test.cpp
//
//  Created by Houman Irani on 2/28/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    string msg = "Hello, world!";
    for (int i = 0; i < msg.length(); i++) {
        cout << i << ": " << msg[i] << endl;
    }
    
    return 0;
}
