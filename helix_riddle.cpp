#include<iostream>

using namespace std;

int main()
{
    int n;
    int result;
    
    cout<<"Enter the n : ";
    cin>>n;
    
    result = (n * n) - (2 * (n - 1));
    
    cout<<"the bottom right element is :"<<result;
    
    return 0;
    
    
}