#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int duplicateCount = 0;

    cout << "Enter 5 array elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++)
    {
        int counter = 1;

        for(int j = i + 1; j < 5; j++)
        {
            if(arr[i] == arr[j])
            {
                counter++;
            }
        }

        // Check whether this value appeared earlier
        bool alreadyCounted = false;

        for(int k = 0; k < i; k++)
        {
            if(arr[k] == arr[i])
            {
                alreadyCounted = true;
                break;
            }
        }

        if(counter > 1 && !alreadyCounted)
        {
            duplicateCount++;
        }
    }

    cout << "Number of duplicate values: " << duplicateCount << endl;

    return 0;
}