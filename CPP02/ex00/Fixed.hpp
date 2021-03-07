#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed &operator=(const Fixed&);
		int getRawBits(void) const;
		void setRawBits(int const);
};

#endif