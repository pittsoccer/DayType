
#include <iostream>
#include <string>
  
#include "dayType.h"
using namespace std;

void dayType::print() const
{
    cout << weekDay; 
}

string dayType::nextDay() const
{
    int theDay=0;
    static string weekDays[7] = {"Sunday", "Monday", "Tuesday",
                                "Wednesday", "Thursday", "Friday", 
                                "Saturday"};

    for (int i = 0; i < 7; i++)
        if (weekDays[i] == weekDay)
            theDay = i;
    return weekDays[(theDay + 1) % 7];
}

string dayType::prevDay() const
{
    string prev="";
    static string weekDays[7] = {"Sunday", "Monday", "Tuesday",
                                "Wednesday", "Thursday", "Friday",
                                "Saturday"};

    if (weekDay == "Sunday")
        prev = "Saturday";
    else
    {
        for (int i = 0; i < 7; i++)
            if (weekDays[i] == weekDay)
                prev = weekDays[i-1];
    }
  return prev;
}

 
void dayType::addDay (int nDays)
{
  static string weekDays[] = {"Sunday", "Monday", "Tuesday",
                                "Wednesday", "Thursday", "Friday",
                                "Saturday"};
  int theDay=0;
  for (int i=0; i<7; i++)
    if (weekDays[i] == weekDay)
      theDay=i;
  weekDay = weekDays[(theDay+nDays)%7];
}

void dayType::setDay(string d)
{
    weekDay = d;
}

string dayType::getDay() const
{
    return weekDay;
}

dayType::dayType()
{
    weekDay = "Sunday";
}

dayType::dayType(string d)
{
    weekDay = d;
}

bool dayType::equals (dayType theDay)
{
  bool same;
  if (weekDay == theDay.weekDay)
    same = true;
  else
    same = false;
  return same;
}
