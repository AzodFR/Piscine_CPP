#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string const &);
		~NinjaTrap(void);
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void ninjaShoeBox(ClapTrap &);
		void ninjaShoeBox(FragTrap &);
		void ninjaShoeBox(ScavTrap &);
		void ninjaShoeBox(NinjaTrap &);
		std::string  get_color(int);
};

#endif