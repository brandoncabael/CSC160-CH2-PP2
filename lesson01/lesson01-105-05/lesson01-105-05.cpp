//Brandon Cabael
//29-AUG-2017
//Lesson 01, Page 105, Question 05
//Clean up the structure of a program
//by providing style recommended in 2.5

//Include header and use namespace std
#include <iostream> 
using namespace std; 

int main() { 

    //declare variables
    double radius, volume; 
    
    //begin user input
    cout << "Enter radius of a sphere." << endl; 
    cin >> radius; 

    //calculate volume
    volume = (4.0 / 3.0) * 3.1415 * radius * radius * radius;
    
    //begin variable output
    cout << "The volume is " << volume << endl; 
    return 0; 
}