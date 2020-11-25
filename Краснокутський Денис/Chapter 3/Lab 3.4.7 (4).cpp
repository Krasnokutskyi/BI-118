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

int daysBetween(Date d1, Date d2) {
    
	int dd1 = 0, dd2;
	
	if(d2.year<d1.year){
	    
	    return -1;
	}
		
		
	for(int i = d1.year; i < d2.year; i++){
	    
		if(isLeap(i)){
		    
		    dd1 += 366;
		    
		}else{
		    
		    dd1 += 365;
		}
	}
	
	dd1 += dayOfYear(d2) - dayOfYear(d1);
	
	if(dd1<0){
	    
	    return -1;
	}
		
	return dd1;
}

int main(void) {
    
    Date since;
    Date till_date;
    
        cout << "Enter year month day since: ";
            cin >> since.year >> since.month >> since.day;
            
        cout << "Enter year month day till: ";
            cin >> till_date.year >> till_date.month >> till_date.day;
            
        cout << daysBetween(since, till_date) << std::endl;
        
    return 0;
}