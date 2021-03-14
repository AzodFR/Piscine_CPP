#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name), _dmg(damage), _cost(apcost)
{
}
AWeapon::AWeapon(const AWeapon&object)
{
	if (this != &object)
		*this = object;
}
AWeapon &AWeapon::operator=(const AWeapon &object)
{
	if (this != &object)
	{
		this->_name = object._name;
		this->_dmg = object._dmg;
		this->_cost = object._cost;
	}
	return *this;
}