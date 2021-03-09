#include "Knight.hpp"

Knight::Knight(std::string const &name) : Victim(name)
{
	std::cout << "Where is Doja Cat ?" << std::endl;
}

Knight::~Knight(void)
{
	std::cout << "Peace and prosperity..." << std::endl;
}

void Knight::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a green chihuahua!" << std::endl;
}