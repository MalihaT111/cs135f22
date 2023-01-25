/*
File: hw2.cpp
Author: Maliha Tasnim
Date: 2023-01-25
Program: This program calculates how far a car can go given the number of gallons in the tank and the fuel efficiency of the car. It also calculates the cost per hundred miles of travel given the price of gas.
*/
#include <iostream>
using namespace std;
int main()
{
    double numgallons = 0;
    double efficiency = 0;
    double price = 0;
    double perhundred = 0;
    double distance = 0 ;
    cout << "Enter the number of gallons of gas in tank: " << endl;
    cin >> numgallons;
        
    cout << "Enter the fuel efficiency of the in miles per gallon: " << endl;
    cin >> efficiency ;
        
    cout << "Enter the price of gas per gallon: " << endl;
        cin >> price ;
        
    perhundred = (price/efficiency)*100;

    cout << "The cost of per 100 miles is " << perhundred << endl;
        
    distance = efficiency * numgallons ;
        
    cout << "This is how the far the car can go: " << distance << " miles \n" ;
    return 0 ;
}
