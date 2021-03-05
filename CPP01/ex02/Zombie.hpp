#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string);
		~Zombie(void);
		void advert(void);
		void set_type(int);
	private:
		std::string name;
		int type;
};
#endif