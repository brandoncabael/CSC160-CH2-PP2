//Brandon Cabael
//29-AUG-2017
//Lesson 01, Page 104, Question 2
//Program to process babylonian equation to calculate
//square root, challenge portion.

#include<iostream>
#include<cstdlib>
using namespace std;


int main() {
	//declare variables
	double n, r, guess, prevGuess, diff;
	int x = 0;
	
	//process user input
	cout << "Please select a number to calculate it's square root: ";
	cin >> n;
	//start babylonian equation
	guess = n / 2;

	do {
		prevGuess = guess;
		r = n / guess;
		guess = (guess + r) / 2;
		x++;
	}while( prevGuess >= guess * 1.01 );

	//process user output
	cout << "The square root of " << n << " is " << guess << ".";
	cout << "There were " << x << " iterations ran, and the difference between\nlast guess and current guess was " << 1 - (guess / prevGuess) << "%.\n";
	system("pause");
	return 0;
}