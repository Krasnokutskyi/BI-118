#include<iostream>
using namespace std;

int main(){
    
   int h;

   cout << "Numeric: ";
    cin >> h;
   
   for (int i = 1; i <= h; i++){
       
       for (int indents = i; indents <= h; indents++){
           
           cout << " ";
       }
       
       for (int k = 1; k <= (2 * h - 1); k++){
           
            if(i == h || k == 1 || k == 2 * i - 1){
                
                cout << "*";
                
            }else{
                
                cout << " ";
            }
       }
       
       cout << "\n";
   }

   return 0;
}