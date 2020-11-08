#include <iostream>

using namespace std;

int main(void) {

	long n;

	while (true)
	{
		cout << "Pyramid size ";
		cin >> n;

		if (!(2 < n) || !(n < 9)) {
			cout << "Size must be in (2, 9) range" << endl;
			continue;
		}

		int len = (2 * n) - 1;
		int star_index = n - 1;
		for (int i = 0; i < n; i++)
		{
			if (i == n - 1) {
				for (int j = 0; j < len; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
			else {
				for (int j = 0; j < len; j++)
				{
					if (j == star_index || j == (len - 1 - star_index)) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}

			star_index -= 1;
		}

	}

	return 0;
}
