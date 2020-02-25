/*
Unit7_Ayala_Task_X 
Lucy Ayala 2-24-2020
STRUCTs C++
*/

#include <iostream>
using namespace std;


struct timeOfDay
{
  short Hour;
  short Minute;
  short Second;
};

struct appDate
{
  short dayOfMonth;
  short month;
  int year;
};

struct event
{
string eventName;
timeOfDay eventTime;
appDate eventDate;
bool isUrgent;
//save space here for our toString() override
};


int main() 
{
 timeOfDay t; //declare instance of the struct
 t.Hour = 7; //put data in the struct
 t.Minute = 11;
 t.Second = 17;
 cout << "\nCurrent Time: " << endl; //print current data in struct 
 cout << t.Hour << ":" << t.Minute << ":" << t.Second << endl; 

appDate a;
a.dayOfMonth = 8;
a.month = 22;
a. year = 1994;
cout << "\nCurrent Date: " << endl;
cout << a.dayOfMonth << "/" << a.month << "/" << a.year << endl;

event eOne;
eOne.eventName = "Lucy's Birthday";
eOne.isUrgent = true;
//set the event day
eOne.eventDate.dayOfMonth = 2; //instance.memberStruct.memberVariable
eOne.eventDate.month = 24;
eOne.eventDate.year = 2020;
//set the event time 
eOne.eventTime = t; //use data from to to populate eOne.eventTime

//Priint all elements of the event, eone, to the screen

cout << "\nElements in the event e0ne: " << endl;
cout << "Event Name: " << eOne.eventName << endl;

string status = "";
eOne.isUrgent = true;
status = (eOne.isUrgent) ? "yes" : "no";
cout << "Is the event urgent: " << status << endl; 

 cout << "Day: " << eOne.eventDate.dayOfMonth 
                << "/" << eOne.eventDate.month 
                << "/" << eOne.eventDate.year << endl;

cout << "Time: " << eOne.eventTime.Hour 
                 << ":" << eOne.eventTime.Minute 
                << ":" << eOne.eventTime.Second << endl;



  return 0;
}