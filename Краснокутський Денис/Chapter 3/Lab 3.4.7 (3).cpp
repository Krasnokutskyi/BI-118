#include <iostream>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isLeap(int year) {
    
	if(year % 4!= 0 && year % 400 != 0){
	    
	    return false;
	    
	}else{
	    
	    return true;
	}
}

int monthLength(int year, int month) {
    
	int vector[12] {31,28,31,30,31,30,31,31,30,31,30,31};
	
		if (isLeap(year)){
		    
		    vector[1] = 29;
		}
			
		return vector[month - 1];
}

int dayOfYear(Date date) {
    
	int tol = 0;
	
	for(int i = 1; i < date.month; i++){
	  
		tol += monthLength(date.year, i);
	}
	return tol + date.day;
}

int main(void) {
    
	Date d;
	
	cout << "Enter year month day: ";
	    cin >> d.year >> d.month >> d.day;
	    
	cout << dayOfYear(d) << endl;
	
	return 0;
}