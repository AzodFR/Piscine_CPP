#include "HumanB.hpp"

HumanB::HumanB(const std::string &n)
{
	this->name = n;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
	return;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	return ;
}