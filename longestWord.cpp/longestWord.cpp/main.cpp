/* Houman Irani
*CIS22A
*
*  longestWord.cpp
* Created by Houman Irani on 2/3/18.
*  Copyright © 2018 Houman Irani. All rights reserved.
*
*/

#include <iostream>
using namespace std;

int main() {
    
    string longest_word = "pseudopseudohypoparathyroidism";
    
    cout << "The length of pseudopseudohypoparathyroidism is : " << longest_word.length() << " letters." << endl;
    
    cout << longest_word.substr(12,11) << endl;
    cout << longest_word.substr(23,7) << endl;
    cout << longest_word.substr(0,6) << endl;
    cout << longest_word.substr(16,7) << endl;
    
    return 0;
}
