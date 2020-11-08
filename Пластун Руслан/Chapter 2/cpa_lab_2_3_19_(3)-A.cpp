#include <iostream>

using namespace std;

int main(void) {
	while (true)
	{
		long long exp = 0;
		long long alpha = 1;

		cout << "Number of iterations? ";
		cin >> exp;

		for (long long k = 0; k < exp; k++)
		{
			alpha *= 2;
		}

		// Insert your code here
		cout.precision(64);

		cout << "alpha = " << alpha  << endl;
	}

	return 0;
}
