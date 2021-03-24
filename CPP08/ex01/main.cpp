#include "span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{ // MAX MIN
		Span sp = Span(2);
		sp.addNumber(INT32_MAX);
		sp.addNumber(INT32_MIN);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{ // Negative
		Span sp = Span(3);
		sp.addNumber(-8);
		sp.addNumber(-5);
		sp.addNumber(10);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{ // Invalid construction
		try
		{
			Span sp = Span(0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{ // Max size
		try
		{
			Span sp = Span(1);
			sp.addNumber(5);
			sp.addNumber(8);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{ // Dulicate number
		try
		{
			Span sp = Span(3);
			sp.addNumber(5);
			sp.addNumber(8);
			sp.addNumber(5);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{ // 1 Element compare
		try
		{
			Span sp = Span(1);
			sp.addNumber(5);
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{ //Empty
		try
		{
			Span sp = Span(1);
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}

// Range
	{ // Normal range
		try
		{
			Span sp = Span(10000);
			sp.addNumber(0, 9999);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{ // Too large range
		try
		{
			Span sp = Span(50);
			sp.addNumber(0, 9999);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{ // Duplicate elements
		try
		{
			Span sp = Span(50);
			sp.addNumber(0, 20);
			sp.addNumber(5, 10);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{ // Construct by copy
		try
		{
			Span sp = Span(50);
			sp.addNumber(0, 49);
			Span sp2(sp);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{ // Construct by assignation
		try
		{
			Span sp = Span(50);
			sp.addNumber(0, 49);
			Span sp2 = sp;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{ // Construct by assignation
		try
		{
			Span sp = Span(50);
			sp.addNumber(0, 49);
			Span sp2 = sp;
			sp.addNumber(0, 49);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp2.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	return (0);	
}