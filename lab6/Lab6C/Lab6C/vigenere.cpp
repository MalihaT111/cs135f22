/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 6C
Program: implement vignere cipher
*/
#include<iostream>
#include<cctype>
using namespace std;
char shiftChar(char c, int rshift)
{
    int ascii = (int)c;
    if (ascii >= 65 && ascii <= 90)
    {
        ascii = (((int(c) - 65) + rshift) % 26) + 65;
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        ascii = (((int(c) - 97) + rshift) % 26) + 97;
    }
    c = (char)ascii;
    return c;
}
string encryptVigenere(string plaintext, string keyword)
{
    string result = "";
    int b = 0;
    for (int i = 0; i < plaintext.length(); i++)
    {
        int shift;
        if (b % keyword.length() == 0)
        {
            b = 0;
        }
        shift = int(keyword[b]) - 97;
        if (isalpha(plaintext[i]))
        {
            result += shiftChar(plaintext[i], shift);
            b++;
        }
        else
        {
            result += plaintext[i];
        }
    }
    return result;
}
int main() {
    string result, keyword;
    cout << "Enter plaintext: ";
    getline(cin, result);
    cout << "Enter keyword:   ";
    cin >> keyword;
    cout << "Ciphertext:      " << encryptVigenere(result, keyword) << endl;
    return 0;
}
