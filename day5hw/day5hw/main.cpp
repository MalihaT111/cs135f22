/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E3.1, WE 3.1, PS 3.5, PS 3.6
Assignment Details Below.
*/

#include <iostream>
#include <string>
using namespace std;
// E3.1: program that reads an integer and prints whether it's negative, zero, or positive
void value()
{
    int givenint;
    cout << "Enter an integer: ";
    cin >> givenint;
    if (givenint > 0)
    {
        cout << "Positive" << endl ;
    }
    else if (givenint == 0)
    {
        cout << "Zero" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }
}
// WE 3.1: Your task is to extract a string containing the middle character from a given string str. For example, if the string is “crate”, the result is the string “a”. However, if the string has an even number of letters, extract the middle two characters. If the string is “crates”, the result is “at”.
void subtraction()
{
    string subs;
    cout << "Enter a string here: ";
    cin >> subs;
    if (subs.length() % 2 == 0)
    {
        cout << subs[subs.length()/2-1] << subs[(subs.length()/2)] << endl;
    }
    else
    {
        cout << subs[subs.length()/2] << endl;
    }
}
// PS3.5: program that reads three strings and sorts them by alphebetical order
void alphabet()
{
    string s1;
    string s2;
    string s3;
    cout << "Enter three strings: ";
    cin >> s1 >> s2 >> s3;
    if (s1 < s2 && s1 < s3)
    {
        if (s2 < s3)
        {
            cout << s1 << " " << s2 << " " << s3;
        }
        else
        {
            cout << s1 << " " << s3 << " " << s2;
        }
    
    }
    else if (s2 < s1 && s2 < s3)
    {
        if (s1 < s3)
        {
            cout << s2 << endl << s1 << endl << s3 << endl;
        }
        else
            cout << s2 << endl << s3 << endl << s1 << endl;
    }
    else // s3 < s1 && s3 < s2
    {
        if (s1 < s2)
        {
            cout << s3 << endl << s1 << endl << s2 << endl;
        }
        else
        {
            cout << s3 << endl << s2 << endl << s3 << endl;
        }
    }
}
// PS3.6: horoscope generator
void horoscope()
{
    string month;
    string day;
    string aries = "Your transmission may be stuck in reverse today, Aries. This doesn't mean you can't be productive. You may need to change your approach. Carefully assess a situation before you proceed. Someone may be trying to cross you. Be smart about your rebuttal. Head-on combat isn't the best approach. Try reasoning. You may discover that there are pieces of the puzzle you didn't know about.";
    string taurus = "Things should go well for you today, Taurus. There's an added serenity in the air that will help calm your nerves. There's no need to make things more complicated than necessary. The answers to things are actually quite simple. Everything you want is probably right at your fingertips. You don't need to go far to find what you seek.";
    string gemini = " It might seem like someone has dumped a bucket of water on your head today, Gemini. It seems like your fire is out. Keep in mind that this is only temporary and that your internal flame will be rekindled soon. For now, you may want to take this time to slow down and relax. Use this as an opportunity to reflect and tune in to your sensitive, caring nature. Let someone else take the reins.";
    string cancer =  "Tension may run high today as things come to a great emotional climax. It might seem as if everyone is out to get you, Cancer, but more than likely this paranoia is a figment of your imagination. Don't get carried away with crazy scenarios that have no basis in reality. People may be acting irrationally, so don't be surprised if reason and logic are nowhere to be found.";
    string leo = "More than likely you will be caught up in a wildly intense emotional drama if you aren't careful, Leo. Try to stay calm and collected. Find a quiet, solitary place where you can relax. Your energy is there, but it may be more reserved and subtle on a day like this. Be the stable oasis in the raging turmoil. Make peace with the people around you.";
    string virgo = "You will find strength in your inner reserves today, Virgo. Don't hesitate to let your deepest thoughts shine through. Keep your antenna up. You will find that there's an electricity in the air that keeps people's emotions at peak level. Follow your instincts and keep in mind that this is probably your best defense against the challenges of the day. Rational thinking is overrated.";
    string libra = "You may feel a bit sluggish today, Libra. Your warrior spirit would rather stay home on the couch than get up and fight. This is fine. You may simply need a break from your quest for world domination. Remember that a good leader also takes the time to sit back and reflect on recent events in order to make better plans for the future.";
    string scorpius = "Your sensitivity is strong today, Scorpio. You will find that your perception of situations is right on target with the truth of the matter. Keep in mind that in order to be successful, you won't need to strong-arm anyone into doing what you want. More than likely you will be able to accomplish more just by tuning in to your receptive, gentle nature.";
    string sagittarius = "You may feel a bit confused today. It might seem as if the wind has suddenly been taken out of your sails. Don't get discouraged by the slow weightiness of the day. Take the opportunity to relax and recharge your batteries. Do a bit of inward reflection as opposed to outer-directed movement. The most valuable lesson to learn is patience. Remind yourself of this throughout the day.";
    string capricorn = "Today is an excellent day for you, Capricorn. You will be a welcome addition to any crowd. Your delightful nature is at its most active. You have the unique capability to be aggressive about getting what you want without disturbing the flow of the energy around you. People respect and honor your sensitive, nurturing qualities. This will win the game for you.";
    string aquarius = "The world probably isn't going to revolve around you today, Aquarius, so get used to it. Even though this may not be the news you want to hear, it's probably the news you most need to hear. Use your incredible passion to nurture others. Think less about yourself and more about the people around you, especially your family. Stick close to home and take care of chores.";
    string pisces = "Initiate a deep, meaningful conversation with someone you've lost touch with, Pisces. It could be that a long and ugly point of contention is on the brink of resolution. All you need to do is make the first move. There's a great deal of heartfelt, loving energy in the air that will help you foster a sensitive, tender approach. Find a connection with someone that you didn't know was there.";
    
    
    cout << "Please enter your birthday (month and day): ";
    cin >> month >> day;
    if (month == "1")
    {
        if (day >= "1" && day <= "19")
        {
            cout << capricorn << endl;
        }
        else
        {
            cout << aquarius << endl;
        }
    }
    if (month == "2")
    {
        if(day >= "1" && day <= "18")
        {
            cout << aquarius << endl;
        }
        else
        {
            cout << pisces << endl;
        }
    }
    if (month == "3")
    {
        if(day >= "1" && day <= "20")
        {
            cout << pisces << endl;
        }
        else
        {
            cout << aries << endl;
        }
    }
    if (month == "4")
    {
        if (day >= "1" && day <= "19")
        {
            cout << aries << endl;
        }
        else
        {
            cout << taurus << endl;
        }
    }
    if (month == "5")
    {
        if (day >= "1" && day <= "20")
            cout << taurus << endl;
        else
            cout << gemini << endl;
    }
    if (month == "6")
    {
        if (day >= "1" && day <= "21")
            cout << gemini << endl;
        else
            cout << cancer << endl;
    }
    if (month == "7")
    {
        if (day >= "1" && day <= "22")
            cout << cancer << endl;
        else
            cout << leo << endl;
    }
    if (month == "8")
    {
        if (day >= "1" && day <= "22")
            cout << leo << endl;
        else
            cout << virgo << endl;
        
    }
    if (month == "9")
    {
        if (day >= "1" && day <= "22")
            cout << virgo << endl;
        else
            cout << libra << endl;
    }
    if (month == "10")
    {
        if (day >= "1" && day <= "23")
            cout << libra << endl;
        else
            cout << scorpius << endl;
    }
    if (month == "11")
    {
        if (day >= "1" && day <= "21")
            cout << scorpius << endl;
        else
            cout << sagittarius << endl;
    }
    if (month == "12")
    {
        if (day >= "1" && day <= "21")
            cout << sagittarius << endl;
        else
            cout << capricorn << endl;
    }
}
int main()
{
    value();
    subtraction();
    alphabet();
    horoscope();
}
