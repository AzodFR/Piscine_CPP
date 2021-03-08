#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
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
		ClapTrap(std::string const &u) : name(u){ std::cout << "OH ! New ClapTrap incoming ! Weclome to ! " << u << std::endl;};
		~ClapTrap() { std::cout << "Good-bye " << this->name << " !" << std::endl;};
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		//GETTER
		int  get_hp(void) { return this->hp;};
		int  get_max_hp(void) { return this->max_hp;};
		int  get_energy(void) { return this->energy;};
		int  get_max_energy(void) { return this->max_energy;};
		int  get_level(void) { return this->level;};
		std::string  get_name(void) { return this->name;};
		int  get_melee_dmg(void) { return this->melee_dmg;};
		int  get_ranged_dmg(void) { return this->ranged_dmg;};
		int  get_armor(void) { return this->armor;};
		//SETTER
		void  set_hp(int value) { this->hp = value; };
		void  set_max_hp(int value) { this->max_hp = value; };
		void  set_energy(int value) { this->energy = value; };
		void  set_max_energy(int value) { this->max_energy = value; };
		void  set_level(int value) { this->level = value; };
		void  set_name(std::string value) { this->name = value; };
		void  set_melee_dmg(int value) { this->melee_dmg = value; };
		void  set_ranged_dmg(int value) { this->ranged_dmg = value; };
		void  set_armor(int value) { this->armor = value; };
		std::string  get_color(int);
};
#endif