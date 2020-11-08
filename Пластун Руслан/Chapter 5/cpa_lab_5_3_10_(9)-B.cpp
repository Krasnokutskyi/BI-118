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

	double distanceTo(Point2D* that) {
		return sqrt(((this->x - that->x) * (this->x - that->x)) + ((this->y - that->y) * (this->y - that->y)));
	}

	double x;
	double y;
};

class Line2D
{
public:
	Line2D(double slope, double y_intersect) {
		this->slope = slope;
		this->y_intersect = y_intersect;
	}

	Line2D(Point2D* p1, Point2D* p2) {
		this->slope = (p1->y - p2->y) / (p1->x - p2->x);
		this->y_intersect = p1->y - (this->slope * p1->x);
	}

	void toString() {
		string sign = this->y_intersect > 0.0f ? "+" : "-";
		cout << "y = " << this->slope << "x " << sign << " " << fabs(this->y_intersect) << endl;
	}

private:
	double slope;
	double y_intersect;
};


int main() {
	std::string point1_input = "";
	std::string point2_input = "";

	cout << "Enter a command: " << endl;

	while (true)
	{
		std::getline(std::cin, point1_input);
		std::getline(std::cin, point2_input);

		// Process fraction1 into tokens
		istringstream iss1(point1_input);
		vector<string> tokens1;
		copy(istream_iterator<string>(iss1),
			istream_iterator<string>(),
			back_inserter(tokens1));
		Point2D p1(std::stod(tokens1[0]), std::stod(tokens1[1]));

		// Process fraction2 into tokens
		istringstream iss2(point2_input);
		vector<string> tokens2;
		copy(istream_iterator<string>(iss2),
			istream_iterator<string>(),
			back_inserter(tokens2));
		Point2D p2(std::stod(tokens2[0]), std::stod(tokens2[1]));

		Line2D line(&p1, &p2);
		line.toString();

		cout << "---" << endl;
	}

	return 0;
}