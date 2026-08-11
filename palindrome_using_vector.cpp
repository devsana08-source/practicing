#include<iostream>

using namespace std;

int main()
{
    int vector[]={1,7,3,8,3,7,1};

    int n=sizeof(vector)/sizeof(vector[0]);

    bool ispalindrome=true;


    for(int i=0;i<n/2;i++)
    {
        if(vector[i]!=vector[n-i-1])
        {
            ispalindrome=false;
            break;
        }
    }

    if(ispalindrome)
    {
        cout<<"The array is a palindrome."<<endl;
    }
    else
    {
        cout<<"The array is not a palindrome."<<endl;
    }

    return 0;
}