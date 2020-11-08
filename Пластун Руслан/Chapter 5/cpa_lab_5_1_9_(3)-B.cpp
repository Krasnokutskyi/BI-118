#include <iostream>
#include <string>

using namespace std;

class AdHocSquare
{
	public:
		AdHocSquare(double side) {
			this->side = side;
		}

		void set_side(double side) {
			if (side < 0.) return;
			this->side = side;
		}

		double get_area() {
			return this->side * this->side;
		}
	private:
		double side;
};

class LazySquare
{
	public:
		LazySquare(double side) {
			this->side = side;
		}

		void set_side(double side) {
			if (side < 0.) return;
			this->side = side;
			this->side_changed = true;
		}

		double get_area() {
			if (side_changed) {
				this->area = this->side * this->side;
				side_changed = false;
			}

			return this->area;
		}
	private:
		double side;
		double area;
		bool side_changed;
};


int main()
{
	while (true)
	{
		LazySquare s(4);
		s.set_side(2.0);
		std::cout << s.get_area() << endl;

		AdHocSquare s1(6);
		s1.set_side(3.0);
		std::cout << s1.get_area() << endl;

		int test;
		cin >> test;
	}

	return 0;
}