#include "Squad.hpp"

Squad::Squad(void) : squad(NULL), last(0)
{
};


Squad::Squad(Squad &copy)
{
	for (int i = 0; i <= copy.getCount(); i++)
		squad[i] = copy.getUnit(i);
	last = copy.getCount();
}

Squad &Squad::operator=(Squad&copy)
{
	for (int i = 0; i <= last; i++)
		delete squad[i];
	delete [] squad;
}

int Squad::getCount(void)
{
	return last;
}
ISpaceMarine *Squad::getUnit(int i)
{
	if (i > last)
		return NULL;
	return squad[i];
}

int Squad::push(ISpaceMarine *unit)
{
	if (unit == NULL)
		return last;
	int i = -1;
	while (++i <= last)
		if (squad[i] == unit)
			return last;
	squad[i] = unit;
	last++;
	return last;
}