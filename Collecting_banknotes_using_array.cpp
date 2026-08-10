#include <iostream>

using namespace std;

int main(void) {

	int money;

	// all known banknotes ordered 
	int banknotes[] = {50, 20, 10, 5, 1};

	cout << "money = ";
	cin >> money;
	for(int i = 0; i < 5; i++)
		while(money >= banknotes[i]) {
			cout << banknotes[i] << ' ';
			money -= banknotes[i];
		}
	cout << endl;
	return 0;
}