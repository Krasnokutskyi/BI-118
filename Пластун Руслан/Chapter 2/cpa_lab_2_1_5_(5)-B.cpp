#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int year;

    string month;
    int day;
    
    cout << "Year: ";
    cin >> year;
    cout << endl;

    int a = year % 19;
    int b = year % 4;
    int c = year % 7;

    int d = ((a * 19) + 24) % 30;

    int e = (2 * b + 4 * c + 6 * d + 5) % 7;
    
    if (d + e < 10)
    {
        month = "March";
        day = (d + e + 22);
    }
    else
    {
        month = "April";
        day = (d + e - 9);
    }

    cout << month << " " << day;

    cin.ignore();
    char exit = cin.get();

    return 0;
}




