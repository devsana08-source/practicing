#include <iostream>

using namespace std;

void increment(int &num) {
    cout << "----------" << endl;
    cout << "Received value: " << num << endl;

    num++;

    cout << "After increment: " << num << endl;
    cout << "----------" << endl;
}

int main() {
    int number = 1;

    cout << "Number = " << number << endl;

    increment(number);

    cout << "Number = " << number << endl;

    return 0;
}