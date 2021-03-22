#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
	{
		std::vector<int> test;
		test.push_back(34);
		test.push_back(17);
		test.push_back(24);

		try
		{
			std::cout << easyfind< std::vector<int> >(test, 34) << std::endl;
			std::cout << easyfind< std::vector<int> >(test, 17) << std::endl;
			std::cout << easyfind< std::vector<int> >(test, 24) << std::endl;
			std::cout << easyfind< std::vector<int> >(test, 57) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::vector<int> test;
		try
		{
			std::cout << easyfind<std::vector<int> >(test, 34) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}