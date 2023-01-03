/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash (?)
Assignment: Project 1
Details: Write a program that takes in a given maze and streaming in possible traversals, will check if any of the inputs solves the maze
*/

#include <iostream>
#include <string>
using namespace std;
// Task A: read sequence of letters from cin and print out directions
void taska()
{
    string s;
    while(cin >> s)
    {
        if (s == "R")
        {
            cout << "Right" << endl;
        }
        else if (s == "L")
        {
            cout << "Left" << endl;
        }
        else if (s == "D")
        {
            cout << "Down" << endl;
        }
        else if (s == "U")
        {
            cout << "Up" << endl;
        }
    }
}
// Task B: initialize the map and stream in a list of directions to determine whether or not it traverses the maze
void taskb()
{
    int maze[6][6] = {
       1,0,1,1,1,1,
       1,0,0,0,1,1,
       1,0,1,0,0,1,
       1,0,1,0,1,1,
       1,0,0,0,0,0,
       1,1,1,1,1,1
    };
    int r = 0;
    int c = 1;
    string s;
    while(cin >> s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            string st = s.substr(i,1);
            if (st == "R")
            {
                if (maze[r][c+1] != 1 && r < 6 && c < 6)
                {
                    c = c + 1;
                }
                cout << r << " " << c << endl ;
            }
            if (st == "L")
            {
                if (maze[r][c-1] != 1 && r < 6 && c < 6)
                {
                    c = c - 1;
                }
                cout << r << " " << c << endl ;
            }
            if (st == "D")
            {
                if (maze[r+1][c] != 1 && r < 6 && c < 6)
                {
                    r = r + 1;
                }
                cout << r << " " << c << endl ;
            }
            if (st == "U")
            {
                if (maze[r-1][c] != 1 && r < 6 && c < 6)
                {
                    r = r - 1;
                }
                cout << r << " " << c << endl ;
            }
        }
    }
    if (r == 4 && c == 5)
    {
        cout << "You got out of the maze." << endl;
    }
    else
    {
        cout << "You are stuck in the maze." << endl;
    }
}

// Task C: allow it to evaluate multiple direction lists
void taskc()
{
    int maze[6][6] = {
       1,0,1,1,1,1,
       1,0,0,0,1,1,
       1,0,1,0,0,1,
       1,0,1,0,1,1,
       1,0,0,0,0,0,
       1,1,1,1,1,1
    };
    int r = 0;
    int c = 1;
    string s;
    while(cin >> s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            char st = s[i];
            if (st == ';')
            {
                if (r == 4 && c == 5)
                {
                    cout << "You got out of the maze." << endl;
                }
                else
                {
                    cout << "You are stuck in the maze." << endl;
                }
                r = 0;
                c = 1;
            }

            else if (st == 'R' && maze[r][c+1] != 1 && r < 6 && c < 6)
                {
                    c++;
                    cout << r << " " << c << endl ;
                }
            else if (st == 'L' && maze[r][c-1] != 1 && r < 6 && c < 6)
                {
                        c--;
                    cout << r << " " << c << endl ;
                }
            else if (st == 'D' && maze[r+1][c] != 1 && r < 6 && c < 6)
                {
                    r++;
                    cout << r << " " << c << endl ;
                }
            else if (st == 'U' && maze[r-1][c] != 1 && r < 6 && c < 6)
                {
                    r--;
                    cout << r << " " << c << endl ;
                }
        }
    }
}


// Task D:
void taskd()
{
    
}

int main ()
{
    //taska();
    //taskb();
    //taskc();
    //taskd();
}

