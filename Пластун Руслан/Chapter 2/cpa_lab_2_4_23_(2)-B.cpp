#include <iostream>
#include <string.h>

using namespace std;

void to_binary(int n)
{
	int a[16] = { 0,0,0,
		0,0,0,
		0,0,0,
		0,0,0,
		0,0,0,
		0 };

	int i;

	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}

	for (int i = 0; i < 32; i++)
	{
		if (a[i] == 0 || a[i] == 1) {
			cout << a[i];
		}
	}

	cout << endl;
}

unsigned int reverse(unsigned int x, int bits) {
	x = ((x & 0x55555555) << 1) | ((x & 0xAAAAAAAA) >> 1); // Swap _<>_
	x = ((x & 0x33333333) << 2) | ((x & 0xCCCCCCCC) >> 2); // Swap __<>__
	x = ((x & 0x0F0F0F0F) << 4) | ((x & 0xF0F0F0F0) >> 4); // Swap ____<>____
	x = ((x & 0x00FF00FF) << 8) | ((x & 0xFF00FF00) >> 8); // Swap ...
	x = ((x & 0x0000FFFF) << 16) | ((x & 0xFFFF0000) >> 16); // Swap ...
	return x >> (32 - bits);
}

int main(void)
{
	unsigned short number = 0;
	bool is_palindrome = true;

	cout << "Value: ";
	cin >> number;

	to_binary(number);
	to_binary(reverse(number, 16));

	char bits[16];
	memset(bits, 0, sizeof(bits));

	for (char i = 0; i < 16; i++)
	{
		unsigned short bit = number & 1;
		number >>= 1;
		bits[i] = bit;
	}

	for (char i = 0; i < 16; i++)
	{
		if (bits[i] != bits[16 - 1 - i]) {
			is_palindrome = false;
		}
	}

	if (is_palindrome) {
		cout << "The number is palindrome" << endl;
	}
	else {
		cout << "The number is not palindrome" << endl;
	}

	cin.clear();
	cin >> number;

	return 0;
}
