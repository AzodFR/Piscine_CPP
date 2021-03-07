#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed &Fixed::operator=(const Fixed &object)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = object.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed&object)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}