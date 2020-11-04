#include <iostream>

using namespace std;

int main(void) {
    
    int sys;
    float m, ft, in;
    
    // Insert your code here
    cout << "What is the measurement system (metric = 0 and imperial = 1)?" << endl;
    	cin >> sys;
    	
    if (sys == 0){
         
		cin >> m; 
		
		ft = 3.28084 * m;
		
		in = (ft - ((int)ft)) * 12;
		
		ft = (int)ft;
		
		cout << ft << "'" << in << "\"";
		
    }
    
    else if (sys == 1){
        
        cin >> ft;
        
        cin >> in;
        
        m = ft * 0.3048+0.0254 * in;
        
		cout << m <<"m";
    }
    
    else{
        
        cout << "Error!";
        
        exit(0);
    }
    
    return 0;
}