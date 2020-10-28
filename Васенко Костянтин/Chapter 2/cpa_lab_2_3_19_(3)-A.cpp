#include <iostream>
using namespace std;

int main(void) {
    
 int n, number = 2;
 cout << "Value of power? \n";
 cin >> n;

 for (int i = 1; i < n; i++)
	{
number += number;
	}
 
 cout << number;
 
 return 0; 
    
}