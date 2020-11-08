#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
   int int_1;
   int int_2;
   float EPSILON = 0.000001;

   cout << "Enter values: \n";

   cin >> int_1;
   cin >> int_2;

   float fl_1 = 1 / (float)int_1;
   float fl_2 = 1 / (float)int_2;
   
   if(fabs(fl_1 - fl_2) < EPSILON)
   {
      cout << "Results are equal (by 0.000001 epsilon)\n";
   }
   else
   {
      cout << "Results are not equal (by 0.000001 epsilon)\n";
   }
   
   cout << fl_1 << endl;
   cout << fl_2 << endl;
   
   return 0;
}