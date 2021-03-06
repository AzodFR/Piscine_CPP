#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>

HumanB::HumanB(std::string n, Weapon w)
{
	this->name = n;
	this->weapon = &w;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}