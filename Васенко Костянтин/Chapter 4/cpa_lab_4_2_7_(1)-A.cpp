#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    
    if (n1 > n2)
    {
        cout << "First number is greater than second one.";
    }
    else if (n1 == n2)
    {
        cout << "Numbers are equal.";
    }
    else
    {
        cout << "Second number is greater than first one.";
    }
    
    
    return 0;
}