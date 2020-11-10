#include <iostream>

using namespace std;

int main(){
    
    int a;
    
    cout << "Numeric: ";
        cin >> a;
        
    if(!(a % 2) || (a <= 0)){
        
        cout << "Incorrect value!";
        
        return 1;
    }
    
    int result = a * a - a * 2 + 2;
    
    cout << result;
    
    return 0;
}