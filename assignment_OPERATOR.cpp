#include<iostream>
using namespace std;

int  days,year,weeks,remainingdays;

int main()
{
     cout<<"Enter the no of days: ";
     cin>>days;

     year=days/365;
     days=days%365;
     weeks=days/7;
     remainingdays=days%7;

     cout<<"Year: "<<year<<endl;
     cout<<"Weeks: "<<weeks<<endl;
     cout<< "Days: "<<remainingdays<<endl;

     return 0;

}