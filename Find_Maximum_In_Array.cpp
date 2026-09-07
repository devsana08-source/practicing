#include <iostream>
using namespace std;

int findMaximum(int arr[], int size)
{
    int max = arr[0]; // Assume the first element is the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }
    return max; // Return the maximum value found
}

int main() {
    int arr[] = {3, 5, 88, 2, 8, -1, 4};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int max = findMaximum(arr, size); // Call the function to find the maximum
    cout << "The maximum value in the array is: " << max << endl; // Output the result
    return 0;
}