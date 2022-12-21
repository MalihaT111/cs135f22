/*
Author: Maliha Tasnim
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework WE 2.1, WE 2.2
Assignment Details Below.
*/

#include <iostream>
#include <cmath>
using namespace std;
// WE 2.1: compute the time taken by a robot to reach its goal given the distances from the object in the x and y direction, speeds on different terrain, and the length of the segment on the road.
void robot() {
    double distancex;
    double distancey;
    double speedroad;
    double speedrock;
    double segmentone;
    double segmenttwo;
    double time;
    cout << "Enter the distance in the x-direction:" << endl;
    cin >> distancex;
    cout << "Enter the distance in the y-direction:" << endl;
    cin >> distancey;
    cout << "Enter the robot's speed on the road:" << endl;
    cin >> speedroad;
    cout << "Enter the robot's speed on the rock:" << endl;
    cin >> speedrock;
    cout << "Enter the length of the first segment:" << endl;
    cin >> segmentone;
    segmenttwo = sqrt(pow((distancey - segmentone),2) + pow(distancex,2));
    time = (segmentone/speedroad) + (segmenttwo/speedrock);
    cout << "Total time is: " << time << endl;
}
// WE 2.2: Stimulate a postage stamp vending machine: A cus- tomer inserts dollar bills into the vending machine and then pushes a “purchase” button. The machine gives out as many first-class stamps as the customer paid for, and returns the change in penny (one-cent) stamps. A first-class stamp cost 47 cents at the time this book was written.
void postagestamp()
{
    int dollarbills;
    int pennystamps;
    int firstclass;
    const int price = 47;
    cout << "Enter dollar bills to get stamps: " << endl;
    cin >> dollarbills;
    pennystamps = (dollarbills * 100) % price;
    firstclass = (dollarbills * 100)/price;
    cout << "You get: " << firstclass << " first class stamps and " << pennystamps << " penny stamps." << endl;
}
int main (){
    robot();
    postagestamp();
}

