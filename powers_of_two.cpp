#include<iostream>

using namespace std;

int main()
{
    double result = 1;
    int n;
    
    cout<<"Enter the number  : ";
    cin >> n;
    
    if(n > 0)
    {
        for(int i = 0 ; i < n ; i++)
        {
            result = result * 2 ;
        }
    }
    else
    {
        for(int i = 0 ; i > n ; i--)
        {
            result = result / 2 ;
        }
    }
    
    cout.precision(20);
    cout << "The result of 2 ^  " <<  n <<" :"<< result << endl;
    
    return 0;
    
}