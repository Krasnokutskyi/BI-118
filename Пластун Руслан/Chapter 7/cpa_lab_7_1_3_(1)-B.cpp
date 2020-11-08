#include <iostream>
#include <exception>

using namespace std;

int main(void) {
	while (true)
	{
		int a = 0, b = 0, c = 0;

		cin >> b;
		if (!cin) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid input" << endl;
			continue;
		}

		cin >> a;
		if (!cin) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid input" << endl;
			continue;
		}

		try {
			if (b == 0)
				throw string("Division by zero");


			c = a / b;
		}
		catch (string& msg) {
			if (msg == "Division by zero") {
				cout << "Your input is not valid, you can't divide by zero." << endl;
			}
			else {
				cout << "Unexpected error has happened:" << endl;
				cout << msg << endl;
			}

			continue;
		}

		cout << c << endl;
	}

	return 0;
}