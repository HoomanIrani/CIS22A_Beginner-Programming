//  Houman Irani
//  CIS22A
//
//  funFunctions.cpp
//
//  Created by Houman Irani on 3/13/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//


#include <iostream>
using namespace std;

int sumDouble(int a, int b)  {
    int sum;
    
    if(a == b) {
        
    sum = 2 * (a + b);
        
        
    }
    
    else {
        
        sum = a + b;
        
        
    }
    return sum;
}


bool makes10(int a, int b)  {
    
    bool ten = false;
    
    if(a == 10 || b == 10) {
        ten = true;
    }
    
    else if (a + b == 10) {
        ten = true;
        
    }
        return ten;
    }


bool monkeyTrouble(bool aSmile, bool bSmile)  {
    
    bool monkey = false;
    
if(aSmile == true && bSmile == true)  {
    monkey = true;
    
    }
    
else if (aSmile == false && bSmile == false) {
    monkey = true;
    
}
    
    return monkey;
    
}


   bool or35(int a)  {
    
   bool module = false;
    
        
        if(a % 3 == 0 || a % 5 == 0)  {
            
            module = true;
            
        }
       
       return module;
}
    
    
    string notString(string str)   {
    string x;
        
    if(str.substr(0,3) != "not") {
    
       x = "not " + str;
        
      
    }
    else if (str.substr(0,3) == "not")   {
        
        x = str;
      
    }
        return x;
}

    
    string frontBack(string str)    {
        
        
        char first = str[0];
        char last = str[str.length()-1];
        str[0] = last;
        str[str.length()-1] = first;
        
            
        
        return str;
      }

    
    bool hasTeen(int num1, int num2, int num3)  {
    
           bool teen = false;
        if((num1 >= 13 && num1 <= 19) || (num2 >= 13 && num2 <= 19) || (num3 >= 13 && num3 <= 19))  {
            
            teen = true;
            
        }
        
            return teen;
    }

           
           
    int main()    {
        
    int result;
    bool answer;
    string value;
    cout << "***Testing sumDouble***"<< endl << endl;
    result = sumDouble(1, 2);
    cout << "Should print 3: " << result << endl;
    result = sumDouble(3, 2);
    cout << "Should print 5: " << result <<endl;
    result = sumDouble(2, 2);
    cout << "Should print 8: " << result << endl << endl;
    
    cout << "***Testing makes10***"<< endl << endl;
    answer = makes10(9, 10);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = makes10(9, 9);
    cout << "Should be false: " << answer << endl;
    answer = makes10(1, 9);
    cout << "Should be true: " << answer << endl;
    
    cout << "***Testing monkeyTrouble***"<< endl << endl;
    answer = monkeyTrouble(true, true);
    cout << "Should be true: " << answer << endl;
    answer = monkeyTrouble(false, false);
    cout << "Should be true: " << answer << endl;
    answer = monkeyTrouble(true, false);
    cout << "Should be false: " << answer << endl << endl;
    
    cout << "***Testing or35***"<< endl << endl;
    answer = or35(3);
    cout << "Should be true: " << answer << endl;
    answer = or35(10);
    cout << "Should be true: " << answer << endl;
    answer = or35(8);
    cout << "Should be false: " << answer << endl << endl;
    
    cout << "***notString***"<< endl << endl;
    value = notString("candy");
    cout << "Should be not candy: " << value << endl;
    value = notString("x");
    cout << "Should be not x: " << value << endl;
    value = notString("not bad");
    cout << "Should be not bad: " << value << endl << endl;
    
    cout << "***frontBack***"<< endl << endl;
    value = frontBack("code");
    cout << "Should be eodc: " << value << endl;
    value = frontBack("a");
    cout << "Should be a: " << value << endl;
    value = frontBack("ab");
    cout << "Should be ba: " << value << endl << endl;
    
    
    cout << "***Testing hasTeen***"<< endl << endl;
    answer = hasTeen(13, 20, 10);
    cout << "Should be true: " << answer << endl;
    answer = hasTeen(20, 19, 10);
    cout << "Should be true: " << answer << endl;
    answer = hasTeen(20, 10, 13) ;
    cout << "Should be true: " << answer << endl;
    answer = hasTeen(20, 10, 45) ;
    cout << "Should be false: " << answer << endl << endl;
    
    cout << "***End of Tests***" << endl;
    
    
    return 0;
    
}

