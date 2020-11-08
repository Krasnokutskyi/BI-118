#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

class FarmAnimal {

public:
	FarmAnimal(string name, double water_consumption, double kg) {
		this->water_consumption = water_consumption;
		this->name = name;
		this->kg = kg;
	}

	double getWaterConsumption() {
		return water_consumption;
	}

private:
	// water consumption per kilogram of weight
	string name;
	double water_consumption;
	double kg;
};

class ConsumptionAccumulator
{
	public:
		ConsumptionAccumulator() : total_consumption(0) {

		}

		double getTotalConsumption() {
			return total_consumption;
		}

		void addConsumption(FarmAnimal * animal){
			total_consumption += animal->getWaterConsumption();
}
	private:
		double total_consumption;
};

int main()
{
	ConsumptionAccumulator ca;
	std::string fa_input = "";

	while (true)
	{
		std::getline(std::cin, fa_input);

		// Process fraction2 into tokens
		istringstream iss2(fa_input);
		vector<string> tokens2;
		copy(istream_iterator<string>(iss2),
			istream_iterator<string>(),
			back_inserter(tokens2));

		if (tokens2.size() == 0) {
			cout << ca.getTotalConsumption() << endl;
			break;
		}

		FarmAnimal fa("", -1, 1);
		double kg = std::stod(tokens2[1]);

		if (tokens2[0] == "sheep") {
			fa = FarmAnimal(tokens2[0], (kg / 10.0) * 1.1, kg);
		}
		else if (tokens2[0] == "horse") {
			fa = FarmAnimal(tokens2[0], (kg / 100.0) * 6.8, kg);
		}
		else if (tokens2[0] == "cow") {
			fa = FarmAnimal(tokens2[0], (kg / 100.0) * 8.6, kg);
		}

		ca.addConsumption(&fa);
	}

	cout << "---" << endl;

	int test = 0;
	cin >> test;

	return 0;
}
