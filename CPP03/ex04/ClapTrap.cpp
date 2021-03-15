#include "ClapTrap.hpp"

std::string ClapTrap::get_color(int amount)
{
	if (amount < 33)
		return ("\e[91m");
	else if (amount < 66)
		return ("\e[93m");
	return ("\e[92m");
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hp -= (amount - this->armor);
	if (this->hp <= 0)
		this->hp = 0;
	std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
	<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
	<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m OUCHHHHH !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp + (int)amount <= this->max_hp)
		this->hp += amount;
	else
		this->hp = this->max_hp;
	std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
	<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
	<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m OOHH  ! My bolts are juicy back !" << std::endl;
}
