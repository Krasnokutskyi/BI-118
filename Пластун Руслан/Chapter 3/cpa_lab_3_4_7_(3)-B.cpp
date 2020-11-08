#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};int MONTHS_LENGTHS[] = { 31, 28,
		31, 30, 31,
		30, 31, 31,
		30, 31, 30,
		31 };

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

	int longevity = MONTHS_LENGTHS[month_index];

	if (isLeap(year) && month_index == 1) longevity++;

	return longevity;
}

int dayOfYear(Date date)
{
	int day = 0;

	for (int i = 1; i <= date.month - 1; i++)
	{
		day += monthLength(date.year, i);
	}

	day += date.day;

	return day;
}

int main(void)
{
	while (true)
	{
		Date d;
		cout << "Enter year month day: ";
		cin >> d.year >> d.month >> d.day;
		cout << dayOfYear(d) << endl;
	}

	return 0;
}