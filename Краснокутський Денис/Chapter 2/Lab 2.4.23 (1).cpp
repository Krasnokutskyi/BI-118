#include <iostream>

using namespace std;

int main() {

    int count = 0;
    
    unsigned long long n;

    cout << "Numeric: ";
        cin >> n;

    while (n){
        
        count += n & 1;
        
        n>>=1;
    }

    cout << count;

    return 0;
}