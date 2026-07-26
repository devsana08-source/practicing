#include <iostream>

using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	
	cout << "Enter a gross price: ";
	cin >> grossprice;      //gross price =net price + tax value
	cout << "Enter a tax rate: ";
	cin >> taxrate;

    netprice = grossprice/(1+(taxrate/100));//the main logic 
	
	taxvalue = grossprice - netprice;

	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
}