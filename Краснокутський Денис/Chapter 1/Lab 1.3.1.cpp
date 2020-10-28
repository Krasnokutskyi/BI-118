#include <iostream> //we included iostream
#include <iomanip> //we included iomanip
#include <string> //we included string

using namespace std;

int main()
{   
    int minute = 60; // minute in seconds
    int hour = 60 * minute; // hour in seconds
    
    int three_hours = 3 * hour; // 3 hours in seconds (3*60*60)
    int three_minutes = 3 * minute; // This is a variable to hold the value of 3 minutes in seconds
    int five_minutes = 6 * minute; // This is a variable to hold the value of 6 minutes in seconds
    
    float pi = 3.141526; //This is the value of pi
    
    string result = 
                    "3 hours in seconds: " + to_string(three_hours) + 
                    "\n 3 minutes in second: " + to_string(three_minutes) + 
                    "\n 6 minutes in seconds: " + to_string(five_minutes);
    
    std::cout << "result: " << result << std::endl;
}
