//  Houman Irani
//  CIS22A
//
//  animals.cpp
//
//  Created by Houman Irani on 3/21/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    
    ifstream fin;
    ofstream fout;
    
    fout << "Animals at our farm" << endl;
    
    fin.open("inFile.txt");
    
    if(fin.fail())   {
        
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    
    fout.open("outfile.txt");
    
    if(fout.fail())   {
        
        cout << "Output file failed to open.\n";
        exit(-1);
    }
    
    int first, second, third, fourth, fifth;
    fin >> first;
    fin >> second;
    fin >> third;
    fin >> fourth;
    fin >> fifth;
    
    
    fout << first << " chickens" << endl;
    fout << second << " cows" << endl;
    fout << third << " ducks" << endl;
    fout << fourth << " horses" << endl;
    fout << fifth << " pigs" << endl;
    
    
    
    fin.close();
    fout.close();
    
    
    
    return 0;
}
