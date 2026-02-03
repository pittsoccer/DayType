
#include <string>
using namespace std;

class dayType
{
public:
    void print() const;
    string nextDay() const;
    string prevDay() const; 
    void addDay(int nDays);

    void setDay(string d);
    string getDay() const;
    bool equals (dayType theDay);
    dayType();
    dayType(string d);

private:
    string weekDay;
};
