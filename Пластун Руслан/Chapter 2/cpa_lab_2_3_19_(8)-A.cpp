#include <iostream>

using namespace std;

int main(void) {

	int n;

	while (true)
	{
		cout << "Enter a number: ";
		cin >> n;

		if (!(0 < n) || !(n <= 20)) {
			cout << "Size must be in (2, 20] range" << endl;
			continue;
		}

		long long answer = 1;
		for (int i = 2; i <= n; i++)
		{
			answer *= i;
		}

		cout << answer << endl;
	}

	return 0;
}
