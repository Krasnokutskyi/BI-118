#include <iostream>

class FlightBooking {
	public:
		FlightBooking(int id, int capacity, int reserved) {
			this->id = id;
			this->capacity = capacity;
			this->reserved = reserved;
		}
		void printStatus() {
			std::cout << "Flight " << id << " : " << reserved << "/" << capacity << "(" << ((double)reserved / (double)capacity)*100.0 << "%) seats taken" << std::endl;
		}
	private:
		int id;
		int capacity;
		int reserved;
};

int main() {

		int reserved = 0,
			capacity = 0;

		std::cout << "Provide flight capacity: ";
		std::cin >> capacity;

		std::cout << "Provide number of reserved seats: ";
		std::cin >> reserved;

		FlightBooking booking(1, capacity, reserved);
		
		booking.printStatus();

	return 0;
}