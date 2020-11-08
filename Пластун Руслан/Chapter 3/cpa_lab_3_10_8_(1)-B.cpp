#include <iostream>
#include <cstdlib>
#include <ctime>

#include <algorithm>
#include <iterator>

using namespace std;

bool isElemPresent(int* arr, int elem, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == elem) return true;
	}

	return false;
}

int main(void)
{
	while (true)
	{
		int maxball;
		int ballsno;

		cout << "Max ball number? ";
		cin >> maxball;

		cout << "How many balls? ";
		cin >> ballsno;

		if (maxball < ballsno) {
			cout << "Number of balls to draw cannot be bigger than the amount of balls";
			continue;
		}

		srand(time(NULL));

		int* drawed_balls = new int[maxball];
		int drawed_balls_count = 0;

		while (drawed_balls_count != ballsno) {
			int rnd = rand() % maxball + 1;
			if (!isElemPresent(drawed_balls, rnd, maxball)) {
				drawed_balls_count++;
				drawed_balls[drawed_balls_count - 1] = rnd;

				cout << "Ball #" << rnd << " is drawn" << endl;
			}
		}

		delete[] drawed_balls;

		int test;
		cin >> test;
	}

	return 0;
}