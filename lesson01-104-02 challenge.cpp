#include<iostream>
using namespace std;


int main() {
	double n, r, guess, prevGuess, diff;
	int x = 0;
	cout << "Please select a number to calculate it's square root: ";
	cin >> n;

	guess = n / 2;

	do {
		prevGuess = guess;
		r = n / guess;
		guess = (guess + r) / 2;
		x++;
	}while( prevGuess >= guess * 1.01 );

	cout << "The square root of " << n << " is " << guess << ".";
	cout << "There were " << x << " iterations ran, and the difference between\nlast guess and current guess was " << 1 - (guess / prevGuess) << "%.\n";
	system("pause");
	return 0;
}