#include <iostream>

using namespace std;

struct DATETIME {
	int hours;
	int minutes;
};

int main(void)
{
	while (true)
	{
		struct DATETIME datetime = { 0, 0 };

		int event_minutes = 0;

		cin >> datetime.hours;
		cin >> datetime.minutes;

		if (!(0 <= datetime.hours) || !(datetime.hours <= 23) ||
			!(0 <= datetime.minutes) || !(datetime.minutes <= 59)) {
			cout << "Please, input correct datetime" << endl;
			continue;
		}

		cin >> event_minutes;

		int minutes = (datetime.hours * 60) + datetime.minutes + event_minutes;
		datetime.hours = minutes / 60;
		minutes -= datetime.hours * 60;
		datetime.minutes = minutes;
		datetime.hours = datetime.hours % 24;

		cout << datetime.hours << ":" << datetime.minutes << endl;
	}

	return 0;
}
