#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
#include <string>

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string, Weapon);
		~HumanB();
		void attack(void);
};

#endif