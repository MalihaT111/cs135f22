#include <iostream>using namespace std;int main () {    cout << "Enter the first number: " << endl ;    int firstnum = 0 ;    cin >> firstnum ;    cout << "Enter the second number: " << endl ;    int secondnum = 0 ;    cin >> secondnum ;    if (firstnum > secondnum) {        cout << "The smaller of the two is " << secondnum;        cout << endl ;    }    else {        cout << "The smaller of the two is " << firstnum;        cout << endl;    }}
