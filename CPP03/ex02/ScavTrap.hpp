#ifndef ScavTrap_HPP
# define ScavTrap_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string const &);
		~ScavTrap(void);
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void challengeNewcomer(std::string const &);
		std::string  get_color(int);
};

#endif