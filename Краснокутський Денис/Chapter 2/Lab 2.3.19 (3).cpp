#include <iostream>

using namespace std;

int main(void) {
    
    long n;
    
	cout << "Number of iterations: ";
	    cin >> n;
	
	long result = 2;
	
	for(int i = 0; i < n - 1; i++){
	    
		result *= 2;	
	}
	
	cout << result << endl;
	
	return 0;
}