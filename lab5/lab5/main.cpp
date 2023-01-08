/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash (?)
Assignment: Lab 5
*/

#include <iostream>
using namespace std;
//taska: check for divisiblity
bool isDivisibleBy(int n, int d)
{
    if (n % d == 0)
    {
        cout << "Yes" << endl;
        return true;
    }
    else
    {
        cout << "No" << endl;
        return false;
    }
}
//task b: check for primes
bool isPrime(int n)
{
    if (n <= 1)
    {
        //cout << "No" << endl;
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            //cout << "No" << endl;
            return false;
        }
    }
    //cout << "Yes" << endl;
    return true;
}
//task c: find smallest prime number greater than n
int nextPrime(int n)
{
    int num = n + 1;
    while (isPrime(num) == false)
    {
        num++;
    }
    //cout << num;
    return num;
}
//taskd: count primes in range
int countPrimes(int a, int b)
{
    int num = 0;
    for (int i = a; i < b; a++)
    {
        if (isPrime(i) == true)
        {
            num++;
        }
    }
    cout << num;
    return num;
}
//taske:A prime number N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime
bool isTwinPrime(int n)
{
    if (isPrime(n) == true)
    {
        if (isPrime(n - 2) == true || isPrime(n + 2) == true)
        {
            //cout << "Y";
            return true;
        }
        else
        {
            //cout << "N";
            return false;
        }
    }
    //cout << "Enter another number";
    return false;
}
//taskf: find next twin prime greater than n
int nextTwinPrime(int n)
{
    int num = n + 1;
    while (isPrime(num) == false)
    {
        num++;
    }
    cout << num;
    return num;
}
//task g: find largest twin prime in a range
int largestTwinPrime(int a, int b)
{
    int num = -1;
    while (a < b + 1)
    {
        if (isTwinPrime(a) == true)
        {
            num = a;
        }
        a++;
    }
    cout << num << endl;
    return num;
}
int main()
{
//    isDivisibleBy(35, 17);
//    isPrime(18);
//    nextPrime(18);
//    countPrimes(1,20);
//    isTwinPrime(6);
//    nextTwinPrime(29);
    largestTwinPrime(14, 16);
}
