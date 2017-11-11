//Brandon Cabael
//CSC 160
//Lesson05, Page 611, PP 1

#include <iostream>

using namespace std;

class CDAccount {
	double interestRate, balance;
	int term;
public:
	double rate_fraction, interest, balanceTwo;
	CDAccount(double, double, int);
	double balanceRet() { return(balance); }
	double interestRateRet() { return(interestRate); }
	int termRet() { return(term); }
	double calculate() {
		rate_fraction = interestRate / 100.0;
		interest = balance * rate_fraction * (term / 12.0);
		balanceTwo = balance + interest;
		return(balanceTwo);
	}
};

CDAccount::CDAccount(double x, double y, int z) {
	balance = x;
	interestRate = y;
	term = z;
}

int main() {
	double twoBalance, twoInterestRate;
	int twoTerm;

	CDAccount accountOne(1000.0, 4.0, 8);
	cout << "CD Account balance: $" << accountOne.balanceRet() << endl;
	cout << "CD Account interest rate: " << accountOne.interestRateRet() << endl;
	cout << "CD Account balance at maturity is: $" << accountOne.calculate() << endl;
	cout << "CD Account term is: " << accountOne.termRet() << " months." << endl;
	cout << "When your CD Account matures in " << accountOne.termRet()
		<< " months, it will have a balance of $" << accountOne.calculate() << endl << endl;

	cout << "Enter the account balance: $";
	cin >> twoBalance;
	cout << "Enter the interest rate: ";
	cin >> twoInterestRate;
	cout << "Enter the number of months until maturity\n"
		<< "(Must be 12 or fewer months) ";
	cin >> twoTerm;
	CDAccount accountTwo(twoBalance, twoInterestRate, twoTerm);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << endl << "CD Account balance: $" << accountTwo.balanceRet() << endl;
	cout << "CD Account interest rate: " << accountTwo.interestRateRet() << endl;
	cout << "CD Account balance at maturity is: $" << accountTwo.calculate() << endl;
	cout << "CD Account term is: " << accountTwo.termRet() << " months." << endl;
	cout << "When your CD Account matures in " << accountTwo.termRet()
		<< " months, it will have a balance of $" << accountTwo.calculate() << endl;
	system("pause");
	return 0;
};