#include<iostream>
using namespace std;


int main() {
    double n, r, guess, prevGuess;
	int x = 0;
    cout << "Please select a number to calculate it's square root: ";
    cin >> n;

	guess = n / 2;

	for (x; x <= 100; x++) {
        r = n / guess;
        guess = (guess + r) / 2;
	};

    cout << "The square root of " << n << " is " << guess << ".";
	system("pause");
    return 0;
}