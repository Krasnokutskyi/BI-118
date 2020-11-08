#include <iostream>
using namespace std;

int main(void) {

	while (true)
	{
		string input = "";

		int vector1[7] = { 4, 7, 2, 8, 1, 3, 0 };
		int vector2[7];

		// Insert your code here
		for (int i = 0; i < 7; i++) {
			vector2[i] = vector1[i == 0 ? 6 : i - 1];
			cout << vector1[i] << ' ';
		}

		cout << endl;

		for (int i = 0; i < 7; i++)
		{
			cout << vector2[i] << ' ';
		}

		cin >> input;
	}

	return 0;
}