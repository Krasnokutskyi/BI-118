#include <iostream>

using namespace std;

int main(void)
{
	while (true)
	{
		int banknotes[] = { 0, 0, 0, 0, 0 };
		int banknotes_nominals[] = {50, 20, 10, 5, 1};

		int sum;

		cin >> sum;

		for (int i = 0; i < 5; i++)
		{
			banknotes[i] = sum / banknotes_nominals[i];
			sum -= banknotes[i] * banknotes_nominals[i];
		}


		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < banknotes[i]; j++)
			{
				cout << banknotes_nominals[i] << " ";
			}
		}

		cout << endl;
	}

	return 0;
}
