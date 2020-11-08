#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void) {
	while (true)
	{
		long long exp = 0;
		long long alpha = 1;
		double alpha_fraction = 1.0;

		cout << "Number of iterations? ";
		cin >> exp;

		for (long long k = 0; k < abs(exp); k++)
		{
			if (exp > 0) {
				alpha *= 2;

			}
			else {
				alpha_fraction /= 2.0;

			}
		}

		cout.precision(20);

		if (exp > 0)
		{
			cout << "alpha = " << alpha << endl;
		}
		else
		{
			cout << "alpha = " << alpha_fraction << endl;
		}
	}

	return 0;
}
