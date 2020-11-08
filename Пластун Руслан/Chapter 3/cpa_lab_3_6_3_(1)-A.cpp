#include <iostream>

using namespace std;

void increment(int &ref, int increase_expr = 1)
{
	ref += increase_expr;
}

int main(void)
{
	while (true)
	{

		int var = 0;

		for (int i = 0; i < 10; i++)
			if (i % 2)
				increment(var);
			else
				increment(var, i);

		cout << var << endl;

		int test;
		cin.ignore();
		cin >> test;
	}

	return 0;
}