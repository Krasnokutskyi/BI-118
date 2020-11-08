#include <iostream>

using namespace std;

int main(void) {

	long n;

	while (true)
	{
		cout << "Square size ";
		cin >> n;

		if (n <= 0) {
			cout << "Size must not be <= 0" << endl;
			continue;
		} else if (n > 10) {
			cout << "Size must not be > 10" << endl;
			continue;
		}

		cout << '+';
		for (int i = 0; i < n; i++)
			cout << "--";

		cout << '+' << endl;

		for (int i = 0; i < n; i++)
		{
			cout << '|';
			for (int j = 0; j < n; j++)
				cout << "  ";
			cout << '|' << endl;
		}

		cout << '+';
		for (int i = 0; i < n; i++)
			cout << "--";
		cout << '+' << endl;
	}

	return 0;
}
