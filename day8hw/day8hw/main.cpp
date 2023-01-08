/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework PS 4.9
Assignment Details Below.
*/
// the drunkards walk, randomly picks one of four directions
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int x = 0, y = 0;
    cout << "The start location is " << x << " " << y << endl;
    for (int i = 0; i < 100; i++)
    {
        double direction = rand() % 4 + 1;
        if (direction == 1)
        {
            x--;
        }
        if (direction == 2)
        {
            x++;
        }
        if (direction == 3)
        {
            y--;
        }
        if (direction == 4)
        {
            y++;
        }
    }
    cout << "The end location is " << x << " " << y << endl;
}
