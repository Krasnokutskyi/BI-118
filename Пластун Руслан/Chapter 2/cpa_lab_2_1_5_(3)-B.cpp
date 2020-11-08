#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
   int sys;
   float m, ft, in;
   
   cout << "What system of measurement do you use\n 0 - for metric\n 1 - for imperial\n: ";
   cin >> sys;
   
   if(sys == 0) {
       cout << "Enter meters: ";
       cin >> m;
       
       ft = m * 3.281f;
       in = (ft - floor(ft)) * 12.0f;
       ft = floor(ft);
       
       cout << ft << "\'" << in << "\"";
   } else if(sys == 1) {
       cout << "Enter feet: ";
       cin >> ft;
       
       cout << "Enter inches: ";
       cin >> in;
       
       m = (ft / 3.281f) + (in / 39.37f);
       
       cout << m << 'm';
   } else {
       cout << "Enter 0 or 1!";
       return -1;
   }
   
   return 0;
}
