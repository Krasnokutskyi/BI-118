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
		struct DATETIME first_datetime = { 0, 0 };
		struct DATETIME second_datetime = { 0, 0 };

		int event_minutes = 0;

		cin >> first_datetime.hours;
		cin >> first_datetime.minutes;

		if (!(0 <= first_datetime.hours) || !(first_datetime.hours <= 23) ||
			!(0 <= first_datetime.minutes) || !(first_datetime.minutes <= 59)) {
			cout << "Please, input correct datetime" << endl;
			continue;
		}

		cin >> second_datetime.hours;
		cin >> second_datetime.minutes;

		if (!(0 <= second_datetime.hours) || !(second_datetime.hours <= 23) ||
			!(0 <= second_datetime.minutes) || !(second_datetime.minutes <= 59)) {
			cout << "Please, input correct datetime" << endl;
			continue;
		}

		if (first_datetime.hours > second_datetime.hours &&
			first_datetime.minutes > second_datetime.minutes) {
			cout << "Please, provide first datetime that is earlier than second datetime" << endl;
			continue;
		}

		int delta_minutes = ((second_datetime.hours * 60) + second_datetime.minutes) -
							((first_datetime.hours * 60) + first_datetime.minutes);

		int delta_hours = delta_minutes / 60;
		delta_minutes -= delta_hours * 60;

		cout << delta_hours << ":" << delta_minutes << endl;
		cout << "--- --- ---" << endl;
	}

	return 0;
}
