#include<iostream>

using namespace std;

int main()
{
    int n;
    long int result = 1;
    
    cout<<"Enter the n value :";
    cin>>n;
    
    if (n==0 || n==1)
    {
        cout<<" The factorial is 1 ";
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            result = result * i; 
        }
    }
    cout<<"the factorial of  "<<n<<" is : "<<result;
    
    return 0;
}