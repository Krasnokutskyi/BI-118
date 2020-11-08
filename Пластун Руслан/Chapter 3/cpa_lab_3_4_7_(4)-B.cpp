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

int daysBetween(Date d1, Date d2) {
	if (d2.year < d1.year) {
		return -1;
	}

	int since_d1_year_start_to_d1 = dayOfYear(d1);

	int since_d1_year_start_to_d2 = 0;
	for (int i = d1.year; i < d2.year; i++)
	{
		since_d1_year_start_to_d2 += isLeap(i) ? 366 : 365;
	}
	since_d1_year_start_to_d2 += dayOfYear(d2);

	int days_between = since_d1_year_start_to_d2 - since_d1_year_start_to_d1;

	if (days_between < 0) {
		return -1;
	}

	return days_between;
}

int main(void)
{
	while (true)
	{
		Date since, till;

		cout << "Enter first date (y m d): ";
		cin >> since.year >> since.month >> since.day;
		cout << "Enter second date (y m d): ";
		cin >> till.year >> till.month >> till.day;
		cout << daysBetween(since, till) << endl;
	}

	return 0;
}