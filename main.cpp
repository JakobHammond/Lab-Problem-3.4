//
//  main.cpp
//  p3.4
//
//  Created by Jakob Hammond on 9/7/23.
//

#include <iostream>
using namespace std;

int main(void){
    int costNew;
    double milesPerGallon;
    int milesPerYear;
    double gasPrice;
    int yearsOfUse;
    int resaleAmount;
    int netCost;
    
    cout << "Enter cost of car: ";
    cin >> costNew;
    cout << "Enter MPG: ";
    cin >> milesPerGallon;
    cout << "Enter miles driven per year: ";
    cin >> milesPerYear;
    cout << "Enter gas price: ";
    cin >> gasPrice;
    cout << "Enter years of use: ";
    cin >> yearsOfUse;
    cout << "Enter car resale amount: ";
    cin >> resaleAmount;
    
    netCost = costNew + (yearsOfUse * milesPerYear / milesPerGallon * gasPrice) - resaleAmount;
    cout << "\nNet cost of car ownership: " << netCost << endl;
}
