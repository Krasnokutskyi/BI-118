#include <iostream>

using namespace std;

int main(){
    
    int year;
    
    std::cout << "Enter required year: ";
    std::cin >> year;

    if (year % 4 != 0){
        
        cout<<"Common year";
    }
    
    else if (year % 100 != 0){
        
        cout<<"Leap year";
    }

    else if (year % 400 != 0){
        
        cout<<"Common year";
    }
    
    else{
        
        cout<<"Leap year";
    }

    return 0;
}
