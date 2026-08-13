#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare;
	
	double sum=0;
	double harmonicsum = 0;
	double geosum =0 ;
	double rms =0 ;
	
	   for(int i = 0; i < n; i++)
    {
        sum += vector[i];

        harmonicsum += 1 / vector[i];

        geosum *= vector[i];

        rms += vector[i] * vector[i];
    }

    ArithmeticMean = sum / n;

    HarmonicMean = n / harmonicsum;

    GeometricMean = pow(geosum, 1.0 / n);

    RootMeanSquare = sqrt(rms / n);


    // Arithmetic Mean = (x1 + x2 + ... + xn) / n

    // Harmonic Mean = n / (1/x1 + 1/x2 + ... + 1/xn)

    // Geometric Mean = (x1 × x2 × ... × xn)^(1/n)   

    // Root Mean Square = sqrt((x1² + x2² + ... + xn²) / n)

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean   = " << HarmonicMean   << endl;
	cout << "Geometric Mean  = " << GeometricMean  << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;
	return 0;
}
