#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main(void){
    
    int maxball;
    int ballsno;
    
    cout << "Max ball number? ";
        cin >> maxball;
    cout << "How many balls? ";
        cin >> ballsno; 
        
    srand(time(NULL));
    
    int array[ballsno];
    
    for (int i = 0; i <= ballsno; i++){
        
        int rnd = rand() % maxball + 1;
        
        array[i] = rnd;
        
    }
    
    for (int a = 0; a < ballsno; a++ ) {
        
        cout << to_string(array[a]);
        
        if(a == ballsno - 1){
            
            break;
        }
        
        cout << + ", ";
    };
    
    return 0;
}