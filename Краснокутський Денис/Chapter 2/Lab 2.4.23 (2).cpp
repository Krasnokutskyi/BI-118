#include <iostream>

using namespace std;

int main() {
    
    unsigned short int val;
    bool ispalindrome = false;
    
    cout << "value = ";
        cin >> val;
    
    
    // Insert your code here
    int reversed = 0, a = val;
    while (a) {

        reversed = (reversed  << 1) | (a & 1);

        a = a >> 1;
    }

    ispalindrome = (reversed  == val) ? true : false;

    if(ispalindrome)
        cout << val << " is a bitwise palindrome" << endl;
    else
        cout << val << " is not a bitwise palindrome" << endl;
        
    return 0;
}