#include<iostream>
using namespace std;

int main()
{
     string fruit[5] = {"Apple", "Banana", "Mango", "Orange", "Grapes"};
     
     cout<<"the fruits are:"<<endl;
     for(int i = 0; i < 5; i++)
     {
          cout<<fruit[i] << endl; // print the elements of the array 

          cout<<(fruit+i)<<endl; // print the address of the  elements of the array 

          cout<<*(fruit+i)<<endl; //print the elements of the array 
     }
        cout<<fruit<<endl; // print initial address of the array (apple address)
     return 0;
}