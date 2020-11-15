#include <iostream>

using namespace std;

int main()
{
    int n, i;
    long result = 0;
    cout << "Enter number: ";
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        result += i;
    }
    
    cout << result;
    
	return 0;
}