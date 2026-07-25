#include<iostream>
using namespace std;

int main(void) {
	int temperature;
	
	cout << "Enter temperature: ";
	cin >> temperature;


if (temperature > 35)
{
    cout<<"Hot"<<endl;
}
else if (temperature >= 20 && temperature<= 35)
{
    cout<<"Warm"<<endl;
}                    

else if (temperature >= 10 && temperature < 20)
{
    cout<<"Cool"<<endl;
}
else
{
    cout<<"Cold"<<endl;
}
	
	return 0;
}