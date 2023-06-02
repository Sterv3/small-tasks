#pragma once

#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>

class Complex
{
private:
	double real;
	double img;
public:
	Complex();
	Complex(double a, double b);
	Complex operator+(const Complex& a) const;
	Complex operator-(const Complex& a) const;
	Complex operator~() const;
	Complex operator*(const Complex& a) const;
	friend std::ostream& operator<<(std::ostream& os, const Complex& c);
	friend std::istream& operator>>(std::istream& os, Complex& c);
	friend Complex operator*(int n, const Complex& a);
};
#endif