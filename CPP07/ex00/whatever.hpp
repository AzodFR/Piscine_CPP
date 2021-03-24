#ifndef WHATEVER_HPP
#define WHATEVER_HPP

class Awesome
{

	public:
		Awesome( int n ) : _n( n ) {};
		int get_n(void) {return _n;};
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

	private:
		int _n;
};

std::ostream &operator<<(std::ostream &output, Awesome s)
{
	output << s.get_n();
	return (output);
}

template< typename T >
T max(T  &x, T  &y)
{
	return (x > y ? x : y);
}

template< typename T >
T min(T  &x, T  &y)
{
	return (x < y ? x : y);
}

template< typename T >
void swap(T &x, T &y)
{
	T swap(0);
	swap = x;
	x = y;
	y = swap;
}

#endif