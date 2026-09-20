#include <iostream>

using namespace std;

int main(void) {
    int num[5];
    int min;
    int temp;

    for (int pos = 0; pos < 5; pos++) {
        cout << "Enter value #" << pos + 1 << ": ";
        cin >> num[pos];
    }

    for (int pos = 0; pos < 4; pos++) {
        min = pos;

        for (int next = pos + 1; next < 5; next++) {
            if (num[next] < num[min]) {
                min = next;
            }
        }

        temp = num[pos];
        num[pos] = num[min];
        num[min] = temp;
    }

    cout << "Sorted array: ";

    for (int pos = 0; pos < 5; pos++)
        cout << num[pos] << " ";

    cout << endl;

    return 0;
}