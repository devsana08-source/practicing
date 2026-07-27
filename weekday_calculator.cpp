#include<iostream>

using namespace std;

int main()
{
    int year,month,day,weekday;
    
    cout<<"Enter the year : ";
    cin>>year;
    
    cout<<"Enter the month : ";
    cin>>month;
    
    cout<<"Enter the day : ";
    cin>>day;
    
    
    month = month - 2;
    
    if(month<0)
    {
        month = month + 12;
        year = year - 1;
    }
    
    
    month = month * 83 / 32;
        
    month = month + day;
        
    month = month + year;
        
    month = month + year/4;
        
    month = month - year/100;
        
    month = month + year/400;
        
    weekday = month % 7;

    //numbers from 0 - 6 represent  weekdays
        
    cout << "Weekday number: " << weekday << endl;
        
    return 0;
}