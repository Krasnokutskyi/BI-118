#include <math.h>
#include <iostream> 
#include <iomanip> 
#include <string>

using namespace std;

int main(void)
{
    float pi = 3.14159265359;
    float x, y;
    
    cout << "Enter value for x: ";
    cin >> x;
    
    float x2_degree = pow(x, 2);
    float pi2_degree = pow(pi, 2);
    
    float DenominatorFirstPart = pi2_degree * (x2_degree + 0.5);
    float FirstPart = x2_degree / DenominatorFirstPart;
    
    float calculation = (x2_degree - 0.5);
    float DenominatorSecondPart = pi2_degree * pow(calculation, 2);
    float SecondPart = 1 + (x2_degree / DenominatorSecondPart);
    
    y = FirstPart * SecondPart;
    
    // put your code here
    cout << "y = " << y;
    
    return 0;
}