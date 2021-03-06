#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
#include <string>

class HumanA
{
	private:
		std::string name;
		const Weapon &weapon;
	public:
		HumanA(std::string, const Weapon &);
		~HumanA();
		void attack(void);
};

#endif