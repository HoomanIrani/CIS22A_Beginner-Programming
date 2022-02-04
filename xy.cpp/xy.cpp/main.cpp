// Houman Irani
// CIS 22A
//
//  xy.cpp
//
//  Created by Houman Irani on 2/25/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()  {
    
    double x = -5;
    
    cout << "x\t\t y" << endl;
    
    for(double y = x; x <= 5; x += 0.5)  {
        
        y = pow(x,5);
        
        cout << x << "\t" << "\t" << y << endl;
        cout << fixed << setprecision(1) << endl;
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
