#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string const &);
		~FragTrap(void);
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void vaulthunter_dot_exe(std::string const &);
		int get_vault_damage(void) { return ((this->get_level() + 1) * this->get_ranged_dmg());};
		std::string get_color(int);
};

#endif