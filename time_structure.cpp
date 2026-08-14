#include <iostream>

using namespace std;

struct Time
{
    int hours;
    int minutes;
};

int main()
{
    Time currenttime;

    int duration;
    int totalminutes;

    // Input starting time
    cin >> currenttime.hours;
    cin >> currenttime.minutes;

    // Validate time
    if(currenttime.hours < 0 || currenttime.hours > 23 ||
       currenttime.minutes < 0 || currenttime.minutes > 59)
    {
        cout << "Invalid time! please enter valid time";
        return 0;
    }

    cin >> duration;
    
    totalminutes = currenttime.minutes + duration;
    
    currenttime.minutes = totalminutes % 60;

    currenttime.hours += totalminutes / 60;


    currenttime.hours %= 24;

    // Display result
    cout << currenttime.hours << ":" << currenttime.minutes;

    return 0;
}