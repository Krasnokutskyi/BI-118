#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

static int GCD(int n1, int n2) {
	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}

	return n1;
}

class Point2D {
	public:
		Point2D(double x, double y) {
			this->x = x;
			this->y = y;
		}

		string toString() {
			cout << this->x << ", " << this->y << endl;
		}

		double distanceTo(Point2D *that) {
			return sqrt(((this->x - that->x) * (this->x - that->x)) + ((this->y - that->y) * (this->y - that->y)));
		}
private:
	double x;
	double y;
};

int main() {
	std::string point1_input = "";
	std::string point2_input = "";

	cout << "Enter a command: " << endl;

	while (true)
	{
		std::getline(std::cin, point1_input);
		std::getline(std::cin, point2_input);

		istringstream iss1(point1_input);
		vector<string> tokens1;
		copy(istream_iterator<string>(iss1),
			istream_iterator<string>(),
			back_inserter(tokens1));
		Point2D p1(std::stod(tokens1[0]), std::stod(tokens1[1]));

		istringstream iss2(point2_input);
		vector<string> tokens2;
		copy(istream_iterator<string>(iss2),
			istream_iterator<string>(),
			back_inserter(tokens2));
		Point2D p2(std::stod(tokens2[0]), std::stod(tokens2[1]));

		cout << p1.distanceTo(&p2) << endl;

		cout << "---" << endl;
	}

	return 0;
}