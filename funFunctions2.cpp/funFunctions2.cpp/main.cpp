//  Houman Irani
//  CIS22A
//
//
//  funFunctions2.cpp
//
//  Created by Houman Irani on 3/13/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

bool icyHot(int temp1, int temp2);
//Given two temperatures, return true if one is less than 0
//and the other is greater than 100.
//icyHot(120, -1) → true
//icyHot(-1, 120) → true
//icyHot(2, 120) → false

bool startHi(string str);
//Given a string, return true if the string starts
//with "hi" and false otherwise.
//startHi("hi there") → true
//startHi("hi") → true
//startHi("hello hi") → false

string frontTimes(string str, int n);
//Given a string and a non-negative int n,
//the front of the string is the first 3 chars,
//or whatever is there if the string is less than length 3
//Return n copies of the front;
//Hint: use a for loop and string concatenation
//frontTimes("Chocolate", 2) → "ChoCho"
//frontTimes("Abcd", 3) → "AbcAbcAbc"
//frontTimes("Oy", 4)  → "OyOyOyOy"

int close10(int a, int b);
//Given 2 int values, return whichever value is nearest to the value 10,
//or return 0 in the event of a tie.
//Hint: recall that fabs(n) returns the absolute value of a number.
//close10(8, 13) → 8
//close10(13, 8) → 8
//close10(13, 7) → 0

bool doubleX(string str);
//Given a string, return true if the first instance of "x" in
//the string is immediately followed by another "x".
//Hint: use a for loop and string indexing ([] syntax)
//doubleX("axxbb") → true
//doubleX("axaxax") → false
//doubleX("xxxxx") → true

int main() {
    int result;
    bool answer;
    string value;
    cout << boolalpha;
    cout << "***Testing icyHot***" << endl << endl;
    answer = icyHot(120, -1);
    cout << "Should print true: " << answer << endl;
    answer = icyHot(-1, 120);
    cout << "Should print true: " << answer << endl;
    answer = icyHot(2, 120);
    cout << "Should print false: " << answer << endl << endl;
    
    cout << "***Testing startHi***" << endl << endl;
    answer = startHi("hi there");
    cout << "Should print true: " << answer << endl;
    answer = startHi("hi");
    cout << "Should print true: " << answer << endl;
    answer = startHi("hello hi");
    cout << "Should print false: " << answer << endl;
    
    cout << "***Testing frontTimes***" << endl << endl;
    value = frontTimes("Chocolate", 2);
    cout << "Should print ChoCho: " << value << endl;
    value = frontTimes("Abcd", 3);
    cout << "Should print AbcAbcAbc: " << value << endl;
    value = frontTimes("Oy", 4);
    cout << "Should print OyOyOyOy: " << value << endl << endl;
    
    cout << "***Testing close10***" << endl << endl;
    result = close10(8, 13);
    cout << "Should print 8: " << result << endl;
    result = close10(13, 8);
    cout << "Should print 8: " << result << endl;
    result = close10(13, 7);
    cout << "Should print 0: " << result << endl << endl;
    
    cout << "***Testing doubleX***" << endl << endl;
    answer = doubleX("axxbb");
    cout << "Should print true: " << answer << endl;
    answer = doubleX("axaxax");
    cout << "Should print false: " << answer << endl;
    answer = doubleX("xxxxx");
    cout << "Should print true: " << answer << endl << endl;
    
    cout << "***End of Tests***" << endl;
    
    return 0;
}


bool icyHot(int temp1, int temp2)  {
    bool temp = false;
    
    if(temp1 < 0 && temp2 > 100)  {
        
        temp = true;
    }
    else if(temp1 > 100 && temp2 < 0)  {
        
        temp = true;
    }
    
    else   {
        
        temp = false;
    }
    
    return temp;
}


bool startHi(string str)  {
    bool start = false;
    
    if(str.substr(0,2) == "hi")    {
        
        start = true;
        
    }
    
    else  {
        
        start = false;
        
    }
    
    return start;
}


string frontTimes(string str, int n) {
    
    string concat = "";
    
    if(str.length() >= 3) {
        for(int i = 0; i < n; i++)   {
            
            concat+= str.substr(0,3);
            
        }
    }
    
    
    else  {
        for(int i = 0; i < n; i++)   {
            
            concat+= str;
            
        }
    }
    
    return concat;
}


int close10(int a, int b)   {
    if(fabs(10 - a) > fabs(10 - b))   {
        
        return b;
    }
    
    else if(fabs(10 - a) < fabs(10 - b))   {
        
        
        return a;
    }
    
    else if(fabs(10 - a) == fabs(10 - b))  {
        
        return 0;
    }
    
    
    return 0;
}


bool doubleX(string str)  {
    bool stx = false;
    
    for(int i = 0; i < str.length(); i++)   {
        
        if(str[i] == 'x' && str[i + 1] == 'x') {
            
            stx = true;
            
        }
        
    }
    
    return stx;
}
