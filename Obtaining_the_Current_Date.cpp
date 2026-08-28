#include <iostream>
#include <ctime>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};


//understandthis block of code 
Date today(void) {

    time_t t = time(NULL);
    tm tl = *localtime(&t);

    Date d;
    d.year = tl.tm_year + 1900;
    d.month = tl.tm_mon + 1;
    d.day = tl.tm_mday;

    return d;
}

int main(void) {
    Date t = today();
    cout << t.year << "-" << t.month << "-" << t.day << endl;
    return 0;
}