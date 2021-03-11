#include "PlasmaRiffle.hpp"

PlasmaRiffle::PlasmaRiffle(void) : AWeapon("Plasma Riffle",5,21)
{
}

PlasmaRiffle::PlasmaRiffle(PlasmaRiffle const &object) : AWeapon(object)
{
}

PlasmaRiffle &PlasmaRiffle::operator=(PlasmaRiffle const &object)
{
	AWeapon::operator=(object);
	return *this;
}

void PlasmaRiffle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}