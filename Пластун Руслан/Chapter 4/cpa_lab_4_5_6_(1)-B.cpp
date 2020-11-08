#include <string>
#include <iostream>
int main()
{
	while (true)
	{
		std::string sentence;
		std::getline(std::cin, sentence);

		char prev = '\0';
		for (int i = 0; i < sentence.length(); i++)
		{
			if (prev == ' ' && prev == sentence[i]) {
				sentence.erase(i, 1);
				i--;
			}
			prev = sentence[i];
		}

		std::cout << sentence << "\n";
	}
}