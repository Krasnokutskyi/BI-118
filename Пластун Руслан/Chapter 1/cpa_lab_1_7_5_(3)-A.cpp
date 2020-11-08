#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
   int digits_0;
   int digits_1;
   int digits_2;
   int digits_3;

   cout << "Enter IP values: \n";

   cin >> digits_0;
   cin >> digits_1;
   cin >> digits_2;
   cin >> digits_3;
   
   cout << digits_0 << '.' << digits_1 << '.' << digits_2 << '.' << digits_3;
   
   return 0;
}