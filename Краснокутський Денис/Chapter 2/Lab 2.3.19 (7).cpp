#include <iostream>

using namespace std;

int main(){
    
   int n, one, two, save;
   
   one = two = 1;

   cout << "Numeric: ";
        cin >> n;
   
    for (int i = 0; i < n - 2; i++){
        
        save = two;
        
        two = one + two;
        
        one = save;
    }
   
   cout << two;

   return 0;
}