#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>


class ScavTrap
{
	private:
		int hp;
		int max_hp;
		int energy;
		int max_energy;
		int level;
		std::string name;
		int melee_dmg;
		int ranged_dmg;
		int armor;
	public:
		ScavTrap(std::string const &);
		~ScavTrap(void);
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void challengeNewcomer(std::string const &);
		int  get_melee_dmg(void) { return this->melee_dmg;};
		int  get_ranged_dmg(void) { return this->ranged_dmg;};
		std::string  get_color(int);
};

#endif