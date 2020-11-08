#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

class Fraction {
public:
	Fraction(int numerator, int denomitator) {
		this->numerator = numerator;
		this->denomitator = denomitator;
	}
	Fraction();

	string toString() {
		int rest = numerator % denomitator;
		int full = numerator / denomitator;

		std::stringstream ss;
		if (full != 0) {
			ss << full << " ";
			rest = fabs(rest);
		}
		if (rest != 0) {
			ss << rest << '/' << fabs(denomitator);
		}

		return ss.str();
	}
	double toDouble() {
		return (double)numerator / (double)denomitator;
	}

private:
	int numerator;
	int denomitator;
};

int main() {
	vector<Fraction> fraction;
	std::string command = "";

	cout << "Enter a command: " << endl;

	while (command != "quit")
	{
		std::getline(std::cin, command);

		istringstream iss(command);

		vector<string> tokens;
		copy(istream_iterator<string>(iss),
			istream_iterator<string>(),
			back_inserter(tokens));

		Fraction fraction(std::stoi(tokens[0]), std::stoi(tokens[2]));

		cout << fraction.toString() << " is " << fraction.toDouble() << "in decimal" << endl;
		cout << "---" << endl;
	}

	return 0;
}