//Brandon Cabael
// 12-SEP-2017
//Lesson 04, page 245, question 03
//Calulate the value of a users stock to the nearest eighth of a dollar.
//Use 3 ints for whole dollar, and numerator and denominator

#include<iostream>
#include<cstdlib>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
    int number_of_shares, whole, num, denom;
    double share_value;
    char recalc;
    
    cout << "This program will calculate the value of the stock you own." << endl;
    cout << "You will need to know the number of shares, whole dollar amount," << endl;
    cout << "and numberator and denominator of the eighth of the value." << endl;

    do {

        cout << "Please enter the number of shares you own: ";
        cin >> number_of_shares;
        cout << "Please enter the whole dollar amount per share: ";
        cin >> whole;
        cout << "Please enter the numerator of the fraction: ";
        cin >> num;
        cout << "Please enter the denominator of the fraction: ";
        cin >> denom;

        share_value = (double)(whole + ((double)num / denom)) * number_of_shares;

        cout << "The value of " << number_of_shares << " shares of stock you own is $" << setprecision(2) << fixed << share_value << endl;

        cout << "Would you like to perform another calculation? (y/n) ";
        cin >> recalc;
        recalc = tolower(recalc);
    } while (recalc == 'y');
    system("pause");
    return 0;
}