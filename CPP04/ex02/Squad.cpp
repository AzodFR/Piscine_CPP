#include "Squad.hpp"

Squad::Squad(void) : squad(NULL), last(0)
{
}


Squad::Squad(Squad &copy) : squad(NULL), last(0)
{
	int i = -1;
	while (++i < copy.getCount())
		push(copy.getUnit(i));
}

Squad::~Squad()
{
	for (int i = 0; i < last; i++)
		delete squad[i];
	delete [] squad;
}
Squad &Squad::operator=(Squad&copy)
{
	int i;
	for (i = 0; i < last; i++)
		delete squad[i];
	delete [] squad;
	last = 0;
	i = -1;
	while (++i < copy.getCount())
		push(copy.getUnit(i));
	return (*this);
}

int Squad::getCount(void) const
{
	return last;
}
ISpaceMarine *Squad::getUnit(int i) const
{
	if (i >= last || i < 0)
		return NULL;
	return squad[i];
}

int Squad::push(ISpaceMarine *unit)
{
	if (unit == NULL)
		return last;
	int i = -1;
	while (++i < last)
		if (squad[i] == unit)
			return last;
	ISpaceMarine **new_squad = new ISpaceMarine*[last + 1];
	i = -1;
	while (++i < last)
		new_squad[i] = squad[i];
	new_squad[i] = unit;
	delete [] squad;
	squad = new_squad;
	return ++last;
}