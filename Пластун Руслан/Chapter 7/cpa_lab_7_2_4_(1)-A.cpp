

#include <iostream>


using namespace std;

class AreaException {
public:
	string message;
	AreaException(string msg): message(msg) {}
};

float square_area(float a) throw(AreaException) {
	if (a <= 0.00001f) throw AreaException("Side of square is zero");

	return a * a;
}

float rectangle_area(float a, float b) throw(AreaException) {
	if (a <= 0.00001f) throw AreaException("a side of reactangle is zero");
	if (b <= 0.00001f) throw AreaException("b side of reactangle is zero");

	return a * b;
}

int main(void) {

	while (true)
	{
		float a, b, r;

		cin >> a;
		cin >> b;

		try
		{
			float rsquare = square_area(a);
			float rrectangle = rectangle_area(a, b);

			cout << rsquare << endl << rrectangle << endl;
		}
		catch (AreaException& exc) {
			cout << exc.message << endl;
			continue;
		}
	}

	return 0;
}
