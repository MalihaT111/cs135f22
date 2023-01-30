/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 6B
Program: implement caesar cypher
*/
#include <iostream>
using namespace std;
char shiftChar(char c, int rshift)
{
    int ascii = (int)c;
    if (isalpha(c))
    {
        if (ascii >= 65 && ascii <= 90)
        {
            ascii = (((int(c) - 65) + rshift) % 26) + 65;
        }
        else if (ascii >= 97 && ascii <= 122)
        {
            ascii = (((int(c) - 97) + rshift) % 26) + 97;
        }
    }
    c = (char)ascii;
    return c;
}
string encryptCaesar(string plaintext, int rshift)
{
    string result = "";
    for (int i = 0; i < plaintext.length(); i++)
    {
        char c = plaintext[i];
        result += shiftChar(c, rshift);
    }
    return result;
}
int main()
{
    string cipher;
    int shift;
    cout << "Enter plain text: ";
    getline(cin, cipher);
    cout << "Enter shift:      ";
    cin >> shift;
    cout << "Ciphertext:       " << encryptCaesar(cipher, shift) << endl;
    return 0;
}

