#ifndef RATIONAL_H
#define RATIONAL_H

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

#endif