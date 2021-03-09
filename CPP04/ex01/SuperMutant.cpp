#include "SuperMutant.hpp"

SuperMutant::SuperMutant(std::string const &name) : Enemy(name, 170, "Super Mutant")
{
	std::cout << "<\e[91m" << name << "\e[0m> Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "<\e[91m" << getName() << "\e[0m> Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int i)
{
	i -= 3;
	Enemy::takeDamage(i);
}