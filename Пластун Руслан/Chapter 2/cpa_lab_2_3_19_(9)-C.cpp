#include <iostream>

using namespace std;

int main(void) {

	long n;

	while (true)
	{
		cout << "Square size ";
		cin >> n;

		if (n % 2 == 0) {
			cout << "Must be an odd number" << endl;
			continue;
		}

		n -= 2;
		cout << (n * n) + (2 * n) + 2 << endl;
	}

	return 0;
}
