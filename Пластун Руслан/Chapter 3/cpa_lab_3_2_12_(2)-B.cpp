#include <iostream>

using namespace std;

int main(void)
{

	while (true)
	{
		int test = 0;
		int matrix[10][10] = { };

		// ---


		int* row_pointer = &matrix[0][0];
		for (int i = 0; i < 10; i++)
		{

			for (int j = 0; j < 10; j++)
			{
				*row_pointer = (i+1) * (j+1);
				row_pointer += 1;
			}
		}

		cout << "---" << endl;

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout.width(4);
				cout << matrix[i][j];
			}
			cout << endl;
		}

		cin >> test;
	}
	return 0;
}