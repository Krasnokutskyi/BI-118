#include <iostream>

using namespace std;

void to_binary(int n)
{
	int a[100];
	int i;

	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}

	for (int i = 0; i < 100; i++)
	{
		if (a[i] == 0 || a[i] == 1) {
			cout << a[i];
		}
	}

	cout << endl;
}

int main(void)
{
	while (true)
	{
		unsigned int n;
		int count = 0;

		cout << "Pyramid size ";
		cin >> n;

		while (n) {
			to_binary(n);
			count += n & 1;
			n >>= 1;
		}

		cout << count << endl;
	}

	return 0;
}
