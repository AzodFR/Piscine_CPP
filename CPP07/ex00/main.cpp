#include <iostream>
#include "whatever.hpp"


int main(void)
{
	int a = 42;
	int b = 21;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max: " << ::max(a, b) << std::endl;
	std::cout << "min: " << ::min(a, b) << std::endl;
	::swap(a, b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl << std::endl;

	Awesome c(12);
	Awesome d(28);
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "max: " << ::max<Awesome>(c, d) << std::endl;
	std::cout << "min: " << ::min<Awesome>(c, d) << std::endl;
	::swap<Awesome>(c, d);
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	return 0;
}