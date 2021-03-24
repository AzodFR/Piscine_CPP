#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>


class NotFoundException : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("\e[91mValue not found !\e[0m");
	}
};

class EmptyContainerException : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("\e[91mThe container is empty !\e[0m");
	}
};

template <typename T>
void easyfind(T array, const int n)
{
	typename T::iterator i;

	if (!array.size())
		throw(EmptyContainerException());
	i = std::find(array.begin(), array.end(), n);
	if (i == array.end())
		throw(NotFoundException());
}

#endif