#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy("Rad Scorpion", 80)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}
