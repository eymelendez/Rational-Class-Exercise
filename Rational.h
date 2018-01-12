// Rational.h

#pragma once

#include<iostream>
using namespace::std;

/*
Edwin Melendez Lopez #89139
Rational Class Exercise
CECS 2222 sec. 22
Prof. Claudia Talavera*/

/*9.6 (Rational CLass) Create a class called Rational for performing arithmetic with fractions.
Write a Program to test your class.
Use integer variables to represent the private data of the class -- the numerator and the denominator.
Provide a constructor that enables an object of this class to be initialized when it's declared.
The constructor should contain default values in case no initializers are provided and should
store the fraction in reduced form. For example, the fraction would be stored in the object as 1 in
the numerator and 2 in the denominator. Provide public member functions that perform each of the
following tasks.

a) Adding two Rational Numbers. The result should be stored in reduced form.
b) Subtracting two Rational numbers. The result should be stored in reduced form.
c) Multiplying two Rational numbers. The result should be stored in reduced form.
d) Dividing two Rational numbers. The result should be stored in reduced form.
e) Printing Rational numbers in the form a/b, where a is the numerator and b is
the denominator.
f) Printing Rational numbers in floating-point format.*/


class Rational 
{

public:

	// Constructor & Destructor
	Rational(int numerator = 0, int denominator = 1);
	Rational(const Rational &aRational); // Copy Constructor
	~Rational();

	// Setters
	void setNum(int a); 
	void setDem(int b);

	// Getters
	int getNum() const;
	int getDem() const;

	// Math
	void Add(Rational a1);
	void Subtract(Rational s1);
	void Multiply(Rational m1);
	void Divide(Rational d1);
	void GCD(Rational g1);			// Greatest Common Divider
	int Simplify(int a, int b);

	// Display
	void DisplayFract(Rational f1) const;
	void DisplayFloat(Rational f2) const;


private:

	int numerator;
	int denominator;

};