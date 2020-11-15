#include <iostream>
#include <string>

using namespace std;

class Square
{
	public:
		Square(double side);
		double set_side(double new_side) {
			if (new_side < 0) 
			{
			    return -1;
			}
            else
            {
			this->side = new_side;
			this->area = this->side * this->side;
            }
            
			return this->side;
		}

		void print() 
		{
			cout << "Square: side=" << this->side << " area=" << this->area << endl;
		}

	private:
		double side;
		double area;
};

Square::Square(double side)
{
	this->side = side;
	this->area = side * side;
}


int main()
{
		Square s(4);

		s.print();
		s.set_side(2.0);

		s.print();
		s.set_side(-33.0);

        s.print();

	return 0;
}