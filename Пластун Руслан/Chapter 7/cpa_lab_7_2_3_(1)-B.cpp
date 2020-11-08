#include <iostream>

using namespace std;

const int DivideByZero = 111;

float internaldiv(float arg1, float arg2)
{
	try
	{
		// ???? ???????? ?? ???????????, ?? ??? ?++ ?????????? ?? ????? ???????
		// ???? ???????????? ??????? ?? 0 ? ??????? (https://www.quora.com/Why-does-division-by-zero-return-INF-infinite-with-floats-but-makes-the-program-crash-with-integers-in-C++)
		if (arg2 <= 0.0001) throw string("Division by 0");

		const float res = arg1 / arg2;

		return res;
	}
	catch (string &msg)
	{
		throw string(msg);
	}
}

float div(float arg1, float arg2) {
	try
	{
		return internaldiv(arg1, arg2);
	}
	catch (string& msg)
	{
		throw string(msg);
	}
}

int main(void) {
	float r, a, b;

	while (cin >> a) {
		cin >> b;

		try
		{
			r = div(a, b);
		}
		catch (string& msg)
		{
			cout << "Are you kidding me?" << endl;
			cout << msg << endl;
			continue;
		}

		cout << r << endl;
	}
	return 0;
}
