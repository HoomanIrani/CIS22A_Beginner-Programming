//  Houman Irani
//  CIS22A
//
//  animals2.cpp
//
//  Created by Houman Irani on 3/21/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;




int main() {
    
    const int SIZE = 5;
    string animals[SIZE] = {"sheep", "donkeys", "goats", "geese", "cats"};
    int number_animals[SIZE] = {5, 3, 8, 2, 4};
    

    cout << "Other animals at our farm" << endl;
    
    for(int i = 0; i < SIZE; i++)   {
        
        cout << number_animals[i] << " " << animals[i] << endl;
        
        
    }
    
    
    
    return 0;
}
