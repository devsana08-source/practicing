#include <iostream>

using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x, y;

	cout << "Enter value for x: ";
	cin >> x;

    float x2=x*x;
    float p2=pi*pi;
    
    float part1 = x2 / (p2 * (x2 + 0.5));
    float part2 = x2 / (p2 * (x2 - 0.5) * (x2 - 0.5));

    
    y=part1*(1+part2); //y = (x^2 / (pi^2 * (x^2 + 0.5))) * (1 + (x^2 / (pi^2 * (x^2 - 0.5)^2)))


	cout << "y = " << y << endl;
	return 0;
}