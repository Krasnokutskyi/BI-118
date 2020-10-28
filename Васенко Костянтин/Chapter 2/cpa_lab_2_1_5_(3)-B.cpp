#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int sys;
	float m, ft, in;
	
	cout << "Please enter number to choose your system: \n 0 - Metric system \n 1 - Imperial system \n";
	cin >> sys;
	if (sys == 0){
		cout << "Enter meters : ";
		cin >> m;
        	ft = m * 3.28084;
		in = (ft - floor(ft)) * 12;
		cout << floor(ft) << "`" << in << "``";
	}
	else if (sys == 1){
		cout << "Enter feet : ";
		cin >> ft; 
		cout << "Enter inches : ";
		cin >> in;
		m = in / 39.370078 + ft / 3.28084;
		cout << m << "m";
	}
	else{
	    cout << "We don't support your system. Please try again!";
	}

	return 0;
}