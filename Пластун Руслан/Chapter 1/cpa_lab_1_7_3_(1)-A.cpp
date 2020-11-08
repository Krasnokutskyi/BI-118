#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
   float fl_1;
   float fl_2;
   float fl_3;
   float fl_4;
   float fl_5;

   cout << "Enter values: \n";

   cin >> fl_1;
   cin >> fl_2;
   cin >> fl_3;
   cin >> fl_4;
   cin >> fl_5;

   std::cout << std::fixed;

   std::cout << std::setprecision(1);
   cout << fl_1 << endl;
   std::cout << std::setprecision(2);
   cout << fl_2 << endl;
   std::cout << std::setprecision(6);
   cout << fl_3 << endl;
   std::cout << std::setprecision(2);
   cout << fl_4 << endl;
   std::cout << std::setprecision(0);
   cout << fl_5 << endl;
   
   return 0;
}