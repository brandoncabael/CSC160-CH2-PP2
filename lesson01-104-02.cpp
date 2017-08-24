#include<iostream>
using namespace std;
int main() {
    double n, r, guess, prevGuess;
    cout << "Please select a number to calculate it's square root: ";
    cin >> n;

    for(x, x <= 100, x++){
        guess = n/2;
        r = n / guess;
        guess = (guess + r) / 2;
    }

    cout << "The square root of " << n << "is " << guess << ".";
    return 0;
}