#include "span.hpp"

Span::Span(unsigned int n) : _N(n)
{
	if (n < 1)
		throw InvalidSizeException();
}

Span::~Span() {}

Span::Span(Span const &obj) : _N(obj._N), _set(obj._set) {}


Span &Span::operator=(const Span &other) {
	if (this == &other)
		return(*this);
	return (*new Span(other));
}

void Span::addNumber(int n)
{
	if (_set.size() >= _N)
		throw MaxSizeException();
	if (!_set.insert(n).second)
		throw AlreadyInException();
}

void Span::addNumber(int start, int end)
{
	if (start > end)
		throw InvalidRangeException();
	for (int n = start; n <= end ; n++)
	{
		if (_set.size() >= _N)
			throw MaxSizeException();
		if (!_set.insert(n).second)
			throw AlreadyInException();
	}
}

long Span::longestSpan()
{
	if (!_set.size())
		throw EmptyException();
	if (_set.size() == 1)
		throw SingleElementException();
	long begin = *_set.begin();
	long end = *--_set.end();
	return (end - begin);
}



long Span::shortestSpan()
{
	if (!_set.size())
		throw EmptyException();
	if (_set.size() == 1)
		throw SingleElementException();

	long prec;
	long diff;
	for (std::set<int>::iterator it = _set.begin(); it != _set.end(); it++)
	{
		if (it == _set.begin())
		{
			prec = *it;
			it++;
			diff = std::abs(static_cast<long>(*it) - static_cast<long>(prec));
		}
		else
		{
			if (diff > std::abs(static_cast<long>(*it) - static_cast<long>(prec)))
				diff = std::abs(static_cast<long>(*it) - static_cast<long>(prec));
			prec = *(it);
		}
	}
	return (diff);
}