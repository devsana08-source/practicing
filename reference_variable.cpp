#include<iostream>

using namespace std;

int main()
{
    int a=10;
    int *p=&a;
    int& ref=a;

    cout <<"the value of a is:"<<a<<"\n";
    cout <<"the value of ref is :"<<ref<<endl;
    cout <<"the value of p is :"<<p<<endl;

    cout<<endl;
    
    cout <<"the address of a is:"<<&a<<"\n";
    cout <<"the address of ref is:"<<&ref<<endl;    
    cout <<"the address of p is:"<<&p<<endl;
    
    cout<<endl;

    ref=20;
    cout <<"the value of a is:"<<a<<"\n";
    cout <<"the value of ref is :"<<ref<<endl;



    return 0;
}