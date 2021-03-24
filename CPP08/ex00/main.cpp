#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
	{// Not found last
		std::vector<int> test;
		test.push_back(34);
		test.push_back(17);
		test.push_back(24);

		try
		{
			std::cout << "34: ";
			easyfind< std::vector<int> >(test, 34);
			std::cout << "\e[92mFound !";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
		std::cout << "\e[0m" << std::endl;
		try
		{
			std::cout << "17: ";
			easyfind< std::vector<int> >(test, 17);
			std::cout << "\e[92mFound !";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
		std::cout << "\e[0m" << std::endl;
		try
		{
			std::cout << "0: ";
			easyfind< std::vector<int> >(test, 0);
			std::cout << "\e[92mFound !";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what();
		}
		std::cout << "\e[0m" << std::endl;
		try
		{
			std::cout << "24: ";
			easyfind< std::vector<int> >(test, 34);
			std::cout << "\e[92mFound !";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
		std::cout << "\e[0m" << std::endl << std::endl;
	}
	{ // Empty
		std::vector<int> test;
		try
		{
			easyfind<std::vector<int> >(test, 34);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}