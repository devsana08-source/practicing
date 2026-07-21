#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the Number : ";

    cin>>n;

    if(n > 0)
    cout << "Positive number"<<endl;
    else if(n < 0)
    cout << "Negative number"<<endl;
    else
    cout << "Zero";

    cout<<(n%2==0 ? "Even" : "Odd")<<endl;
   
    if(n>= -9 && n<= 9  )
    {
        cout<<"Single digit"<<endl;
    }
    else if((n>= -99 && n<=-10) || (n>=10 && n<=99))
    {     
        cout<<"Double digit"<<endl;
    }
    else
    {
        cout<<"More than 2 digits"<<endl;
    }

}