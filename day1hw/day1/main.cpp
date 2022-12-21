/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E1.7, E2.1
Assignment Details Below. 
*/

#include <iostream>
using namespace std;

// E1.7: Write a program that prints three items , such as the names of your three best friends or favorite movies, on three separate lines.
int partone ()
{
    cout << "Cat\nDog\nFish\n";
    return 0;
}
// E2.1: Write a program that asks the user to input The number of gallons of gas in the tank, The fuel efficiency in miles per gallon, the price of gas per gallon. then print the cost per 100 miles and how far the car can go with gas in the tank

int partwo ()
{   double numgallons = 0;
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

int main()
{
    partone();
    partwo();
}


