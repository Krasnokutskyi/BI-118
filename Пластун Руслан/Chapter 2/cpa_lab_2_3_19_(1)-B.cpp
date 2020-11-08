#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int c0;

	while (true)
	{
		cout << "Enter a number: ";
		cin >> c0;

		while (c0 != 1)
		{
			if (c0 % 2 == 0) {
				// It's even
				c0 /= 2;
				cout <<  c0 << " / 2 = " << c0 << '\n';
			}
			else {
				// It's odd
				c0 = (3 * c0) + 1;
				cout << "3 * " << c0 << " + 1 = " << c0 << '\n';
			}
		}

		cout << "And it's one again" << '\n';
	}

    return 0;
}




