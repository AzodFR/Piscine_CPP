#include "Zombie.hpp"

Zombie::Zombie(std::string name, int type)
{
	std::string list[] = {"Common", "Uncommon", "Rare", "Legendary", "God"};
	this->name = name;
	this->type = list[type];
	this->color = type;
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void Zombie::advert(void)
{
	int rarity[] = {92, 96, 95, 93, 91};
	std::cout << "<" << this->name << " (\e[" << rarity[this->color] << "m" << this->type << "\e[0m)> Braiiiiiiinnnssss ..." << std::endl;
}
