#include <iostream>
using namespace std;

int main(void) 
{

	int year, month, day, weekdayNumber;
	cout << "Enter a year: ";
	cin >> year;
	cout << "Enter a month: ";
	cin >> month;
	cout << "Enter a day: ";
	cin >> day;

	if (year >= 1901 && year <= 2100 && month >= 1 && month <= 12 && day >= 1)
	{
		month -= 2;
		if (month <= 0)
		{
			month += 12;
			year -= 1;
		}
		month = month * 83 / 32;
		month += day;
		month += year;
		month += year / 4;
		month -= year / 100;
		month += year / 400;
		weekdayNumber = month % 7;
		cout << weekdayNumber;
	}
	else
	{
		cout << "You entered an invalid data.";
	}

	
	return 0;
}