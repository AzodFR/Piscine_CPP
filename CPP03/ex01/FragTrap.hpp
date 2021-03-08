#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>


class FragTrap
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
		FragTrap(std::string const &);
		~FragTrap(void);
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void vaulthunter_dot_exe(std::string const &);
		int  get_melee_dmg(void) { return this->melee_dmg; };
		int  get_ranged_dmg(void) { return this->ranged_dmg; };
		int get_vault_damage(void) { return ((this->level + 1) * this->ranged_dmg); };
		std::string get_color(int);
};

#endif