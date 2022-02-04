//  Houman Irani
//  CIS22A
//
//
//  planet
//
//  Created by Houman Irani on 2/12/18.
//  Copyright © 2018 Houman Irani. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main ()  {
    
    cout << "Welcome!" << endl;
    cout << "What do you weigh on other planets?" << endl;
    
    cout << "Enter your weight in pounds: ";
    double weight;
    cin >> weight;
    
    
    cout << "Now, select from one of the following planets:" << endl;
    cout << "   Mercury\n";
    cout << "   Venus\n";
    cout << "   Mars\n";
    cout << "   Jupiter\n";
    cout << "   Saturn\n";
    cout << "   Uranus\n";
    cout << "   Neptune\n";
    cout << "   Pluto\n\n";
    
    
    const double MERCURY_MULT = 0.38;
    const double VENUS_MULT = 0.91;
    const double MARS_MULT = 0.38;
    const double JUPITER_MULT = 2.54;
    const double SATURN_MULT = 1.08;
    const double URANUS_MULT = 0.91;
    const double NEOTUNE_MULT = 1.19;
    const double PLUTO_MULT = 0.06;
    
    
    cout << "Please enter the planet: ";
    string planet;
    cin >> planet;
    
    cout << fixed << setprecision(1);
    
    if(planet == "MERCURY" || planet == "mercury")  {
        
        cout <<"You weigh " << weight * MERCURY_MULT << " IBs on mercury\n";
        
    }
    
    else if(planet == "VENUS" || planet == "venus") {
        
        cout <<"You weigh " << weight * VENUS_MULT << " IBs on Venus\n";
        
    }
    
    else if(planet == "MARS" || planet == "mars") {
        
        cout <<"You weigh " << weight * MARS_MULT << " IBs on Mars\n";
        
    }
    
    else if(planet == "JUPITER" || planet == "jupiter") {
        
        cout <<"You weigh " << weight * JUPITER_MULT << " IBs on Jupiter\n";
        
    }
    
    else if(planet == "SATURN" || planet == "saturn") {
        
        cout <<"You weigh " << weight * SATURN_MULT << " IBs on Saturn\n";
        
    }
    
    else if(planet == "URANUS" || planet == "uranus") {
        
        cout <<"You weigh " << weight * URANUS_MULT << " IBs on Uranus\n";
        
    }
    
    else if(planet == "NEOTUNE" || planet == "neotune") {
        
        cout <<"You weigh " << weight * NEOTUNE_MULT << " IBs on Neotune\n";
        
    }
    
    else if(planet == "PLUTO" || planet == "pluto") {
        
        cout <<"You weigh " << weight * PLUTO_MULT << " IBs on PLuto\n";
        
    }
    else  {
        
        cout << "You entered an invalid planet name.\n";
        cout << "Please rerun the program to try again.\n";
    }


    return 0;
}
