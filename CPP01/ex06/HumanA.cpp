#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>

HumanA::HumanA(std::string n,const Weapon &w)
{
	this->name = n;
	this->weapon;
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}