#include <iostream>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <vector>

using namespace std;

int main(void) {

	while (true)
	{
		int* chars = new int[91]();

		char c;
		vector<char> sentence;
		while (cin.get(c) && c != '\n')
			sentence.push_back(c);

		for (char& c : sentence) {
			char C = toupper(c);

			if (isalpha(C)) {
				chars[C] = chars[C] + 1;
			}
		}

		for (int i = 65; i <= 90; i++)
		{
			cout << i << " " << char(i) << " - " << chars[i] << endl;
		}


	}

}