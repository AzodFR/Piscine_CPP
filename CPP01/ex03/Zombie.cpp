#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "\e[" << this->color << "m" << this->name << "\e[91m died\e[0m" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (\e[" << this->color << "m" << this->type << "\e[0m)> Braiiiiiiinnnssss ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

void Zombie::set_type(int type)
{
	int rarity[] = {92, 96, 95, 93, 91};
	std::string list[] = {"Common", "Uncommon", "Rare", "Legendary", "God"};
	if (type < 0)
		type = 0;
	else if (type > 4)
		type = 4;
	this->type =  list[type];
	this->color = rarity[type];
}