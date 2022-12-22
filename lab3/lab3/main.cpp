/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash (?)
Assignment: Lab 3
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;
//task a: asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day
void taska()
{
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    string junk;
    getline(fin, junk);
    string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;
    string date1;
    cout << "Enter date: ";
    cin >> date1;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        if (date == date1)
        {
            cout << eastSt << " billion gallons" << endl;
        }
        fin.ignore(INT_MAX, '\n');
    }
}
//task b: finds the minimum and maximum storage in East basin in 2018
void taskb()
{
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    string junk;
    getline(fin, junk);
    string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;
    double minEast = INT_MAX;
    double maxEast = INT_MIN;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        while (eastSt < minEast)
        {
            minEast = eastSt;
        }
        while (eastSt > maxEast)
        {
            maxEast = eastSt;
        }
        fin.ignore(INT_MAX, '\n');
    }
    cout << "minimum storage in East basin: " << minEast << " billion gallons" << endl;
    cout << "maximum storage in East basin: " << maxEast << " billion gallons" << endl;
}
//task c: compare elevations on dates given by user
void taskc()
{
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    string junk;
    getline(fin, junk);
    string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;
    string date1;
    string date2;
    cout << "Enter starting date: ";
    cin >> date1;
    cout << "Enter ending date: ";
    cin >> date2;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
            if (date >= date1 && date <= date2)
            {
                if (eastEl > westEl)
                {
                    cout << date << " East" << endl;
                }
                else if (eastEl == westEl)
                {
                    cout << date << " Equal" << endl;
                }
                else
                {
                    cout << date << " West" << endl;
                }
                
            }

            fin.ignore(INT_MAX, '\n');
        }
}
//task d: report the West basin elevation for all days in the interval in the reverse chronological order
void taskd()
{
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    string junk;
    getline(fin, junk);
    string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;
    string date1;
    string date2;
    string times[366];
    double elev[366];
    int count = 0;
    cout << "Enter earlier date: ";
    cin >> date1;
    cout << "Enter later date: ";
    cin >> date2;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        if (date >= date1 && date <= date2)
        {
            times[count] = date + " ";
            elev[count] = westEl;
            count++;
        }

            fin.ignore(INT_MAX, '\n');
    }
    for (int i = count - 1; i >= 0; i--)
        {
            cout << times[i] << elev[i] << endl;
        }
}
int main()
{
    //taska();
    taskb();
    taskc();
    taskd();
    
}
