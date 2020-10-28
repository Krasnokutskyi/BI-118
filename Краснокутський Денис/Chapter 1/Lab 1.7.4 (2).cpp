#include <math.h>
#include <iostream> 
#include <iomanip> 
#include <string>
#include <limits>

using namespace std;

int main(void)
{
    int x1, x2;
    
    float epsilon = 0.000001;
    
    std::cout << "First number: ";
        std::cin >> x1;
    std::cout << "Second number: ";
        std::cin >> x2;
        
    float calculation = (1 / float(x1)) - (1 / float(x2));
        
    if (calculation <= epsilon){
        
        std::cout << "Results are equal (by 0.000001 epsilon)";
        
    }else{
        
        std::cout << "Results are not equal (by 0.000001 epsilon)";
    }
    
    return 0;
}