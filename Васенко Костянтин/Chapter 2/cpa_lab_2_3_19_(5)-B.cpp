#include <iostream>
using namespace std;
int main(void) {

 int n;
 cout << "Enter length for square: \n";
 cin >> n;

if (n > 0 && n < 100)
{
 cout << '+';
 for(int i = 0; i < n; i++)
  cout << '-';
 cout << '+' << endl;
 for(int i = 0; i < n; i++) {
  cout << '|';
  for(int j = 0; j < n; j++)
   cout << ' ';
  cout << '|' << endl;
 }
 cout << '+';
 for(int i = 0; i < n; i++)
  cout << '-';
 cout << '+' << endl;
}
else
{
    cout << "Sorry, the side size is either too big or too small. Please, try again.";
}

 return 0; 
    
}