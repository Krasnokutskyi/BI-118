#include <iostream>

using namespace std;

int main(void)
{
	long long n = 0;

	while (true)
	{
		cout << "Index of Fibonacci number: ";
		cin >> n;

		long long f[2] = { 0, 1 };
		long long answer = 0;

		if (n == 0 || n == 1) {
			answer = n;
		}
		else
		{
			for (long long i = 2; i <= n; i++)
			{
				long long first = f[0];

				f[0] = f[1];
				f[1] = first + f[1];
			}

			answer = f[1];
		}

		cout << "And the number is: " << answer << endl;
	}


	return 0;
}
