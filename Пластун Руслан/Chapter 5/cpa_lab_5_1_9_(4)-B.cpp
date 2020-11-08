#include <iostream>
#include <string>

using namespace std;

class SopItemOrder
{
public:
	SopItemOrder(string _name) {
		this->name = _name;
	}

	void addItem() {
		this->items_ordered++;
	}

	double sum_price() {
		return (double)this->items_ordered * this->price;
	}
private:
	string name;
	double price;
	int items_ordered;
};


int main()
{
	while (true)
	{
		int test;
		cin >> test;
	}

	return 0;
}