#include "ZombieEvent.hpp"
#include <iostream>
#include <string>
#include <ctime>

ZombieEvent::ZombieEvent(void)
{
	default_type = 0;
	random = 0;
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombard = new Zombie(name, default_type);
	random++;
	return (zombard);
}

Zombie *ZombieEvent::randomChump(void)
{
	std::string list[] = {	"Splendot","Flaky","Skeleton",
							"Lifty","Giggles","Ghoul",
							"Splendit","Mime","Banshee",
							"Toothy","Eurynome","Skull",
							"Shifty","Marjo","Lammy",
							"Lumpy","Demetra","Nutty",
							"Flippy","Cayla","Ghost",
							"Handy","Petunia","Creeper",
							"Eligos","Célina","Mole",
							"Raijin","Zarya","Dark",
							"Etem","Nia","Wolfsbane",
							"Wolf","Tasha","Zavia"};
	srand((unsigned)time(NULL) + default_type + random);
	std::string name = list[rand() % 36];
	announce(name);
	Zombie *zombard = new Zombie(name, default_type);
	random++;
	return (zombard);
}

void ZombieEvent::setZombieType(int type)
{
	if (type < 0)
		this->default_type = 0;
	else if (type > 4)
		this->default_type = 4;
	else
		this->default_type = type;
}

void ZombieEvent::announce(std::string name)
{
	int rarity[] = {92, 96, 95, 93, 91};

	std::cout << "\e[" << rarity[this->default_type] << "m" <<  name << " \e[0m join the game" << std::endl;
}
