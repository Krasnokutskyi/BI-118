#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

class Membership {
public:
	Membership(int id, string name, int subscription_length) {
		this->id = id;
		this->name = name;
		this->subscription_length = subscription_length;
	}
	Membership();
	void printStatus() {
		std::cout << "Member " << this->id << " : " << this->name << ", subscription valid for " << this->subscription_length << " months" << std::endl;
	}
	bool extend_subscription(int months) {
		this->subscription_length += months;
		return true;
	}
	void cancel_subscription() {
		this->subscription_length = 0;
	}
	int get_id(void) {
		return this->id;
	}
private:
	int id;
	string name;
	int subscription_length;
};

int find_by_membership_id(vector<Membership>* memberships, int membership_id) {
	for (int i = 0; i < memberships->size(); i++)
	{
		if (memberships->at(i).get_id() == membership_id) {
			return i;
		}
	}

	return -1;
}

int main() {
	vector<Membership> bookings[10];
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
				string full_name = tokens[2].append(" ");
				full_name = full_name.append(tokens[3]);

				bookings->push_back(Membership(std::stoi(tokens[1]), full_name, 0));
			}
		}
		else if (tokens[0] == "delete") {
			int i = find_by_membership_id(bookings, std::stoi(tokens[1]));

			if (bookings->size() > i) {
				bookings->erase(bookings->begin() + i);
			}
		}
		else if (tokens[0] == "extend") {
			int i = find_by_membership_id(bookings, std::stoi(tokens[1]));

			bookings->at(i).extend_subscription(std::stoi(tokens[2]));
		}
		else if (tokens[0] == "cancel") {
			int i = find_by_membership_id(bookings, std::stoi(tokens[1]));

			bookings->at(i).cancel_subscription();
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