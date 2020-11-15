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

class Fraction {
public:
	Fraction(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}

	string toString() {
		int rest = numerator % denominator;
		int full = numerator / denominator;

		std::stringstream ss;
		if (full != 0) {
			ss << full << " ";
			rest = fabs(rest);
		}
		if (rest != 0) {
			ss << rest << '/' << fabs(denominator);
		}

		return ss.str();
	}

	double toDouble() {
		return (double)this->numerator / (double)this->denominator;
	}

	Fraction plus(Fraction* that) {
		int f_numerator = this->numerator;
		int f_denominator = this->denominator;

		int s_numerator = that->numerator;
		int s_denominator = that->denominator;

		if (f_denominator != s_denominator) {

			f_numerator *= that->denominator;
			f_denominator *= that->denominator;

			s_numerator *= this->denominator;
			s_denominator *= this->denominator;
		}

		int num = f_numerator + s_numerator;
		int den = f_denominator;

		Fraction result(num, den);
		return reduce_the_terms(result);
	}

	Fraction minus(Fraction* that) {
		int f_numerator = this->numerator;
		int f_denominator = this->denominator;

		int s_numerator = that->numerator;
		int s_denominator = that->denominator;

		if (f_denominator != s_denominator) {

			f_numerator *= that->denominator;
			f_denominator *= that->denominator;


			s_numerator *= this->denominator;
			s_denominator *= this->denominator;
		}

		int num = f_numerator - s_numerator;
		int den = f_denominator;

		Fraction result(num, den);
		return reduce_the_terms(result);
	}

	Fraction times(Fraction* that) {
		int num = this->numerator * that->numerator;
		int den = this->denominator * that->denominator;

		Fraction result(num, den);
		return reduce_the_terms(result);
	}

	Fraction by(Fraction* that) {
		int num = this->numerator * that->denominator;
		int den = this->denominator * that->numerator;

		Fraction result(num, den);
		return reduce_the_terms(result);
	}

	bool is_greater(Fraction* that) {
		int f_numerator = this->numerator;
		int f_denominator = this->denominator;

		int s_numerator = that->numerator;
		int s_denominator = that->denominator;

		if (f_denominator != s_denominator) {

			f_numerator *= that->denominator;
			f_denominator *= that->denominator;


			s_numerator *= this->denominator;
			s_denominator *= this->denominator;
		}

		return (f_numerator > s_numerator);
	}

	static Fraction reduce_the_terms(Fraction fr) {
		int gcd = GCD(abs(fr.numerator), abs(fr.denominator));

		Fraction result(fr.numerator / gcd, fr.denominator / gcd);
		return result;
	}
private:
	int numerator;
	int denominator;
	void reduce();
};

int main() {
	vector<Fraction> fraction;
	std::string fraction1_input = "";
	std::string fraction2_input = "";

	cout << "Enter a command: " << endl;

	while (true)
	{
		std::getline(std::cin, fraction1_input);
		std::getline(std::cin, fraction2_input);

		istringstream iss1(fraction1_input);
		vector<string> tokens1;
		copy(istream_iterator<string>(iss1),
			istream_iterator<string>(),
			back_inserter(tokens1));
		Fraction fraction1(std::stoi(tokens1[0]), std::stoi(tokens1[2]));

		istringstream iss2(fraction2_input);
		vector<string> tokens2;
		copy(istream_iterator<string>(iss2),
			istream_iterator<string>(),
			back_inserter(tokens2));
		Fraction fraction2(std::stoi(tokens2[0]), std::stoi(tokens2[2]));

		if (fraction1.is_greater(&fraction2)) {
			cout << fraction1.toString() << " > " << fraction2.toString() << endl;
		}
		else {
			cout << fraction1.toString() << " <= " << fraction2.toString() << endl;
		}

		cout << "---" << endl;
	}

	return 0;
}