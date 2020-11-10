#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int sum;
    string result;
    
    cout << "Numeric: ";
        cin >> sum;
        
    while (sum != 0){
        
			if (sum >= 50){
			    
				sum -= 50;
				result += " 50";
			}
			
			else if (sum >= 20){
			    
				sum -= 20;
				result += " 20";
			}
			
			else if (sum >= 10){
			    
				sum -= 10;
				result += " 10";
			}
			
			else if (sum >= 5){
			    
				sum -= 5;
				result += " 5";
			}
			
			else{
			    
				sum -= 1;
				result += " 1";
			}
        
    }

    cout << result;

    return 0;
}