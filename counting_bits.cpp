#include<iostream>

using namespace std;

int main()
{
    unsigned long n;
    unsigned long result;
    
    cout<<"Enter the number : ";
    cin>>n;
    
    int counter = 0;
    
    while (n != 0)
    {
      result =  n & 1;
      
      if(result == 1)
      {
          counter++;
      }
     n =  n >> 1;
    }
     cout <<"no of 1's is  :"<<counter;
     
     return 0;
}