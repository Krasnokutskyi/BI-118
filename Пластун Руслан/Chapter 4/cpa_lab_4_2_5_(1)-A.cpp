#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(void)
{
	while (true)
	{
		long long int sum = 0;
		long long int N;

		cin >> N;
		sum = N * (N + 1) / 2;

		cout << sum << endl;
		cout << "---";
	}

	return 0;
}