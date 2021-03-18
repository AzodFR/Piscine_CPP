#include <iostream>
#include "iter.hpp"

void print(std::string s)
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
	::iter(array, 3, print);

	std::cout << std::endl << "next: (print 1 - 10 but x10)" << std::endl;
	int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	::iter(array2, 10, printen);

	return 0;
}