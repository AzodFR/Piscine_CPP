#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_knowed[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_knowed[i] != NULL)
			delete _knowed[i];
	}
}

void MateriaSource::learnMateria(AMateria *item)
{
	if (!item)
		return;
	int i;
	for ( i = 0; i < 4; i++)
	{
		if (_knowed[i] == NULL)
		{
			_knowed[i] = item;
			return ;
		}
	}
	if (i == 4)
		delete item;
}

AMateria *MateriaSource::createMateria(std::string const &name)
{
	for (int i = 0; i < 4; i++)
	{
		if (_knowed[i] != NULL && _knowed[i]->getType() == name)
			return _knowed[i]->clone();
	}
	return NULL;
}