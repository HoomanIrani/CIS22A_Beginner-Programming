// Houman Irani      Safwan Siddiqi
// CIS22A
//
//
//  scores.cpp
//
//  Created by Houman Irani on 2/28/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
#include <climits>
using namespace std;


int main() {
    
    int sumScores = 0, nextScore = 0, count = 0;
    
    cout << "Enter a series of scores or -1 to quit\n\n";
    do {
        
        cout << "Enter score #" << count << ": ";
        cin >> nextScore;
        
        if (cin.fail()) {
            cout << "Error! PLease enter a number:";
            cin.clear();
            cin.ignore(1000, '\n');
        } else if (nextScore >= 0) {
            sumScores += nextScore;
            count++;
        }
        
    } while (nextScore >= 0);
    
    cout << "sum of scores : " << sumScores << endl;
    
    return 0;
}
