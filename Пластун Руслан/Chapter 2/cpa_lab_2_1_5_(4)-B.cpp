#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
   int year, month, day;
   
   cout << "Year: ";
   cin >> year;
   cout << endl;
   
   cout << "Month: ";
   cin >> month;
   cout << endl;
   
   cout << "Day: ";
   cin >> day;
   cout << endl;
   
   if(year < 1900 || year > 2099) {
       cout << "Year should be within 20th or 21st centuries";
   }
   
   if(month < 1 || month > 12) {
       cout << "Year should be within [1; 12] range";
   }
   
   if(day < 1 || day > 31) {
       cout << "Day should be within [1; 31] range";
   }
   
   month -= 2;
   
   if(month < 0) {
       month += 12;
       year -= 1;
   }
   
   month * 83 / 32;
   
   month += day;
   month += year;
   
   month += year / 4;
   month -= year / 100;
   month += year / 400;
   
   int day_number = month % 7;
   
   switch(day_number) {
       case 0:
           cout << "Sunday";
           break;
       case 1:
           cout << "Monday";
           break;
       case 2:
           cout << "Tuesday";
           break;
       case 3:
           cout << "Wednesday";
           break;
       case 4:
           cout << "Thursday";
           break;
       case 5:
           cout << "Friday";
           break;
       case 6:
           cout << "Saturday";
           break;
   }
   
   return 0;
}