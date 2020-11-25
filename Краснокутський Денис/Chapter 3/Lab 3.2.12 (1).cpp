#include <iostream>

int main(void) {
    
    int vector[] = {3, -5, 7, 10, -4, 14, 5, 2, -13};
    int n = sizeof(vector) / sizeof(vector[0]);
    
    // Insert your code here
	int *min = vector;
	
	for(int i = 0; i < n; i++){
	    
		if(*min > *(min + i)){
		    
		    min += i;
		}
	}
	
	std::cout << *min;
	
	return 0;
}