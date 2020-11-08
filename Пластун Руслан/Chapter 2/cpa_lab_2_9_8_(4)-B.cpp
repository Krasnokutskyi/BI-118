#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	double vector[] = { 1., 2., 3., 4., 5. };

	int n = sizeof(vector) / sizeof(vector[0]);

	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare;

	// Arithmetic Mean
	ArithmeticMean = 0.;
	for (int i = 0; i < n; i++)
	{
		ArithmeticMean += vector[i];
	}
	ArithmeticMean /= n;

	// Harmonic Mean
	HarmonicMean = 0.;
	for (int i = 0; i < n; i++)
	{
		HarmonicMean += 1 / vector[i];
	}
	HarmonicMean = n / HarmonicMean;


	// Geometric Mean
	GeometricMean = 1.;
	for (int i = 0; i < n; i++)
	{
		GeometricMean *= vector[i];
	}
	GeometricMean = pow(GeometricMean, 1. / double(n));

	// RootMean Square
	RootMeanSquare = 0.;
	for (int i = 0; i < n; i++)
	{
		RootMeanSquare += vector[i] * vector[i];
	}

	RootMeanSquare /= n;
	RootMeanSquare = sqrt(RootMeanSquare);

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean = " << HarmonicMean << endl;
	cout << "Geometric Mean = " << GeometricMean << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;
	cin >> ArithmeticMean;

	return 0;
}