#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8)
{
}

void PowerFist::attack(void)
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}