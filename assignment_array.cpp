#include<iostream>
using namespace std;

void cross_upper_triangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j< n-i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the triangle: ";
    cin>>n;
    cross_upper_triangle(n);
    return 0;
}



