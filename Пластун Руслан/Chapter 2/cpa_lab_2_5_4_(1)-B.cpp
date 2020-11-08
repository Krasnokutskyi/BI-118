#include <iostream>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end

using namespace std;


int main(void)
{
	while (true)
	{
		int operations[] = { 1, 2, 3, 4 };
		int n;

		int first_number;
		int second_number;

		cout << "MENU:\n"
				"0 - exit\n"
				"1 - addition\n"
				"2 - subtraction\n"
				"3 - multiplication\n"
				"4 - division\n"
				"Your choice?\n";

		cin >> n;

		if (n == 0) return 0;

		bool valid_operation = find(begin(operations), end(operations), n) != end(operations);
		
		if (!valid_operation) {
			cout << "Please, provide valid input\n---\n";
			continue;
		}

		cout << "First number: ";
		cin >> first_number;

		cout << "Second number: ";
		cin >> second_number;
		cout << endl;

		int result;
		switch (n)
		{
		case 1: // addition
			result = first_number + second_number;

			break;
		case 2: // subtraction
			result = first_number - second_number;

			break;
		case 3: // multiplication
			result = first_number * second_number;

			break;
		case 4: // division
			if (second_number == 0) {
				cout << "Division by 0 is not permitted\n---\n";
				continue;
			}
			
			result = first_number / second_number;

			break;
		default:
			throw "Unexpected Error\n";
			break;
		}

		cout << "Result is: " << result << endl;
	}

	return 0;
}
