
#include <iostream>
   
#include "dayType.h"
using namespace std; 

int main()
{
    //test day object
    dayType newDay("Monday");

    newDay.print();
    cout << endl;
	
    cout << "Next Day: " << newDay.nextDay() << endl;

    newDay.setDay("Sunday");
    cout << "Set Day: ";
    newDay.print();
    cout << endl;

    newDay.prevDay();
    cout << "Previous Day: " << newDay.prevDay() << endl;
    cout << endl;

    newDay.setDay("Tuesday");
    newDay.addDay(23);
    cout << "Adding 23 days to Wednesday moves us to: ";
    newDay.print();
    cout << endl;

    dayType otherDay("Friday");

    if (newDay.equals(otherDay))
      cout << "TGIF" << endl;
    else
      cout << "Sorry, it is not Friday yet!" << endl;
    
return 0;
}
