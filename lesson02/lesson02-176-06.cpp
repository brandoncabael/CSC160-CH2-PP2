//Brandon Cabael
//05-SEP-2017
//Lesson 02, Page 176, Question 06
//Use fibonacci sequence to calculate crud propulation
//have user input all information

//include header files
#include<iostream>
#include<cstdlib>
#include<cmath>

//use namespace std
using namespace std;

int main() {

    //being user information
    cout << "This program will take your crud population, and figure out" << endl;
    cout << "what the population is every 5 days." << endl;
    

    //initialize repeat varible
    char calculate_again;
    
    //use do while loop to make recalculations possible
    do {

        //initialize varibles
        double number_of_days, starting_crud, v1, v2, ending_value;

        //begin user input
        cout << "Please enter the number of days to calculate the size of your crud population: ";
        cin >> number_of_days;
        cout << "Please enter the starting weight of your crud: ";
        cin >> starting_crud;
        
        //being output for first 2 known day intervals
        cout << "Your crud population is at " << starting_crud << " lbs on day 0." << endl;
        cout << "Your crud population will be at " << starting_crud << " on day 5." << endl;
        
        //set value placeholders to initial crud weight
        v1 = starting_crud;
        v2 = starting_crud;

        //use for loop to calculate crud weights
        for (int x = 10; x <= number_of_days; x += 5) {
            ending_value = v1 + v2;
            cout << "Your crud population will be at " << ending_value << " on day " << x << "." << endl;
            v1 = v2;
            v2 = ending_value;
        }

        //prompt user for recalculation
        cout << "Would you like to calculate again using a different data set? (y/n) ";
        cin >> calculate_again;
        calculate_again = tolower(calculate_again);
     } while (calculate_again == 'y');
     system("pause");
     return 0;
}