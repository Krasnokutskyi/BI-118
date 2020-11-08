#include <iostream>

using namespace std;

int main(void)
{
    while (true) {

        int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };

        int n = sizeof(vector) / sizeof(vector[0]);

        int* cursor = vector;
        int smallest = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            smallest = *cursor < smallest ? *cursor : smallest;
            cursor += 1;
        }

        cout << "Smallest: " << smallest << endl;
        cin >> n;
    }
	return 0;
}