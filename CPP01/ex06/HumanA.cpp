#include "HumanA.hpp"

HumanA::HumanA(const std::string &n, Weapon &w) : weapon(w)
{
	this->name = n;
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
	return ;
}