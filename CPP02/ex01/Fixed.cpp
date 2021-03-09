#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed&object)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed::Fixed(const int &i)
{
	this->value = i << this->bits;
}

Fixed::Fixed(const float &f)
{
	this->value = roundf((f * this->bits * 32));
}

Fixed &Fixed::operator=(const Fixed &object)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = object.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &output, const Fixed& f)
{
	output << f.toFloat();
	return (output);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(32 * this->bits));
}

int Fixed::toInt(void) const
{
	return (this->value >> this->bits);
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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}