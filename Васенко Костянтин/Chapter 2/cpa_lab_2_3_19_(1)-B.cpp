#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int c0, count = 0;
    cout << "Enter any positive number:";
    cin >> c0;
    
    if (c0 > 0)
    {
        while (c0 > 1)
		{
			if (c0 % 2 == 0)
			{
				c0 /= 2;
			}
			else
			{
				c0 = 3 * c0 + 1;
			}
			cout << c0 << "\n";
			count++;
		}
		cout << "Amount of steps = " << count;
	}
	else
	{
		cout << "You entered 0 or negative number.";
	}

    
return 0;
    
}