#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP
# include <string>
# include <iostream>
# include "Zombie.hpp"
class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void setZombieType(int);
		Zombie *newZombie(std::string);
		Zombie *randomChump(void);
		void	announce(std::string name);
	private:
		int default_type;
		int random;
};
#endif