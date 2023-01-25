/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1A
Program: Finds the smaller of 2 integers
*/
#include <iostream>
using namespace std;
int main ()
{
    int firstnum;
    int secondnum;
    cout << "Enter the first number: " << endl;
    cin >> firstnum;
    cout << "Enter the second number: " << endl;
    cin >> secondnum ;
    
    if (firstnum > secondnum)
    {
        cout << "The smaller of the two is " << secondnum << endl;
    }
    else
    {
        cout << "The smaller of the two is " << firstnum << endl;
    }
    return 0;
}
