/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E3.5, PS 4.2, E4.8
Assignment Details Below.
*/
//E3.5: write a program that reads numbers and prints increasing if they are in increasing order, decreasing if they are in decreasing order, and neither if not either
#include<iostream>
#include<cmath>
using namespace std;
void sequence()
{
    double num1;
    double num2;
    double num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 < num2 && num2 < num3)
    {
        cout << "Increasing" << endl;
    }
    else if (num1 > num2 && num2 > num3)
    {
        cout << "Decreasing" << endl;
    }
    else
    {
        cout << "Neither" << endl;
    }
}
//PS4.2: basically, given a set of numbers find the mean and standard deviation
void dataset()
{
    double input, sum = 0, sum_square = 0, mean = 0, std = 0, count = 0;
    cout << "Enter numbers (press a character to continue): ";
    while (cin >> input)
    {
        count++;
        sum += input;
        sum_square += pow(input,2);
    }
    mean = sum/count;
    std = sqrt((sum_square - ((1/count) * (sum * sum))) / (count - 1));
    cout << "The count is: " << count << endl;
    cout << "The sum is: " << sum << endl;
    cout << "The sum of squares is: " << sum_square << endl;
    cout << "The mean is: " << mean << endl;
    cout << "The std is: " << std << endl;
}
//E4.8: write a program that reads a word and prints each character of the word on a seperate line.
void character()
{
    string input;
    cout << "Enter a word: ";
    cin >> input;
    for (int i = 0; i < input.length() ; i++)
        cout << input[i] << endl;
}
int main()
{
    sequence();
    dataset();
    character();
}
