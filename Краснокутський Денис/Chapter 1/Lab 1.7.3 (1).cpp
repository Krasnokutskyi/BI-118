#include <math.h>
#include <iostream> 
#include <iomanip> 
#include <string>

using namespace std;

int main(void)
{
    float x1, x2, x3, x4, x5;

    std::cout << "First number: ";
        std::cin >> x1;
        
    std::cout << "Second number: ";
        std::cin >> x2;
        
    std::cout << "Third number: ";
        std::cin >> x3;
        
    std::cout << "Fourth number: ";
        std::cin >> x4;
        
    std::cout << "Fifth number: ";
        std::cin >> x5;
        
    std::cout << x1 << std::endl;
    std::cout << x2 * 10 << std::endl;
    std::cout << x3 << std::endl;
    std::cout << std::setprecision(2) << x4 << std::endl;
    std::cout << (int)x5 << std::endl;
    
    return 0;
}