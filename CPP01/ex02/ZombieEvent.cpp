#include "ZombieEvent.hpp"
#include <iostream>
#include <string>

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (&Zombie(name));
}

void ZombieEvent::setZombieType(Zombie zombie, int type)
{
	zombie.set_type(type);
}