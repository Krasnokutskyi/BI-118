#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

class FlightBooking {
public:
	FlightBooking(int id, int capacity, int reserved);
	FlightBooking();
	void printStatus();
	bool reserveSeats(int number_ob_seats);
	bool canceReservations(int number_ob_seats);
	int get_id(void) {
		return this->id;
	}
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

int find_by_booking_id(vector<FlightBooking>* bookings, int booking_id) {
	for (int i = 0; i < bookings->size(); i++)
	{
		if (bookings->at(i).get_id() == booking_id) {
			return i;
		}
	}

	return -1;
}

int main() {
	vector<FlightBooking> bookings[10];
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

		for (int i = 0; i < tokens.size(); i++)
		{
			// cout << tokens[i] << endl;
		}

		if (tokens[0] == "create") {

			if (bookings->size() != 10) {
				bookings->push_back(FlightBooking(std::stoi(tokens[1]), std::stoi(tokens[2]), 0));
			}
		}
		else if (tokens[0] == "delete") {
			int i = find_by_booking_id(bookings, std::stoi(tokens[1]));
			if (bookings->size() >i) {
				bookings->erase(bookings->begin() + i );
			}
		} else if (tokens[0] == "add") {
			int i = find_by_booking_id(bookings, std::stoi(tokens[1]));
			bookings->at(i).reserveSeats(std::stoi(tokens[2]));
		} else if (tokens[0] == "cancel") {
			int i = find_by_booking_id(bookings, std::stoi(tokens[1]));
			bookings->at(i).canceReservations(std::stoi(tokens[2]));
		}
		else if (tokens[0] == "quit") {
			break;
		}

		cout << "---" << endl;

		for (int i = 0; i < bookings->size(); i++)
		{
			bookings->at(i).printStatus();
		}
	}

	return 0;
}