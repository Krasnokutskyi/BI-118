#include <iostream>
using namespace std;

int main(){
    
    int year, a, b, c, d, e, value;
    cout << "Enter a year:";
    cin >> year;
    
if (year >= 1901 && year <= 2100)
{
    a = year % 19;
    b = year % 4;
    c = year % 7;
    d = ((a * 19) + 24) % 30;
    e = ((2 * b) + (4 * c) + (6 * d) + 5) % 7 ;
    value = d + e;
    
    if (value < 10)
    {
        cout << "Easter falls on the " << value + 22 << " day of March";
    }
    else
    {
        cout << "Easter falls on the " << value - 9 << " day of April";
    }
}
else
{
	cout << "You entered an invalid data";
}

return 0;
    
}