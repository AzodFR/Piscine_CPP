#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEVENT_HPP
# include <string>
# include <iostream>
# include "Zombie.hpp"
class ZombieEvent
{
	public:
		void setZombieType(Zombie, int);
		Zombie *newZombie(std::string);
};
#endif