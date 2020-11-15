#include <iostream>
#include <string>

using namespace std;

class FlightBooking {
public:
	FlightBooking(int id, int capacity, int reserved);
	void printStatus();
	bool reserveSeats(int number_ob_seats);
	bool canceReservations(int number_ob_seats);
private:
	int id;
	int capacity;
	int reserved;
};

void FlightBooking::printStatus() {
	std::cout << "Flight " << id << " : " << reserved << "/" << capacity << "(" << ((double)reserved / (double)capacity) * 100.0 << "%) seats taken" << std::endl;
}

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
	if (reserved < 0) reserved = 0;

	this->id = id;
	this->capacity = capacity;
	this->reserved = reserved;
}

bool FlightBooking::reserveSeats(int number_ob_seats)
{
	if (((double)(this->reserved + number_ob_seats) / (double)capacity) * 100.0 > 105.0) return false;

	this->reserved += number_ob_seats;

	return true;
}

bool FlightBooking::canceReservations(int number_ob_seats)
{
	if (this->reserved < number_ob_seats) return false;

	this->reserved -= number_ob_seats;

	return false;
}

int main() {
	int reserved = 0,
		capacity = 0;

	std::cout << "Provide flight capacity: ";
	std::cin >> capacity;

	std::cout << "Provide number of reserved seats: ";
	std::cin >> reserved;

	FlightBooking booking(1, capacity, reserved);
	std::string command = "";

	while (command != "quit")
	{
		std::getline(std::cin, command);

		if (command.find("add") != std::string::npos) {
			int seats = std::stoi(command.substr(4));
			if (!booking.reserveSeats(seats)) {
				cout << "Cannot perform this operation" << endl;
			}
		}
		else if (command.find("cancel") != std::string::npos) {
			int seats = std::stoi(command.substr(6));
			if (!booking.canceReservations(seats)) {
				cout << "Cannot perform this operation" << endl;
			}
		}

		booking.printStatus();
	}

	return 0;
}