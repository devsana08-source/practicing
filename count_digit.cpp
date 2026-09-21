#include <iostream>

using namespace std;

int main() {
    long long num;
    int count = 0;

  
    cout << "Enter an integer: ";
    cin >> num;

    long long temp = abs(num);

    do {
        count++;
        temp /= 10; 
    } while (temp > 0);

    cout << "The number of digits in " << num << " is: " << count << endl;

    return 0;
}
