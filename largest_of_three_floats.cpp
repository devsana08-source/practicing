#include <iostream>

using namespace std;

int main()
{
    float f1,f2,f3,largest;

    cout<<"Enter 3 floating point number : "<<endl;

    cin>> f1 >> f2 >> f3;

    if(f1 >= f2 && f1 >= f3)
    {
        largest = f1;
    }
    else if(f2 >= f3)
    {
        largest = f2;
    }
    else
    {
        largest = f3;
    }
    
    cout<<"Largest number is : "<<largest<<endl;
    
    if(largest > 0)
    {
        cout << "Positive";
    }
    else if(largest < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Zero";
    }
    return 0;
}