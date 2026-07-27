#include<iostream>
using namespace std;

int main(void) {
	int year;
	
	cout << "Enter a year: ";
	cin >> year;
 /*
 
Since the introduction of the Gregorian calendar (in 1582), the following rule is used to determine the kind of year:

if the year number isn't divisible by 4, it is a common year;                                                                
otherwise, if the year number isn't divisible by 100, it is a leap year;
otherwise, if the year number isn't divisible by 400, it is a common year;
otherwise, it is a leap year. 


*/

if (year % 4 != 0)
{
    cout<<"Common year"<<endl;
}
else if (year % 100 != 0)
{
    cout<<"leap year"<<endl;
}                    

else if (year % 400 != 0)
{
   cout<<"Common year"<<endl;
}
else
{
    cout<<"leap year"<<endl;
}
	
	return 0;
}