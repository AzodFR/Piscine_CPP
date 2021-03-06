#include "Weapon.hpp"

Weapon::Weapon(std::string types)
{
	type = types;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

const std::string &Weapon::getType(void)
{
	return (this->type);
}

const Weapon &Weapon::operator=(const Weapon &object) {
	return (*this);
}