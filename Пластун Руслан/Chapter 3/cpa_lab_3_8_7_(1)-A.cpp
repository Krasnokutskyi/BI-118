#include <iostream>
#include <cmath>

using namespace std;

void increment(int& ref, int increase_expr = 1)
{
	ref += increase_expr;
}

void increment(float& ref, float increase_expr = 1)
{
	ref += increase_expr;
}

int main(void) {
	while (true)
	{
		int intvar = 0;
		float floatvar = 1.5;

		for (int i = 0; i < 10; i++)
			if (i % 2) {
				increment(intvar);
				increment(floatvar, sqrt(intvar));
			}
			else {
				increment(intvar, i);
				increment(floatvar);
			}
	
		cout << intvar * floatvar << endl;

		int test;
		cin.ignore();
		cin >> test;
	}

	return 0;
}