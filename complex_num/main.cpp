#include<iostream>
#include"complex.h"

int main() {
	Complex a(3.0, 4.0);
	Complex c;
	while (std::cin >> c) {
		std::cout << "a is " << a << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "~c: " << ~c << std::endl;
		std::cout << "a + c: " << a + c << std::endl;
		std::cout << "a - c: " << a - c << std::endl;
		std::cout << "a * c: " << a * c << std::endl;
		std::cout << "2 * c: " << 2 * c << std::endl;
		std::cout << "c * 2: " << c * 2 << std::endl;
		std::cout << "Enter next numbers or q to quit:\n";		
	}
	system("pause");
	return 0;
}