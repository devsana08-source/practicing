#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    int *p = arr;

    // Input array elements using pointers
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> *(p + i);
    }

    // Sort using pointers (Ascending Order)
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (*(p + i) > *(p + j)) 
            {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    // Display sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << *(p + i) << " ";
    }
    cout << endl;

    return 0;
}
