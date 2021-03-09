#include "PlasmaRiffle.hpp"

PlasmaRiffle::PlasmaRiffle(void) : AWeapon("Plasma Riffle", 21, 5)
{
}

void PlasmaRiffle::attack(void)
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}