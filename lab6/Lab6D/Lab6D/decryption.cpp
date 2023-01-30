/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 6D
Program: decrypt an encryption in both caesar and vigenere 
*/
#include<iostream>
#include<cctype>
using namespace std;
char shiftChar(char c, int rshift)
{
    int ascii = (int)c;
    if (isupper(ascii))
    {
        ascii = (((int(c) - 65) + rshift) % 26) + 65;
    }
    else if (islower(ascii))
    {
        ascii = (((int(c) - 97) + rshift) % 26) + 97;
    }
    c = (char)ascii;
    return c;
}
char shiftCharL(char c, int lshift)
{
    //cout << (-4 % 26)  << endl;
    //cout << (((65 - 65) - 10) % 26) + 91 << endl;
    int ascii = (int)c;
    if (isupper(ascii))
    {
        if (int(c) - lshift >= 65)
        {
            ascii = (((int(c) - 65) - lshift) % 26) + 65;
        }
        else
        {
            ascii = (((int(c) - 65) - lshift) % 26) + 91;
        }
    }
    else if (islower(ascii))
    {
        if (int(c) - lshift >= 97)
        {
            ascii = (((int(c) - 97) - lshift) % 26) + 97;
        }
        else
        {
            ascii = (((int(c) - 97) - lshift) % 26) + 123;
        }
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
string decryptVigenere(string cipher, string keyword)
{
    string result;
    int b = 0;
    for (int i = 0; i < cipher.length(); i++)
    {
        int shift;
        if (b % keyword.length() == 0)
        {
            b = 0;
        }
        shift = int(keyword[b]) - 97;
        if (isalpha(cipher[i]))
        {
            result += shiftCharL(cipher[i], shift);
            b++;
        }
        else
        {
            result += cipher[i];
        }
    }
    return result;
}
string encryptCaesar(string plaintext, int rshift)
{
    string result = "";
    for (int i = 0; i < plaintext.length(); i++)
    {
        if (isalpha(plaintext[i]))
        {
            char c = plaintext[i];
            result += shiftChar(c, rshift);
        }
        else
        {
            result += plaintext[i];
        }
    }
    return result;
}
string decryptCaesar(string cipher, int shift)
{
    string result = "";
    for (int i = 0; i < cipher.length(); i++)
    {
        if (isalpha(cipher[i]))
        {
            char c = cipher[i];
            result += shiftCharL(c, shift);
        }
        else
        {
            result += cipher[i];
        }
    }
    return result;
}
int main() {
    string plaintext, keyword;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    cout << "= Caesar =" << endl;
    cout << "Enter shift: " << endl;
    cin >> shift;
    cout << "Ciphertext: " << encryptCaesar(plaintext, shift) << endl;
    cout << "Decrypted:"   << decryptCaesar(encryptCaesar(plaintext, shift), shift) << endl;

    cout << "= Vigenere =" << endl;
    cout << "Enter keyword: ";
    cin >> keyword;
    cout << "Ciphertext: " << encryptVigenere(plaintext, keyword) << endl;
    cout << "Decrypted:" << decryptVigenere(encryptVigenere(plaintext, keyword), keyword);
    return 0;
}
