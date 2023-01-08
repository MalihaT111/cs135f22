/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash (?)
Assignment: Lab 4
*/

#include <iostream>
using namespace std;
//print a row of stars given inputted width and height
void taska()
{
    int height, width;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
//taskb: prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating)
void taskb()
{
    int height, width;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << "\nShape:\n";
    for (int i = 0; i < height; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < width; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
        else
        {
            for (int j = 0; j < width; j++)
            {
                if (j % 2 == 0)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << "\n";
        }
    }
}
void taskc()
{
    int size;
    cout << "Input size: ";
    cin >> size;
    cout << "Shape:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j || i + j == size - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
void taskd()
{
    int size;
    cout << "Input side length: ";
    cin >> size;
    cout << "Shape:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void taske()
{
    int size;
    cout << "Input side length: ";
    cin >> size;
    cout << "Shape:" << endl;
    for (int i = size; i > 0; i--)
    {
        for (int j = i; j < size; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void taskf()
{
    int height, width;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << "\nShape:\n";
    if (height * 2 <= width)
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < width; j++)
            {
                cout << "*";
            }
            width = width - 2;
            cout << endl;
        }
    }
    else
    {
        cout << "Impossible shape!" << endl;
    }
}
void taskg()
{
    double height, width;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << "\nShape:\n";
    for (int i = 0; i < height; i++)
    {
        if (i % 6 < 3)
        {
            for (int j = 0; j < width; j++)
            {
               if (j % 6 < 3)
               {
                   cout << "*";
               }
               else
               {
                   cout << " ";
               }
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < width; j++)
            {
               if (j % 6 < 3)
               {
                   cout << " ";
               }
               else
               {
                   cout << "*";
               }
            }
            cout << endl;
        }

    }
}
int main()
{
    //taska();
    //taskb();
    //taskc();
    //taskd();
    //taske();
    //taskf();
    taskg();
}
