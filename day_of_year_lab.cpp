#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap(int year) { 
    if(year % 400 == 0)
        return true;
    else if(year % 100 != 0  && year % 4 == 0)
        return false;
    else
        return false;
	
}

int monthLength(int year, int month) {
    
    
    if (month < 1 || month > 12)
    return 0;
    
    switch(month) {
		
		case 2 : if(isLeap(year)) return 29; else return 28;
		
		case  4:
		case  6:
		case  9:
		case 11: return 30;
	
		default: return 31;
	}
}

int dayOfYear(Date date) {


    int total = 0;

    for (int month = 1; month < date.month; month++) {
        total += monthLength(date.year, month);
    }

    total += date.day;

    return total;
	
}

int main(void) {

	Date d;
	cout << "Enter year, month, day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}