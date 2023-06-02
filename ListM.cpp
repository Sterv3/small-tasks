#include "List.h"
#include <iostream>


Complex::Complex() {
	real = img = 0;
}

Complex::Complex(double a, double b) {
	real = a;
	img = b;
}


Complex Complex::operator+(const Complex& a) const {
	return Complex(real + a.real, img + a.img);
}

Complex Complex::operator-(const Complex& a) const {
	return Complex(real - a.real, img - a.img);
}

Complex Complex::operator~() const {
	return Complex(real, -img);
}

Complex Complex::operator*(const Complex& a) const {
	return Complex(real * a.real - img * a.img, real * a.img + img * a.real);
}

Complex operator*(int n, const Complex& a) {
	return Complex(n * a.real, n * a.img);
}

std::ostream& operator<<(std::ostream& os, const Complex& c) {
	os << "(" << c.real << ", " << c.img << "i)";
	return os;
}

std::istream& operator>>(std::istream& os, Complex& c) {
	os >> c.real;
	os >> c.img;
	return os;
}
