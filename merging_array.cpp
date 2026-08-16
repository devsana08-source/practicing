#include <iostream>
#include <algorithm> // Required for std::merge

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedArr[size1 + size2];

    // Merge both sorted arrays automatically
    std::merge(arr1, arr1 + size1, arr2, arr2 + size2, mergedArr);

    std::cout << "Merged Sorted Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << mergedArr[i] << " ";
    }

    return 0;
}
