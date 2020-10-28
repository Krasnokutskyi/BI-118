#include <math.h>
#include <iostream> 
#include <iomanip> 
#include <string>

using namespace std;

int main(void)
{
    bool answer;
    int value;
    
    cout << "Enter a value: ";
        cin >> value;
        
    answer = ((0 <= value) && ((value * 2) < 20 && (value - 2) > -2)) || (value == 111); // insert your expression here
    
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;
}