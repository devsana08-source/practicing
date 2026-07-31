#include<iostream>

using namespace std;
int main()
{
    long int n ;
    long int first = 1, second=1, next;
    
    cout <<" Enter the n : ";
    cin>>n;
    
    if(n==1 || n ==2)
    {
        cout<<"1";
        
        return -1;
    }
    else
    {
        for(int i=3;i<=n;i++)
        {
            next = first + second;
          
            first = second;
            second = next;
        }
        cout<<next;
    }
    return 0;
}