#include<iostream>

using namespace std;

int amount;

int main()
{
cout << "Enter the amount: ";
cin >> amount;

if(amount>=100)
{
    cout << amount/100 << " 100 rupees notes are there"<<endl;
    amount=amount%100;
}
else{
    cout<<" the 100 rupees notes are 0"<<endl;
}
if(amount>=50)
{
    cout << amount/50 << " 50 rupees notes are there "<<endl;
    amount=amount%50;
}
else{
    cout<<" the  50 rupees notes are 0"<<endl;
}
if(amount>=20)
{
    cout << amount/20 << " 20 rupees notes are there "<<endl;
    amount=amount%20;
}
else{
    cout<<" the 20 rupees notes are 0"<<endl;
}
if(amount>=10)
{
    cout << amount/10 << " 10 rupees notes are there "<<endl;
    amount=amount%10;
}
else{
    cout<<"0 10 rupees notes are there "<<endl;
}
if(amount>=5)
{
    cout << amount/5 << " 5 rupees notes are there "<<endl;
    amount=amount%5;
}
else{
    cout<<" the 5 rupees notes are 0"<<endl;
}
return 0;
}