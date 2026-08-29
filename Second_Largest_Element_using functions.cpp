#include <iostream>
using namespace std;

int secondLargest(int a[], int n) {
    int largest = a[0], second = a[1];

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    return second;
}

int main() {
    int a[5];

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Second largest element: " << secondLargest(a, 5);

    return 0;
}