#include <iostream>

using namespace std;


bool isLeap(int year)
{
	if (year % 4 != 0) {
		return false;
	}
	else if (year % 100 != 0) {
		return true;
	}
	else if (year % 400 != 0) {
		return false;
	}
	else {
		return true;
	}
}

int monthLength(int year, int month)
{
	int month_index = month - 1;

	int MONTHS_LENGTHS[] = { 31, 28,
		31, 30, 31,
		30, 31, 31,
		30, 31, 30,
		31};

	int longevity = MONTHS_LENGTHS[month_index];

	if (isLeap(year) && month_index == 1) longevity++;

	return longevity;
}

int main(void)
{
	while (true)
	{
		for (int yr = 2000; yr < 2002; yr++)
		{
			for (int mo = 1; mo <= 12; mo++)
				cout << monthLength(yr, mo) << " ";

			cout << endl;
		}

		int test;
		cin >> test;
	}
	return 0;
}