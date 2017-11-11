//Brandon Cabael
//CSC 160
//Lesson 05, Page 614, PP 7

#include <iostream>

using namespace std;

class Rational {
	int num, denom;

public:
	Rational (int, int);
	Rational();



	Rational add(Rational other) {
		int newNum, newDenom;
		newNum = ((num * other.denomRet()) + (denom * other.numRet()));
		newDenom = denom * other.denomRet();
		Rational result(newNum, newDenom);
		return(result);
	}

	Rational sub(Rational other) {
		int newNum, newDenom;
		newNum = ((num * other.denomRet()) - (denom * other.numRet()));
		newDenom = denom * other.denomRet();
		Rational result(newNum, newDenom);
		return(result);
	}

	Rational mult(Rational other) {
		int newNum, newDenom;
		newNum = num * other.numRet();
		newDenom = denom * other.denomRet();
		Rational result(newNum, newDenom);
		return(result);
	}

	Rational div(Rational other) {
		int newNum, newDenom;
		newNum = num * other.denomRet();
		newDenom = denom * other.numRet();
		Rational result(newNum, newDenom);
		return(result);
	}

	bool less(Rational other) {
		if ((num * other.denomRet()) > (denom * other.numRet())) {
			return(true);
		}
		
		if ((num * other.denomRet()) < (denom * other.numRet())) {
			return(false);
		}
	}

	void reduce() {
		int lcm = gcd(num, denom);
		if (num % lcm == 0 && denom % lcm == 0) {
			num = num / lcm;
			denom = denom / lcm;
		}
	}

	int gcd(int a, int b) {
		return b == 0 ? a : gcd(b, a % b);
	}

	int numRet() {
		return(num);
	}

	int denomRet() {
		return(denom);
	}
};

Rational::Rational() {
	num = 1;
	denom = 1;
}

Rational::Rational(int a, int b) {
	num = a;
	denom = b;
}

int main() {
	int i1, i2, i3, i4;
	cout << "Please enter two non-zero integers: ";
	cin >> i1 >> i2;
	cout << endl << "Please enter a rational as X/Y: ";
	cin >> i3;
	cin.ignore(1);
	cin >> i4;

	Rational testOne(i1, i2);
	Rational testTwo(i3, i4);
	Rational testThree(i1, 1);

	cout << endl << "Test 1 is: " << testOne.numRet() << "/" << testOne.denomRet() << endl;
	cout << "Test 2 is: " << testTwo.numRet() << "/" << testTwo.denomRet() << endl;
	cout << "Using numerator of Test 1 only for Test 3: " << testThree.numRet() << "/"
		<< testThree.denomRet() << endl;

	Rational multResult = testOne.mult(testTwo);
	multResult.reduce();
	cout << "Test 1 * Test 2 = " << multResult.numRet() << "/" << multResult.denomRet() << endl;

	Rational divResult = testOne.div(testThree);
	divResult.reduce();
	cout << "Test 1 / Test 3 = " << divResult.numRet() << "/" << divResult.denomRet() << endl;

	Rational addResult = testTwo.add(testThree);
	addResult.reduce();
	cout << "Test 2 + Test 3 = " << addResult.numRet() << "/" << addResult.denomRet() << endl;

	Rational subResult = testThree.sub(testOne);
	subResult.reduce();
	cout << "Test 3 - Test 1 = " << subResult.numRet() << "/" << subResult.denomRet() << endl;

	bool lessResult1 = testOne.less(testTwo);
	bool lessResult2 = testTwo.less(testThree);
	bool lessResult3 = testThree.less(testOne);

	if (lessResult1) {
		cout << "Test 1 is greater than or equal to Test 2." << endl;
	}
	if (!lessResult1) {
		cout << "Test 1 is less than or equal to Test 2." << endl;
	}
	if (lessResult2) {
		cout << "Test 2 is greater than or equal to Test 3." << endl;
	}
	if (!lessResult2) {
		cout << "Test 2 is less than or equal to Test 3." << endl;
	}
	if (lessResult3) {
		cout << "Test 3 is greater than or equal to Test 1." << endl;
	}
	if (!lessResult3) {
		cout << "Test 3 is less than or equal to Test 1." << endl;
	}

	system("pause");
	return 0;
};