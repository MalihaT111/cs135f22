/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework WE 4.1, WE 4.2, WE 8.1, PS 4.6
Assignment Details Below.
*/
// WE 4.1: remove all spaces or dashes from a string credit_card_number
#include<iostream>
#include<fstream>
#include<istream>
#include<sstream>
using namespace std;
void creditcard()
{
    string credit_card_number, number;
    char new_number;
    cout << "Enter your credit card number: ";
    cin >> credit_card_number;
    for (int i = 0; i < credit_card_number.length(); i++)
    {
        new_number = credit_card_number[i];
        if (new_number != '-' && new_number != ' ')
        {
            number += new_number;
        }
    }
    cout << number << endl;
}
// WE 4.2: convert image into its negative by turning white to black, cyan to red, and so on... but i cant get the program to run properly
//void picture()
//{
//    Picture pic("queen-mary.png");
//    for (int x = 0; x < pic.width(); x++)
//    {
//        for (int y = 0; y < pic.height(); y++)
//        {
//            int red = pic.red(x,y);
//            int blue = pic.blue(x,y);
//            int green = pic.green(x,y);
//            pic.set(x, y, red - 255, green - 255, blue - 255);
//        }
//    }
//    pic.save("result.png");
//}
// WE 8.1: write a program that reads a file and prints all the lines that contain a repeated word with line numbers
bool repeat(string s)
{
    istringstream stream;
    stream.str(s);
    string word; //current word
    string previous = " "; //previous word
    while (stream >> word)
    {
        if (previous == word)
        {
            return true;
        }
        else
        {
            previous = word;
        }
    }
    return false;
}
void filereader()
{
    ifstream in_file;
    in_file.open("alice30.txt");
    string line;
    int linenumber = 0;
    while(getline(in_file, line))
    {
        linenumber++;
        if (repeat(line))
        {
            cout << linenumber << ": " << line;
        }
    }
}
/* PS 4.6: program the reads text and displays the avg number of words in the text
*/
void words()
{
    ifstream in_file;
    in_file.open("alice30.txt");
    string lines;
    string thread = " ";
    double wordcount = 0;
    double sentencecount = 0;
    while(in_file >> lines)
    {
        wordcount++;
        thread += lines;
    }
    for (int i = 0; i < thread.length(); i++)
    {
        char period = thread[i];
        if (period == '.')
        {
            sentencecount++;
        }
    }
    cout << "The avg number of words in this file is "<< wordcount/sentencecount << endl;
}


int main()
{
    creditcard();
    //picture();
    filereader();
    words();
}
