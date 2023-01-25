/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1D
Program: prints out number of days in a given month
*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    int month;
    bool leapyear;
    cout << "Enter the year: " << endl;
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    if (year % 4 != 0)
    {
        leapyear = false;
    }
    else
    {
        if (year % 100 != 0)
        {
            leapyear = true;
        }
        else if (year % 400 != 0)
        {
            leapyear = false;
        }
        else
        {
            leapyear = true;
        }
    }
    if (month == 1) {
        cout << "31 days" << endl ;
    }
    else if (month == 2)
    {
        if (leapyear == false) {
            cout << "28 days" << endl ;
        }
        else {
            cout << "29 days" << endl ;
        }
    }
    else if (month == 3) {
        cout << "31 days" << endl ;
    }
    else if (month == 4) {
        cout << "30 days" << endl ;
    }
    else if (month == 5) {
        cout << "31 days" << endl ;
    }
    else if (month == 6) {
        cout << "30 days" << endl ;
    }
    else if (month == 7) {
        cout << "31 days" << endl ;
    }
    else if (month == 8) {
        cout << "31 days" << endl ;
    }
    else if (month == 9) {
        cout << "30 days" << endl ;
    }
    else if (month == 10) {
        cout << "31 days" << endl ;
    }
    else if (month == 11) {
        cout << "30 days" << endl ;
    }
    else if (month == 12) {
        cout << "31 days" << endl ;
    }
}
