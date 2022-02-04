//Houman Irani
//CIS22A
//M-W 9:30 - 11:20
//
//  pastries.cpp
//
//  Created by Houman Irani on 1/24/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    
    cout << "Welcome to C++ pastry!\n";
    cout << "let me help you with your order please.\n\n";
    
    cout << "Our Menu:" << endl;
    cout << "Eclairs...      $4.50\n";
    cout << "Bear Claws...   $3.95\n";
    cout << "Croissant...    $2.95\n";
    cout << "Cupcakes...     $3.50\n";
    
    
    const double ECLAIRS = 4.50;
    const double BEAR_CLAWS = 3.95;
    const double CROISSANT = 2.95;
    const double CUPCAKES = 3.50;
    
    
    cout << "\nPlease enter number of Eclairs : ";
    int eclairs;
    cin >> eclairs;
    
    cout << "Please enter number of Bear claws : ";
    int bear_claws;
    cin >> bear_claws;
    
    cout << "Please enter number of Croissants : ";
    int croissants;
    cin >> croissants;
    
    cout << "Please enter number of Cupcakes : ";
    int cupcakes;
    cin >> cupcakes;
    
    cout << "\nHere is your order summary :\n";
    
    cout << eclairs << " Eclairs\n";
    cout << bear_claws << " Bear claws\n";
    cout << croissants << " Croissants\n";
    cout << cupcakes << " Cupcakes\n\n";

    cout << "Your order following:\n";
    
    cout << fixed << setprecision(2);
    cout << eclairs << " eclairs....       $" << ECLAIRS * eclairs << endl;
    cout << bear_claws << " bear claws....    $" << BEAR_CLAWS * bear_claws << endl;
    cout << croissants << " croissants....    $" << CROISSANT * croissants << endl;
    cout << cupcakes << " cupcakes....      $" << CUPCAKES * cupcakes << endl;
    
    cout << "\ntotal:              $" << (ECLAIRS * eclairs) + (BEAR_CLAWS * bear_claws)
    + (CROISSANT * croissants) + (CUPCAKES * cupcakes) << endl;
    
    cout << "Thank you for your order! Please come again!" << endl;
    
    
    return 0;
}
