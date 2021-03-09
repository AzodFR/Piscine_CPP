#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &);
		Fixed(const int &);
		Fixed(const float &);
		~Fixed(void);
		Fixed &operator=(const Fixed&);
		int operator>(const Fixed&) const;
		int operator<(const Fixed&) const;
		int operator<=(const Fixed&) const;
		int operator>=(const Fixed&) const;
		int operator==(const Fixed&) const;
		int operator!=(const Fixed&) const;
		float operator+(const Fixed&) const;
		float operator-(const Fixed&) const;
		float operator*(const Fixed&) const;
		float operator/(const Fixed&) const;
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);
		const static Fixed &min(const Fixed &, const Fixed &);
		const static Fixed &max(const Fixed &, const Fixed &);
		int		getRawBits(void) const;
		void	setRawBits(int const);
		float	toFloat(void) const;
		int		toInt(void) const;
		static int min(Fixed &, Fixed &);
		static int max(Fixed &, Fixed &);
};

std::ostream &operator<<(std::ostream &, const Fixed&);

#endif