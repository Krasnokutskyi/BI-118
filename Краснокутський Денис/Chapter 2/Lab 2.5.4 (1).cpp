#include <iostream>

using namespace std;

int main() {
    
    int operation;
    double a,b;
    

        cout << "MENU: \n 0 - exit \n 1 - addition \n 2 - subtraction \n 3 - multiplication \n 4 - division \n Your choice? " << endl;
        cin >> operation;

        cout<<"Write a: ";
            cin >> a;
        cout<<"Write b: ";
            cin >> b;
            
        switch (operation) {
            case 0:
            
                return 0;
                
                break;
            case 1:
            
                cout << a << "+" << b << " = " << a + b;
                
                break;
            case 2:
            
                cout << a << "-" << b << " = " << a - b;
                
                break;
            case 3:
            
                cout << a << "*" << b << " = " << a * b;
                
                break;
            case 4:
            
                cout << a << "/" << b << " = " << a / b;
                
                break;
        }


    return 0;
}