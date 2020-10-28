#include <iostream>
using namespace std;
int main(void) {
 float pi = 3.14159265359;
 float x,y;
 cout << "Enter value for x: ";
 cin >> x;
 
 float sqrx = x * x;
 float sqrpi = pi * pi;

 y = (sqrx / (sqrpi * (sqrx + (1 / 2)))) * (1 + (sqrx / (sqrpi * ((sqrx - (1 / 2)) * (sqrx - (1 / 2))))));
 
 cout << "y = " << y;
 return 0; }