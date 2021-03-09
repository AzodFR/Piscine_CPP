#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::Fixed(const Fixed&object)
{
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
	this->value = object.getRawBits();
	return (*this);
}

int Fixed::operator>(const Fixed& other) const
{
	return (this->toFloat() > other.toFloat());
}
int Fixed::operator<(const Fixed& other) const
{
	return (this->toFloat() < other.toFloat());
}
int Fixed::operator<=(const Fixed& other) const
{
	return (this->toFloat() <= other.toFloat());
}
int Fixed::operator>=(const Fixed& other) const
{
	return (this->toFloat() >= other.toFloat());
}
int Fixed::operator==(const Fixed& other) const
{
	return (this->toFloat() == other.toFloat());
}
int Fixed::operator!=(const Fixed& other) const
{
	return (this->toFloat() != other.toFloat());
}

float Fixed::operator+(const Fixed& other) const
{
	return (this->toFloat() + other.toFloat());
}

float Fixed::operator-(const Fixed& other) const
{
	return (this->toFloat() - other.toFloat());
}

float Fixed::operator*(const Fixed& other) const
{
	return (this->toFloat() * other.toFloat());
}

float Fixed::operator/(const Fixed& other) const
{
	return (this->toFloat() / other.toFloat());
}

Fixed &Fixed::operator++(void)
{
	this->value = this->value + 1;
	return (*this);
}
Fixed  Fixed::operator ++ (int)
{
	Fixed temp = *this;
	++*this;
	return (temp);
}
Fixed  &Fixed::operator--(void)
{
	this->value = this->value - 1;
	return (*this);
}
Fixed  Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return (temp);
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
	return (this->value);
}
void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

const Fixed &Fixed::min(const Fixed &a,const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a,const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

int Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a.toInt());
	return (b.toInt());
}

int Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a.toInt());
	return (b.toInt());
}

Fixed::~Fixed(void)
{
	return ;
}