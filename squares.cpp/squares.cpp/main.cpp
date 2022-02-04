// Houman Irani
//  CIS22A
//
//
//  squares.cpp
//
//  Created by Houman Irani on 3/12/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;


void rectangles(int length1, int width1) {
    
    for(int row = 1; row <= width1; row++) {
        for(int col = 1; col <= length1; col++) {
            
            cout << "*";
        }
        cout << endl;
        
    }
    
    
    return;
}

void triangles(int lengthBase) {
    
    for(int row = 1; row <= lengthBase; row++) {
        for(int col = 1; col <= row; col++) {
            
            cout << "*";
        
        }
        cout << endl;
    }
    
    return;
}

void squares(int length1side)  {
    
    
    for(int row = 1; row <= length1side; row++) {
        for(int col = 1; col <= length1side; col++) {
            
            cout << "*";
            
        }
        cout << endl;
    }
    
    
    return;
}


    
 int main()  {
        
        
    int length = 0;
    int width = 0;
    int base = 0;
    string shape;
    string repeat = "y";
     
     
    while (repeat == "y") {
        cout << "I will print squares for you!\n";
        cout << "Rectangles and triangles, too!\n\n";
        
        cout << "Enter the shape that you would like to print (rectangle, triangle or square): ";
        cin >> shape;
        
        if(shape == "square") {
            
            cout << "Enter the length of the side of square : ";
            cin >> length;
            
            squares(length);
        }
        else if(shape == "rectangle")   {
        
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            
            rectangles(length, width);
            
        }
        else if(shape == "triangle")  {
            
            cout << "Enter the length of the triangle base: ";
            cin >> base;
            
           triangles(base);
        }
        
        
        
        cout << "Would you like me to print more shape for you? (y/n)";
        cin >> repeat;
        
        
        
    }
    cout << "Thanks for \"square\" dancing with me!" << endl;
    
    return 0;
   }
