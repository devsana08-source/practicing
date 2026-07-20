#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter the character : ";

    cin>>ch; //it will take input

    cout<<"Previous character is : "<<(char)(ch-1)<<endl; // Print previous character

    cout<<"Next character is : "<<(char)(ch+1)<<endl; // print next character 

    return 0;
}