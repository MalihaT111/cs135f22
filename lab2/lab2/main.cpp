/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash (?)
Assignment: Lab 2
*/
#include <iostream>
using namespace std;
//task a: input validation, then print number squared
void taska ()
{
    int num;
    cout << "Please enter an integer: ";
    cin >> num;
    while (num <= 0 || num >= 100) {
        cout << "Please re-enter: ";
        cin >> num;
    }
    cout << "Number squared is " << num * num << endl;
}
//task b: print integers from requested interval
void taskb ()
{
    int lower;
    int upper;
    cout << "Please enter L: ";
    cin >> lower;
    cout << "Please enter U: ";
    cin >> upper;
    for(int i = lower; i < upper; i++) {
        cout << i << " ";
    }
}
//task c: create an array and allow the user to edit any of the elements
void taskc ()
{
    int myData[10];
    int index;
    int value;
    for (int i = 0; i < 10; i++){
        myData[i] = 1;
    }
    do {
        for (int i = 0; i < 10; i++){
            cout << myData[i] << " ";
        }
        cout << "\nInput index: ";
        cin >> index;
        cout << "Input value: ";
        cin >> value;
        myData[index] = value;
    } while (index >= 0 && index < 10);
    cout << "Index out of range. Exit." << endl;
}
// task d: use an array of ints to compute and print Fibonacci numbers from F(0) to F(59)
// The last accurate number in the array is 1836311903. The next number in the sequences should be 2971215073. However, the max integer limit in c++ is 2147483647. That is why the program starts producing random integers after the last value less than the max int value.
void taskd ()
{
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for (int i = 0; i < 60; i++){
        cout << fib[i] << endl;
    }
    
}
int main ()
{
    taska();
    taskb();
    taskc();
    taskd();
    
}
