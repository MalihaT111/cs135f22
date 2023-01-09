/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: WE 5.1, WE 5.2, E5.6
Assignment Details Below.
*/
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
//WE 5.1: write a program that generates a password of a given length
// function to append random stuff into string given the condition that there are no letters or numbers or special symbols in the string
// function to append random things
string appendcharacters(string characters)
{
    return characters.substr(rand() % characters.length(), 1);
}
string randomplace(string str, string chars)
{
    int n = str.length();
    int r = rand() % (n + 1);
    return str.substr(0, r) + chars + str.substr(r);
}
string password(int length)
{
    srand(time(0));
    string password = "";
    for (int i = 0; i < length - 3; i++)
    {
        password+= appendcharacters("qwertyuiopasdfghjklzxcvbnm1234567890+-*/?!@#$%&");
    }
    password = randomplace(password, appendcharacters("qwertyuiopasdfghjklzxcvbnm"));
    password = randomplace(password, appendcharacters("123456789"));
    password = randomplace(password, appendcharacters("+-*/?!@#$%&"));
    cout << password << endl;
    return password;
}
// WE 5.2: debugging
// E 5.6: write a function that returns the middle character
string middle(string str)
{
    string middle = "";
    int mid = str.length()/2;
    int midodd = mid - 1;
    if (str.length() % 2 == 1)
    {
        middle = str[mid];
    }
    else
    {
        middle = middle + str[midodd] + str[mid];
    }
    return middle;
}
int main()
{
    //password(8);
   cout << middle("bobo") << endl;
}
