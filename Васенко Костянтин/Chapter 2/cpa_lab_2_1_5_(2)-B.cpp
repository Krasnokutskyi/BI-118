#include <iostream>
#include <cstdio>
using namespace std;
int main(void) {
 float grossprice, taxrate, netprice, taxvalue;
 
 cout << "Enter a gross price: ";
 cin >> grossprice;
 cout << "Enter a tax rate: ";
 cin >> taxrate;
    
    if (grossprice > 0)
    {
        if (taxrate >= 100)
		{
			printf("Stay optimistic and don't put taxrate greater or equal 100.");
		}
	    else
		{
		    taxrate /= 100;
		    netprice = grossprice / (1 + taxrate);
		    taxvalue = grossprice - netprice;
		    
        cout << "Net price: " << netprice << endl;
	    cout << "Tax value: " << taxvalue << endl;
        }    
    }
    else
    {
        printf("Please put the reasonable price!");
}
	
	

 return 0; }