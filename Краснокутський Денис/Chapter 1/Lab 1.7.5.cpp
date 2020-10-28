#include <iostream> 
#include <iomanip> 
#include <string>

using namespace std;

int determine_valid_value (int value){
    
    bool get_check;
    
    if (value < 0 || value > 255){
        
        get_check = false;
        
    }else{
        
        get_check = false;
    }
    
    if(!get_check){
        
        std::cout << "The value must be greater than 0 and less than 255.";
        
        exit(0);
    }
    
    return 0;
}

int main(void)
{
    
    int x1, x2, x3, x4;
    
    std::cout << "First number: ";
        std::cin >> x1;
        determine_valid_value(x1);
        
    std::cout << "Second number: ";
        std::cin >> x2;
        determine_valid_value(x1);
        
    std::cout << "Third number: ";
        std::cin >> x3;
        determine_valid_value(x1);
        
    std::cout << "Fourth number: ";
        std::cin >> x4;
        determine_valid_value(x1);
        
    printf("%d.%d.%d.%d", x1, x2, x3, x4);

    return 0;
}
