/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash (?)
Assignment: Lab 1
*/
#include <iostream>
using namespace std;

// task A: find the smaller of 2 integers
void partA ()
{
    int firstnum;
    int secondnum;
    cout << "Enter the first number: " << endl;
    cin >> firstnum;
    cout << "Enter the second number: " << endl;
    cin >> secondnum ;
    
    if (firstnum > secondnum){
        cout << "The smaller of the two is " << secondnum << endl;
    } else {
        cout << "The smaller of the two is " << firstnum << endl;
        }
}
//task B: find the smaller of 3 integers
void partB ()
{
    int firstnum;
    int secondnum;
    int thirdnum;
    cout << "Enter the first number: " << endl ;
    cin >> firstnum ;
    cout << "Enter the second number: " << endl ;
    cin >> secondnum ;
    cout << "Enter the third number: " << endl ;
    cin >> thirdnum ;
    
    if (firstnum < secondnum && firstnum < thirdnum){
        cout << "The smaller of the three is " << firstnum << endl;
    }
    else if (secondnum << firstnum && secondnum << thirdnum) {
        cout << "The smaller of the three is " << secondnum << endl;
    }
    else {
        cout << "The smaller of the three is" << thirdnum << endl;
    }
}
//task C: check a year: leap or common?
void partC ()
{
    int year;
    cout << "Enter year: " << endl;
    cin >> year;
    if (year % 4 != 0){
        cout << "Common year" << endl;
    }
    else if (year % 100 != 0) {
        cout << "Leap year" << endl;
    }
    else if (year % 400 != 0) {
        cout << "Common year" << endl;
    }
    else {
        cout << "Common year" << endl;
    }
}

//task D: prints out number of days in a given month
void partD()
{
    int year;
    int month;
    bool leapyear;
    cout << "Enter the year: " << endl;
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    if (year % 4 != 0){
        leapyear = false;
    }
    else if (year % 100 != 0) {
        leapyear = true;
    }
    else if (year % 400 != 0) {
        leapyear = false;
    }
    else {
        leapyear = true;
    }
    if (month == 1) {
        cout << "31 days" << endl ;
    }
    else if (month == 2) {
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
int main ()
{
    partA();
    partB();
    partC();
    partD();
}
