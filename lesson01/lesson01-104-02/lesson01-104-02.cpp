//Brandon Cabael
//29-AUG-2017
//Lesson 01, Page 104, Question 2
//Program to process babylonian equation to calculate
//square root

//Include header files
#include<iostream>
//All programs will include cstdlib to compile and test
//in linux environment to use system("pause") for windows
//command line debugging for grading purposes.
#include<cstdlib>
using namespace std;


int main() {

    //declare variables
    double n, r, guess, prevGuess;
    int x = 0;
    
    //process user input
    cout << "Please select a number to calculate it's square root: ";
    cin >> n;

    //begin babylonian calculation
	guess = n / 2;

	for (x; x <= 100; x++) {
        r = n / guess;
        guess = (guess + r) / 2;
	};

    //process user output
    cout << "The square root of " << n << " is " << guess << ".";
	system("PAUSE");
    return 0;
}