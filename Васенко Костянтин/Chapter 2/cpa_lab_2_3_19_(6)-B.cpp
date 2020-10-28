#include<iostream>
using namespace std;

int main()
{
   int h, i, j, space;

   cout << "Enter number of rows: ";
   cin >> h;

   for(i = 1; i <= h; i++)
   {
       
      for (space = i; space < h; space++)
         cout << " ";

      for(j = 1; j <= (2 * h - 1); j++)
      {
         if(i == h || j == 1 || j == 2*i - 1)
            cout << "*";
         else
            cout << " ";
      }
      cout << "\n";
   }
   return 0;
}