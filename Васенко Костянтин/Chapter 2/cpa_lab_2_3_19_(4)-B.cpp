#include <iostream>
using namespace std;

int main(void) {
    
 int n;
 double result, number = 2.; 
 cout << "Value of negative power? \n";
 cin >> n;
 n = n * (-1);
 
 for (int i = 1; i < n; i++)
	{
    number += number;
	}
	
 cout.precision(20);
 result = (1 / number);
 cout << result;
 
 return 0; 
    
}