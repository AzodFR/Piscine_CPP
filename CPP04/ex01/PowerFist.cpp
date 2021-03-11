#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &object) : AWeapon(object)
{
}

PowerFist &PowerFist::operator=(PowerFist const &object)
{
	AWeapon::operator=(object);
	return *this;
}
void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
