#include "Character.hpp"


Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_bag[i] = NULL;
	}
}

Character::Character(Character &object) : _name(object.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (object.getItem(i))
		{
			_bag[i] = object.getItem(i);
			object._bag[i] = NULL;
		}
		else
			_bag[i] = NULL;
	}
}

Character &Character::operator=(Character &object)
{
	for (int i = 0; i < 4; i++)
	{
		if (object.getItem(i))
		{
			_bag[i] = object.getItem(i);
			object._bag[i] = NULL;
		}
		else
			_bag[i] = NULL;
	}
	_name = object.getName();
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (getItem(i))
			delete _bag[i];
	}
}

void Character::equip(AMateria *item)
{
	if (!item)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (_bag[i] == NULL)
		{
			_bag[i] = item;
			return ;
		}
	}
}

void Character::unequip(int index)
{
	if (index < 0 || index > 3)
		return;
	if (_bag[index] == NULL)
		return ;
	_bag[index] = NULL;
	std::cout << "delete: " << index << std::endl;
}

void Character::use(int index, ICharacter &target)
{
	if (index < 0 || index > 3)
		return;
	if (_bag[index] == NULL)
		return;
	_bag[index]->use(target);
}