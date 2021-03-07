#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string &Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(const std::string &type)
{
	this->type = type;
	return ;
}