#ifndef SPAN_HPP
# define SPAN_HPP

#include <set>
#include <iostream>

class Span
{
	private:
		unsigned int _N;
		std::set<int> _set;
		Span();
	public:
		Span(unsigned int);
		Span(Span const &obj);
		Span &operator=(Span const &obj);
		~Span();
		void addNumber(int);
		void addNumber(int, int);
		long longestSpan();
		long shortestSpan();
		class AlreadyInException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\e[91mNumber already in the span!\e[0m");
			}
		};
		class InvalidSizeException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\e[91mCannot create a Span with a size < 1!\e[0m");
			}
		};
		class MaxSizeException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\e[91mSize max reached !\e[0m");
			}
		};
		class EmptyException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\e[91mThe span is empty !\e[0m");
			}
		};
		class SingleElementException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\e[91mCannot compare only 1 elements\e[0m");
			}
		};
		class InvalidRangeException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\e[91mInvalid range\e[0m");
			}
		};
};

#endif