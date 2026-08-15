#include<iostream>

using namespace std;

struct Time
{
    int hours;
    int minutes;
};

int main()
{
    Time start_time;
    Time end_time;
    
    int duration;
    int gap_hours,gap_minutes;
    
    cin >> start_time.hours;
    cin >> start_time.minutes;
   
    
    if(start_time.hours < 0 || start_time.hours > 23 ||
       start_time.minutes < 0 || start_time.minutes > 59)
    {
        cout << "Invalid time! please enter valid time";
        return 0;
    }
    
    start_time.minutes = start_time.hours * 60 + start_time.minutes;
    
    cin >> end_time.hours;
    cin >> end_time.minutes;
   
    if(end_time.hours < 0 || end_time.hours > 23 ||
    end_time.minutes < 0 || end_time.minutes > 59)
    
    {
        cout << "Invalid time! please enter valid time";
        return 0;
    }
    
    end_time.minutes = end_time.hours * 60 + end_time.minutes;
    
    
    duration = end_time.minutes - start_time.minutes;
    
    gap_minutes = duration % 60;
    
    gap_hours = duration/60;
    
    cout << gap_hours <<":"<<gap_minutes;
    
    return 0;
    
    
}