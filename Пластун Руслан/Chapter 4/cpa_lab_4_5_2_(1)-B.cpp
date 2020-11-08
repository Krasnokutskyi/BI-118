#include <iostream>
#include <string>

#include <algorithm>

using namespace std;

static inline bool is_not_alnum_space(char c)
{
	return isdigit(c);
}

bool string_is_valid(const std::string& str)
{
	return find_if(str.begin(), str.end(), is_not_alnum_space) == str.end();
}

int main(void) {
	while (true)
	{
		string IP;

		cin >> IP;
		
		int first_dot = IP.find('.');
		if (first_dot == string::npos) {
			cout << "IP must have at least three dots" << endl << "---" << endl;
			continue;
		}

		int second_dot = IP.find('.', first_dot + 1);
		if (second_dot == string::npos) {
			cout << "IP must have at least three dots" << endl << "---" << endl;
			continue;
		}

		int third_dot = IP.find('.', second_dot + 1);
		if (third_dot == string::npos) {
			cout << "IP must have at least three dots" << endl << "---" << endl;
			continue;
		}

		string first_part = IP.substr(0, first_dot);
		string second_part = std::string(&IP[first_dot + 1], &IP[second_dot ]);
		string third_part = std::string(&IP[second_dot + 1], &IP[third_dot]);
		string fourth_part = IP.substr(third_dot + 1);

		if (
			string_is_valid(first_part) ||
			string_is_valid(second_part) ||
			string_is_valid(third_part) ||
			string_is_valid(fourth_part)
			) {
			cout << "Only digits are allowed!" << endl << "---" << endl;
			continue;
		}

		if (
			!(0 <= std::stoi(first_part)) || !(std::stoi(first_part) <= 255) ||
			!(0 <= std::stoi(second_part)) || !(std::stoi(second_part) <= 255) ||
			!(0 <= std::stoi(third_part)) || !(std::stoi(third_part) <= 255) ||
			!(0 <= std::stoi(fourth_part)) || !(std::stoi(fourth_part) <= 255)) {
			cout << "Too big value of a part" << endl << "---" << endl;
			continue;
		}

		cout << "Correct IP" << endl << "---" << endl;
	}

	return 0;
}