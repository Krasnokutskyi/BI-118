#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float firstNumber, secondNumber;
	float epsilon = 0.000001;

	cout << "Enter first number : ";
	cin >> firstNumber; cout << "\n";
	cout << "Enter second number : ";
	cin >> secondNumber; cout << "\n";

	if (abs(first / second - 1) <= epsilon)
	{
		cout << "Results are equal.";
	}
	else
	{
		cout << "Results are not equal.";
	}

	
	return 0;
}