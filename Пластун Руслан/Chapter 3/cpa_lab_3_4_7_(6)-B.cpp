#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
	if (num <= 1) return false;

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

int main(void)
{
	while (true)
	{

		for (int i = 0; i <= 21; i++)
			if (isPrime(i))
				cout << i << " ";

		cout << endl;

		int test;
		cin >> test;
	}

	return 0;
}