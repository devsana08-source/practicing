#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter the character : ";

    cin>>ch; //it will take input

   if(ch >='0' && ch <= '9')
   {
    cout<<"the input is number"<<endl;
   }


   else if(ch >='A' && ch <= 'Z')
   {
    cout<<"the input is Capital Alphabet"<<endl;
   }
   else if(ch >='a' && ch <= 'z')
   {
    cout<<"the input is Small Alphabet"<<endl;
   }
   else
   {
    cout<<"SPECIAL CHARACTER";
   }

    return 0;
}