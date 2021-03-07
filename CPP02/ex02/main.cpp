#include <iostream>
#include "Fixed.hpp"
int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    Fixed c(a + b);
    Fixed d;
    Fixed e(c - b);

    d = c;
    std::cout << c << std::endl;
    if (a > c)
        std::cout << "Should not be printed ! " << std::endl;
    else
        std::cout << "Should be printed !"  << a << " < " << c << std::endl;

    if (c > a)
        std::cout << "Should be printed ! " <<  c << " > " << a <<std::endl;
    else
        std::cout << "Should not be printed !" << std::endl;

    if (d == c)
        std::cout << "Should be printed ! " << d << " == " << c << std::endl;
    else
        std::cout << "Should not be printed !" << std::endl;

    if (d != a)
        std::cout << "Should be printed ! " <<  d << " != " << a <<std::endl;
    else
        std::cout << "Should not be printed !" << std::endl;

    if (e < a)
        std::cout << "Should not be printed ! " << std::endl;
    else
        std::cout << "Should be printed !" <<  e << " == " << a << std::endl;
    return 0;
    }