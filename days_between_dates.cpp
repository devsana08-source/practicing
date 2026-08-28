#include <iostream>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isLeap(int year) {

    if (year % 400 == 0)
        return true;
    else if (year % 100 != 0 && year % 4 == 0)
        return true;
    else
        return false;
}

int monthLength(int year, int month) {

    if (month < 1 || month > 12)
        return 0;

    switch (month) {

        case 2:
            if (isLeap(year))
                return 29;
            else
                return 28;

        case 4:
        case 6:
        case 9:
        case 11:
            return 30;

        default:
            return 31;
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

int daysBetween(Date d1, Date d2) {

    // Check if the second date is earlier
    if (d2.year < d1.year ||
        (d2.year == d1.year && d2.month < d1.month) ||
        (d2.year == d1.year && d2.month == d1.month && d2.day < d1.day)) {
        return -1;
    }

    // If both dates are in the same year
    if (d1.year == d2.year) {
        return dayOfYear(d2) - dayOfYear(d1);
    }

    int days = 0;

    // Remaining days in the first year
    days += (isLeap(d1.year) ? 366 : 365) - dayOfYear(d1);

    // Complete years between the two dates
    for (int year = d1.year + 1; year < d2.year; year++) {
        days += isLeap(year) ? 366 : 365;
    }

    // Days in the final year
    days += dayOfYear(d2);

    return days;
}

int main(void) {

    Date since, to;

    cout << "Enter first date (y m d): ";
    cin >> since.year >> since.month >> since.day;

    cout << "Enter second date (y m d): ";
    cin >> to.year >> to.month >> to.day;

    cout << daysBetween(since, to) << endl;

    return 0;
}