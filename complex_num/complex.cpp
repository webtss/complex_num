#include<iostream>
#include "complex.h"

Complex::Complex(double real_, double img_)
{
	real = real_;
	img = img_;
}

Complex Complex::operator+(const Complex & obj)
{
	return Complex(real + obj.real, img + obj.img);
}

Complex Complex::operator-(const Complex & obj)
{
	return Complex(real - obj.real, img - obj.img);
}

Complex Complex::operator*(const Complex & obj)
{
	return Complex((real * obj.real) - (img * obj.img), (real * obj.img + img * obj.real));
}

std::ostream & operator<<(std::ostream & os, Complex c)
{
	os << "number: " << c.real << ", " << c.img << "i.\n";
	return os;
}

std::istream & operator >> (std::istream & is, Complex & obj)
{
	std::cout << "Enter a number\n" << "Real: ";
	is >> obj.real;
	std::cout << "Imaginary: ";
	is >> obj.img;
	return is;
}

Complex operator*(double x, const Complex & obj)
{
	return Complex(x * obj.real, x * obj.img);
}

Complex operator~(const Complex & obj)
{
	return Complex(obj.real, -obj.img);
}

Complex operator*(const Complex & obj, double x)
{
	return x * obj;
}
