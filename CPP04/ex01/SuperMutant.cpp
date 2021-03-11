#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy("Super Mutant", 170)
{
	std::cout << " Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int i)
{
	i -= 3;
	Enemy::takeDamage(i);
}