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
}

void MateriaSource::learnMateria(AMateria *item)
{
	if (!item)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (_knowed[i] == NULL)
		{
			_knowed[i] = item;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &name)
{
	for (int i = 0; i < 4; i++)
	{
		if (_knowed[i] != NULL && _knowed[i]->getType() == name)
			return _knowed[i];
	}
	return NULL;
}