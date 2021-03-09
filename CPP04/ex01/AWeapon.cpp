#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _cost(apcost), _dmg(damage)
{
}
AWeapon::AWeapon(const AWeapon&object) : _name(object.getName()), _cost(object.getAPCost()), _dmg(object.getDamage())
{
}
AWeapon &AWeapon::operator=(const AWeapon &object)
{
	return (*this);
}