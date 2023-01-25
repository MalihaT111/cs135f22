/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1B
Program: Finds the smaller of 3 integers
*/
#include <iostream>
using namespace std;
int main()
{
    int firstnum;
    int secondnum;
    int thirdnum;
    cout << "Enter three numbers: " << endl ;
    cin >> firstnum >> secondnum >> thirdnum ;
    if (firstnum < secondnum && firstnum < thirdnum)
    {
        cout << "The smaller of the three is " << firstnum << endl;
    }
    else if (secondnum < firstnum && secondnum < thirdnum)
    {
        cout << "The smaller of the three is " << secondnum << endl;
    }
    else
    {
        cout << "The smaller of the three is " << thirdnum << endl;
    }
}
