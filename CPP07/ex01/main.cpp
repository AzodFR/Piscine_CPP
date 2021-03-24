#include <iostream>
#include "iter.hpp"


class Awesome
{

	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }

	private:
		int _n;
};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; };


template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

void prints(std::string s)
{
	for (int i = 0; s[i]; i++)
		std::cout << (char)std::towupper(s[i]);
	std::cout << std::endl;
}

void printen(int n)
{
	std::cout << n * 10 << std::endl;
}

int main(void)
{
	std::cout << "first: (print in upper)" << std::endl;
	std::string array[] = {"salut", "OuI", "78q4s5s5%"};
	::iter(array, 3, prints);

	std::cout << std::endl << "next: (print 1 - 10 but x10)" << std::endl;
	int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	::iter(array2, 10, printen);


	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	::iter( tab, 5, print<int>);
	::iter( tab2, 5, print<Awesome>);

	return 0;
}
