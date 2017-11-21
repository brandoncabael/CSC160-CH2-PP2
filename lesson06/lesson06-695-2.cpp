//Brandon Cabael
//CSC-160
//lesson06-695-02.cpp

/*Create a class Rational that takes two values of type int,
and overload operators to perform defined functions */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Rational
{
private:
    int num;
    int denom;

public:
    //Constructors for different types of Rational Objects
    Rational();
    Rational(int wholeNumber);
    Rational(int num2, int denom2);

    //Operator overload friends
    friend ostream& operator<<(ostream& output, const Rational& rational);
    friend istream& operator>>(istream& input, Rational& rational);
    friend Rational operator+(const Rational& rational1, const Rational& rational2);
    friend Rational operator-(const Rational& rational1, const Rational& rational2);
    friend Rational operator/(const Rational& rational1, const Rational& rational2);
    friend Rational operator*(const Rational& rational1, const Rational& rational2);
    friend bool operator>(const Rational& rational1, const Rational& rational2);
    friend bool operator<(const Rational& rational1, const Rational& rational2);
    friend bool operator<=(const Rational& rational1, const Rational& rational2);
    friend bool operator>=(const Rational& rational1, const Rational& rational2);
    friend bool operator==(const Rational& rational1, const Rational& rational2);

    //Reduce function
    void reduce();

    //Accessor functions
    int getNum();
    int getDenom();
};

   //Test phase
int main()
{
    Rational test1, test2(10), test3(1, 2);


    // Display the three values to test cout
    cout << "\nTest1 equals " << test1;
    cout << "\nTest2 equals " << test2;
    cout << "\nTest3 equals " << test3;
    // Test our operators
    cout << "\nTest1 * Test2 equals " << test1*test2;
    cout << "\nTest1 / Test3 equals " << test1/test3;
    cout << "\nTest2 + Test3 equals " << test2+test3;
    cout << "\nTest3 - Test1 equals " << test3-test1;
    if (test1 == test2)
        cout << "\nTest1 is equal to Test2";
    if (test1 < test2)
        cout << "\nTest1 is less than Test2";
}

//Define constructors
Rational::Rational()
{
    num = 0;
    denom = 1;
}
Rational::Rational(int wholeNumber)
{
    num = wholeNumber;
    denom = 1;
}
Rational::Rational(int num2, int denom2)
{
    num = num2;
    denom = denom2;
    this -> reduce();
}

//Define operator overloads
ostream& operator <<(ostream& output, const Rational& rational)
{
    output << rational.num << "/" << rational.denom;
    return output;
}
istream& operator>>(istream& input, Rational& rational)
{
    char temp;
    input >> rational.num >> temp >> rational.denom;
    if (temp != '/')
    {
        cout << "The character " << temp << " is not acceptable. Please enter as 'A/B'.";
        exit(1);
    }
    rational.reduce();
    return input;
}
Rational operator+(const Rational& rational1, const Rational& rational2)
{
    int a = rational1.num;
    int b = rational1.denom;
    int c = rational2.num;
    int d = rational2.denom;
    Rational temp(a * d + b * c, b * d);
    temp.reduce();
    return temp;
}
Rational operator-(const Rational& rational1, const Rational& rational2)
{
    int a = rational1.num;
    int b = rational1.denom;
    int c = rational2.num;
    int d = rational2.denom;
    Rational temp(a * d - b * c, b * d);
    temp.reduce();
    return temp;
}
Rational operator/(const Rational& rational1, const Rational& rational2)
{
    int a = rational1.num;
    int b = rational1.denom;
    int c = rational2.num;
    int d = rational2.denom;
    Rational temp(a * d, b * c);
    temp.reduce();
    return temp;
}
Rational operator*(const Rational& rational1, const Rational& rational2)
{
    int a = rational1.num;
    int b = rational1.denom;
    int c = rational2.num;
    int d = rational2.denom;
    Rational temp(a * c, b * d);
    temp.reduce();
    return temp;
}
bool operator>(const Rational& rational1, const Rational& rational2)
{
    return rational1.num * rational2.denom > rational2.num * rational1.denom;
}
bool operator<(const Rational& rational1, const Rational& rational2)
{
    return rational1.num * rational2.denom < rational2.num * rational1.denom;
}
bool operator<=(const Rational& rational1, const Rational& rational2)
{
    return rational1.num * rational2.denom <= rational2.num * rational1.denom;
}
bool operator>=(const Rational& rational1, const Rational& rational2)
{
    return rational1.num * rational2.denom >= rational2.num * rational1.denom;
}
bool operator==(const Rational& rational1, const Rational& rational2)
{
    return rational1.num * rational2.denom == rational2.num * rational1.denom;
}

//Define reduce function
void Rational::reduce()
{
    int smaller, x;
    if (denom == 0)
    {
        cout << "Cannot divide by 0, denominator invalid.";
        exit(1);
    }
    if (num < denom) {
        smaller = num;
    }
    if (denom < num) {
        smaller = denom;
    }
    for (x = smaller; x >= 2; x--) {
        if (((num % x) == 0) && ((denom % x) == 0)) {
            num = (num / x);
            denom = (denom / x);
            if (num < denom) {
                x = num;
            }
            if (denom < num) {
                x = denom;
            }
        }
    }
}

//Define accessor functions
int Rational::getDenom()
{
    return denom;
}
int Rational::getNum()
{
    return num;
}
