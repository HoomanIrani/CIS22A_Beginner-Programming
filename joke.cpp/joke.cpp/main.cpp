//Houman Irani
//CIs22A
//
//  joke.cpp
//
//  Created by Houman Irani on 2/10/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
using namespace std;
int main () {

    cout << "Want to hear a bad joke (yes/no)? ";
    string answer;
    cin >> answer;
    
    if (answer == "no") {
    
        cout << "Okay. I will tell you a good one:\n\n";
        cout << "\"I never worry about diets. The only carrots that interest me are the number you get in a diamond.\"" << endl;
        cout << "- Mae West" << endl;
        
    }
    else {
        cout << "\n\"Q: Why did the computer get cold?" << endl;
        cout << "A: Because it forgot to close Windows.\"" << endl;

    }
    
    
  
    
    
    return 0;
}
