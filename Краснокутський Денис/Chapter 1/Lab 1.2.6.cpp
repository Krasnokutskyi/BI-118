#include <iostream>

using namespace std;

int main()
{   
    // 1. add a greeting – let the program welcome you in a warm and pleasant way;
    cout << "Hello, my friend!";
    
    // 3. insert a line saying cout << endl; between two other couts and check the effects it has;
    cout << endl;
    
    // 2. duplicate (or triplicate) the greeting to welcome more than one person;
    cout << "Hello, my friend!";
    
    // 4. now try to insert a mysteriously-looking sequence of chars into any of the greeting: 
    // \n – there are exactly two characters: abackslash and lower-case n;
    cout << "\n Hello, \n world!";
    
    /*
        5. Try to remove any of the semicolons and look carefully at the compiler's response; 
        pay attention to where the compiler sees anerror – is this where the error really is?
        
        -> -> -> cout << "\n Hello, \n world!" 
        
        main.cpp: In function ‘int main()’:
        main.cpp:19:5: error: expected ‘;’ before ‘return’
        return 0;
        
        -> -> -> It is syntax error!
    */
    
    /*
        6. Change the name of the main function to any other lexically correct word (e.g. Main); 
        what happens now? Can you explain theresult?
        
         -> -> -> There will be an error, because program starts from the main function main();
    */
    
    /*
        7. Remove some of the quotes (opening and closing ones respectively); 
        does the compiler like that? What does it think of youractions?
        
        -> -> -> There will be an error, because compiler will start performing the next function;
    */

    return 0;
}
