#include <iostream>

using namespace std;

int main(void) {

	double pi4 = 0.;
	long n;

	while (true)
	{
		cout << "Number of iterations? ";
		cin >> n;

		for (long k = 0; k < n; k++)
		{
			double alpha = pow(-1, k);
			double beta = ((2 * k) + 1);
			pi4 += (alpha / beta);
		}

		// Insert your code here
		cout.precision(20);

		cout << "Pi = " << (pi4 * 4.) << endl;
	}

	return 0;
}
