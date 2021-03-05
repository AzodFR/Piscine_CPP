#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void Zombie::advert(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss ..." << std::endl;
}
void Zombie::set_type(int type)
{
	this->type = type;
	return ;
}