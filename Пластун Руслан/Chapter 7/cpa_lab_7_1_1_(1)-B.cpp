#include <iostream>
#include <exception>

using namespace std;

int main(void) {

	while (true)
	{
		int a = 8, b = 0, c = 0;
		cin >> b;

		try {
			if (b == 0)
				throw string("Division by zero");

			c = a / b;
		}
		catch(string &msg) {
			if (msg == "Division by zero") {
				cout << "Your input is not valid, you can't divide by zero." << endl;
			}

			continue;
		}

		cout << c << endl;
	}
	return 0;
}