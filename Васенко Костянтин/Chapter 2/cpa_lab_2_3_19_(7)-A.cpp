#include <iostream>
using namespace std;

int main()
{
    
   int n;
   long current = 0, pre, prepre;
   cout << "Enter number of iterations:";
   cin >> n;

	if (n == 1 || n == 2)
	{
		cout << "1";
	}
	else if (n >= 3)
	{
		prepre = 1; pre = 1;
		for (int i = 2; i < n; i++)
		{
			current = pre + prepre;
			prepre = pre;
			pre = current;
		}
		cout << current;
	}
	else
	{
		cout << "You entered not positive number";
	}


   return 0;
}