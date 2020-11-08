#include <iostream>

using namespace std;

int main(void)
{
   float grossprice, taxrate, netprice, taxvalue;
   
   cout << "Enter a gross price: ";
   cin >> grossprice;
   
   cout << "Enter a tax rate: ";
   cin >> taxrate;
   
   
   if(taxrate < 0.0f || taxrate > 100.0f) {
     cout << "Taxrate should be within this range: [0; 100]";
     return -1;
   }
   
   if(grossprice < 0.0f) {
       cout << "Gross price should within this range: [0; ∞)";
       return -1;
   }
   
   netprice = grossprice / (1.0f + (taxrate / 100.0f));
   taxvalue = grossprice - netprice;
   
   // Insert you code here
   cout << "Net price: " << netprice << endl;
   cout << "Tax value: " << taxvalue << endl;
   
   return 0;
}