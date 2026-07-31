#include <iostream>

using namespace std;

int main()
{
    int h;

    cout << "Enter pyramid height (3-8): ";
    cin >> h;

    if(h <= 2 || h >= 9)
    {
        cout << "Invalid height!";
        return 0;
    }

    for(int row = 0; row < h - 1; row++)
    {
        // Print 3 pyramids
        for(int pyramid = 0; pyramid < 3; pyramid++)
        {
            // Leading spaces
            for(int s = 0; s < h - row - 1; s++)
                cout << " ";

            // Left star
            cout << "*";

            // Hollow part
            if(row > 0)
            {
                for(int space = 0; space < 2 * row - 1; space++)
                    cout << " ";

                // Right star
                cout << "*";
            }

            if(pyramid < 2)
            {
                for(int gap = 0; gap < h; gap++)
                    cout <<" ";
            }
        }

        cout << endl;
    }

    // Print the bases
    for(int pyramid = 0; pyramid < 3; pyramid++)
    {
        for(int star = 0; star < 2 * h - 1; star++)
            cout << "*";

        if(pyramid < 2)
            cout << " ";
    }

    cout << endl;

    return 0;
}