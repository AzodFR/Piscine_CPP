#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void set_name(std::string);
		void set_type(int);

	private:
		std::string name;
		std::string type;
		int color;
};
#endif