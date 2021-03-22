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

int Span::longestSpan()
{
	if (!_set.size())
		throw EmptyException();
	if (_set.size() == 1)
		throw SingleElementException();
	int begin = *_set.begin();
	int end = *--_set.end();
	return (end - begin);
}



int Span::shortestSpan()
{
	if (!_set.size())
		throw EmptyException();
	if (_set.size() == 1)
		throw SingleElementException();
	int prec;
	int diff;
	for (std::set<int>::iterator it = _set.begin(); it != _set.end(); ++it)
	{
		if (it == _set.begin())
		{
			prec = *it;
			diff = prec;
		}
		else
		{
			if (*it - prec < diff)
				diff = *it - prec;
			prec = *it;
		}
	}
	return (diff);
}