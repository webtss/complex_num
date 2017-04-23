#pragma once
#include<iostream>
class Complex {
public:
	Complex(double real_ = 0.0, double img_ = 0.0);
	Complex operator+(const Complex &);
	Complex operator-(const Complex &);
	Complex operator*(const Complex &);
	friend std::ostream & operator<<(std::ostream &, Complex);
	friend std::istream & operator>>(std::istream &, Complex &);
	friend Complex operator*(double, const Complex &);
	friend Complex operator~(const Complex &);
private:
	double real;
	double img;
};