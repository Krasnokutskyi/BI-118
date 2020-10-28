#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{

	int numb;
	cout << "Enter a number: ";
	cin >> numb;
	if (numb == 0 || numb == 1)
	{
		cout << 1;
	}
	else if (numb >= 2)
	{
		long long fact = 1;
		for (int i = 2; i <= numb; i++)
		{
			fact *= i;
		}
		cout << fact;
	}
	else
	{
		cout << "You entered not positive number";
	}

	
	return 0;
}