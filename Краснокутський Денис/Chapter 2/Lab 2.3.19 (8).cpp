#include <iostream>

int main(){
    
    int n;
    
    std::cout << "Numeric: ";
        std::cin >> n;
        
    int a = 1;
    
    if (n == 0){
        
        a = 1;
        
    }else{
        
        for (int i = 1; i <= n; i++){
            
             a *= i;    
        }
    }
    
    std::cout << a;
}