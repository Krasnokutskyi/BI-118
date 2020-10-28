#include <iostream> 
#include <cstdio>
using namespace std; 
int main() { 	
    float firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber; 	
    cout << "Enter first number : "; 	
    cin >> firstNumber; cout << "\n"; 	
    cout << "Enter second number : "; 	
    cin >> secondNumber; cout << "\n"; 	
    cout << "Enter third number : "; 	
    cin >> thirdNumber; cout << "\n"; 	
    cout << "Enter fourth number : "; 	
    cin >> fourthNumber; cout << "\n"; 	
    cout << "Enter fifth number : "; 	
    cin >> fifthNumber; cout << "\n"; 	
    
    printf("%.1f\n%.2f\n%.6f\n%.2f\n%.0f\n", firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber); 		
return 0; }