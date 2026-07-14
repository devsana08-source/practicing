#include <iostream>
#include <cstring>
using namespace std;

// Swap two characters using pointers
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Generate permutations
void permute(char *str, int l, int r)
{
    if (l == r)
    {
        cout << str << "  ";
        return;
    }

    for (int i = l; i <= r; i++)
    {
        swap(str + l, str + i);   // choose

        permute(str, l + 1, r);   // explore

        swap(str + l, str + i);   // backtrack
    }
}

int main()
{
    char str[] = "DEV";

    cout << "\n\nThe permutations of the string are :\n\n";

    permute(str, 0, strlen(str) - 1);
    cout<<endl;
    

    return 0;
}