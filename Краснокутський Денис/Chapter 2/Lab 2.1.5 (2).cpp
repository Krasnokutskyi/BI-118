#include <iostream>

using namespace std;

int main(){
    
    float grossprice, taxrate, netprice, taxvalue;
    
    cout << "Enter a gross price: ";
    cin >> grossprice;
    cout << "Enter a tax rate: ";
    cin >> taxrate;
    
    if(grossprice <= 0 || taxrate < 0 || taxrate > 100){
        
        cout << "Invalid input!";
        
        exit(0);
    }
    
    // Insert you code here
    netprice = grossprice / (1 + taxrate / 100);
    taxvalue = grossprice - netprice;

    cout << "Net price: " << netprice << endl;
    cout << "Tax value: " << taxvalue << endl;
    
    return 0;
}
