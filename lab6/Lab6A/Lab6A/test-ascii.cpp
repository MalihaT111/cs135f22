/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 6A
Program: input line of text along with ASCII values
*/
#include <iostream>
using namespace std;
int main()
{
    string words;
    cout << "Enter string: ";
    getline(cin, words);
    for (int i = 0; i < words.length(); i++)
    {
        char c = words[i];
        cout << c << " " << (int)c << "\n";
    }
    return 0;
}
