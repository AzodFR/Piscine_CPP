#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Array.hpp"
int main ()
{
	{ // Create empty array
		Array<int> a;
		std::cout << "size of a: ";
		std::cout << a.size() << std::endl << std::endl;
	}


	{ // Mutiple array with size

		//Create array of 10 int
		Array<int> b(10);
		std::cout << "size of b: ";
		std::cout << b.size() << std::endl;
		try
		{
			for(int i = 0; i <= b.size(); i++)
				std::cout << "b[" << i << "]: " << b[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		//Copy b into c (will create array of 10 int)
		Array<int> c = b;
		std::cout << std::endl << "size of c (copy of b): ";
		std::cout << c.size() << std::endl;
		try
		{
			for(int i = 0; i <= c.size(); i++)
				std::cout << "c[" << i << "]: " << c[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		//Edit the c's array 
		c[0] = 1;
		for (int i = 1; i < c.size(); i++)
			c[i] = c[i - 1] * 2;
		std::cout << std::endl << "size of c (edited): ";
		std::cout << c.size() << std::endl;
		try
		{
			for(int i = 0; i <= c.size(); i++)
				std::cout << "c[" << i << "]: " << c[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		//Check that b's array is not edited
		std::cout << std::endl << "size of b: ";
		std::cout << b.size() << std::endl;
		try
		{
			for(int i = 0; i <= b.size(); i++)
				std::cout << "b[" << i << "]: " << b[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		Array<int> d(c);
		std::cout << std::endl << "size of d (copy of c): ";
		std::cout << d.size() << std::endl;
		try
		{
			for(int i = 0; i <= d.size(); i++)
				std::cout << "d[" << i << "]: " << d[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{//Try other type of elements
		Array<char *> a;
		std::cout << "size of a: ";
		std::cout << a.size() << std::endl << std::endl;

		Array<float> b(10);
		std::cout << "size of b: ";
		std::cout << b.size() << std::endl;
		try
		{
			for(int i = 0; i <= b.size(); i++)
				std::cout << "b[" << i << "]: " << b[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		for(int i = 1; i < b.size(); i++)
				b[i] += i * 0.5;
		try
		{
			for(int i = 0; i <= b.size(); i++)
				std::cout << "b[" << i << "]: " << std::fixed << std::setprecision(1) <<  b[i] << "f" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}