/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework PS 2.4
Assignment Details Below.
*/

#include <iostream>
using namespace std;
// PS 2.4: write a program that helps a person decide whether to buy a hybrid car
void car ()
{
    double cost;
    double miles;
    double gasprice;
    double resale;
    double totalcost;
    cout << "Enter the cost of a new car: " << endl;
    cin >> cost;
    cout << "Enter the estimated number of miles driven: " << endl;
    cin >> miles;
    cout << "Enter current gas price: " << endl;
    cin >> gasprice;
    cout << "Enter resale value: " << endl;
    cin >> resale;
    totalcost = (cost + (miles * gasprice)) - resale ;
    
}
int main (){
    car();
}

