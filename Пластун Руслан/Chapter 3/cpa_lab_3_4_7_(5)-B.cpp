#include <iostream>
#include <ctime>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

Date today(void) {
	time_t t = time(NULL);
	tm tl = *localtime(&t);

	return Date{ tl.tm_year + 1900, tl.tm_mon + 1, tl.tm_mday };
}
int main(void)
{

	while (true)
	{
		Date curr_date = today();
		cout << curr_date.year << '-' << curr_date.month << '-' << curr_date.day << endl;

		int test;
		cin.ignore();
		cin >> test;
	}

	return 0;
}